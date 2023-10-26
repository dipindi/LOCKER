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

/*void uploadWindow() {
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
} // end of uploadWindow*/

void uploadWindow() {
	LOCKER::uploadForm upload;
	upload.ShowDialog();
	if (upload.backToHome) {
		nlohmann::ordered_json currUserJson;
		String^ imgpath = upload.path;
		String^ imgname = upload.name;
		String^ title = upload.title;
		String^ desc = upload.description;

		std::stringstream timestamp;
		timestamp << time(NULL);
		std::string imgpathstr = msclr::interop::marshal_as<std::string>(imgpath);
		std::string titlestr = msclr::interop::marshal_as<std::string>(title);
		std::string descstr = msclr::interop::marshal_as<std::string>(desc);

		// Individual image info object
		nlohmann::ordered_json imageInfo;
		imageInfo["img_title"] = titlestr;
		imageInfo["img_desc"] = descstr;
		imageInfo["imgpath"] = currUserPath + currUser + "\\" + timestamp.str() + ".jpg";

		// Read existing JSON file if it exists
		std::ifstream inJson(msclr::interop::marshal_as<std::string>(currUserPath + currUser + "\\" + currUser + ".json"));
		if (inJson.good()) {
			inJson >> currUserJson;
		}
		inJson.close();

		// Append new data
		currUserJson["images"].push_back(imageInfo);

		fs::path imgPath = msclr::interop::marshal_as<std::string>(imgname);
		fs::path destPath = currUserPath + currUser + "\\" + timestamp.str() + ".jpg";
		fs::copy_file(imgPath, destPath, fs::copy_options::overwrite_existing);

		// Write updated JSON file
		std::ofstream outJson(msclr::interop::marshal_as<std::string>(currUserPath + currUser + "\\" + currUser + ".json"));
		outJson << std::setw(4) << currUserJson;
		outJson.close();

		homeWindow();
	}
}