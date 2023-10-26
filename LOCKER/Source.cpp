// Form header files
#include "loginForm.h"
#include "registerForm.h"
#include "homeForm.h"
#include "uploadForm.h"
#include <msclr/marshal_cppstd.h>
// User Handling header file
#include "Users.h"	
#include <filesystem>
#include <ctime>
#include "json.hpp"
namespace fs = std::filesystem;
using namespace System;
using namespace System::Windows::Forms;

// Window Switching Functions
void startLocker();
void regisWindow();
void homeWindow();
void uploadWindow();

std::string currUser;
std::string currUserPath = fs::current_path().string() + "\\UserFolders\\" + currUser;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Start the application
	startLocker();

	return 0;
}

void startLocker() {
	LOCKER::loginForm login;
	Application::Run(% login);
	

	if (login.openRegis) {
		regisWindow();
	}

	if (login.openHome) {
		System::String^ temp = login.currentUser;
		currUser = msclr::interop::marshal_as<std::string>(temp);
		homeWindow();
	}
} // end of startLocker

void regisWindow() {
	LOCKER::registerForm regis;
	regis.ShowDialog();

	if (regis.backToLogin) {
		startLocker();
	}
} // end of regisWindow

void homeWindow() {
	LOCKER::homeForm home;
	home.ShowDialog();

	if (home.signOff) {
		startLocker();
	}

	if (home.openUpload) {
		uploadWindow();
	}
} // end of homeWindow

void uploadWindow() {
	LOCKER::uploadForm upload;
	upload.ShowDialog();

	if (upload.backToHome) {
		System::String^ imgpath = upload.path;
		System::String^ imgname = upload.name;
		std::stringstream timestamp;
		timestamp << time(NULL);
		std::string imgpathstr = msclr::interop::marshal_as<std::string>(imgpath);
		fs::path imgPath = msclr::interop::marshal_as<std::string>(imgname);
		fs::path destPath = currUserPath + currUser + "\\" + timestamp.str() + ".jpg";
		fs::copy_file(imgPath, destPath, fs::copy_options::overwrite_existing);
		homeWindow();
	}
} // end of uploadWindow