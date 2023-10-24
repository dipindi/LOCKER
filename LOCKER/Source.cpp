// Form header files
#include "loginForm.h"
#include "registerForm.h"
#include "homeForm.h"
#include "uploadForm.h"

// User Handling header file
#include "Users.h"

using namespace System;
using namespace System::Windows::Forms;

// Window Switching Functions
void startLocker();
void regisWindow();
void homeWindow();
void uploadWindow();

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
		homeWindow();
	}
} // end of uploadWindow