// Forms
#include "loginForm.h"
#include "registerForm.h"
#include "homeForm.h"
#include "uploadForm.h"

// Users Header file
#include "Users.h"

using namespace System;
using namespace System::Windows::Forms;


// Function declarations
void startLocker();
void regisWindow();
void homeWindow();
void uploadWindow();

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Start the locker
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
}

void regisWindow() {
	LOCKER::registerForm regis;
	regis.ShowDialog();

	if (regis.backToLogin) {
		startLocker();
	}
}

void homeWindow() {
	LOCKER::homeForm home;
	home.ShowDialog();

	if (home.signOff) {
		startLocker();
	}

	if (home.openUpload) {
		uploadWindow();
	}
}

void uploadWindow() {
	LOCKER::uploadForm upload;
	upload.ShowDialog();

	if (upload.backToHome) {
		homeWindow();
	}
}