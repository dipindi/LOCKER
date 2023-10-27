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
	static int currUserIndex = 0;
	std::ifstream inJson(currUserPath + currUser + "\\" + currUser + ".json");
	nlohmann::ordered_json imageJson;
	inJson >> imageJson;
	LOCKER::homeForm home;
	std::string jsonPathStr = currUserPath + currUser + "\\" + currUser + ".json";
	System::String^ jsonPath = gcnew String(jsonPathStr.c_str());
	home.jsonFilePath = jsonPath;
	home.ShowDialog();

	if (home.signOff) {
		startLocker();
	}

	if (home.openUpload) {
		uploadWindow();
	}

	if (home.previous) {
		
		if (currUserIndex != 0 ) {
			--currUserIndex;
		}
	}

	if (home.next) {

	}
} // end of homeWindow

void uploadWindow() {
	LOCKER::uploadForm upload;
	upload.ShowDialog();

	if (upload.backToHome) {
		System::String^ imgpath = upload.path;
		System::String^ imgname = upload.name;
		System::String^ title = upload.title;
		System::String^ desc = upload.description;
		static int currIndex = 0;
		std::stringstream indexstr;
		std::ifstream inTxt(fs::current_path().string() + "users.txt");
		int a, b;
		int c;
		inTxt >> a >> b >> c;
		currIndex += c;
		indexstr << currIndex;
		std::string imgpathstr = msclr::interop::marshal_as<std::string>(imgpath);

		// currUserPath + currUser + "\\" + currUser + ".json"

		fs::path imgPath = msclr::interop::marshal_as<std::string>(imgname);
		std::string imgTitle = msclr::interop::marshal_as<std::string>(title);
		std::string imgDesc = msclr::interop::marshal_as<std::string>(desc);
		fs::path destPath = currUserPath + currUser + "\\" + indexstr.str() + ".jpg";
		fs::copy_file(imgPath, destPath, fs::copy_options::overwrite_existing);

		// Write updated json file
		std::ofstream outTxt(currUserPath + currUser + "\\" + "images" + ".txt", std::ios::app);

		outTxt << indexstr.str() << ".jpg" << " " << imgTitle << " " << imgDesc << "\n";

		outTxt.close();

		homeWindow();
	}
} // end of upload window