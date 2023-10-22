// Forms
#include "loginForm.h"
#include "registerForm.h"
#include "homeForm.h"

// Users Header file
#include "Users.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void regisUser();
void authUser();

void regisUser() {
	LOCKER::registerForm regis;
	regis.ShowDialog();

	if (regis.backToLogin) {
		authUser();
	}
}

void authUser() {
	LOCKER::loginForm login;
	LOCKER::
	Application::Run(% login);
	
	if (login.switchToRegis) {
		regisUser();
	}

	if (login.switchToMain) {
		LOCKER::homeForm home;
		home.ShowDialog();
	}
}

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	authUser();
}