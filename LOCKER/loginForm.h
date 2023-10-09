#pragma once
#include "homeForm.h"
#include "registerForm.h"
#include <fstream>
#include <vector>
#include <string>

static struct loginCredentials {
	std::string username;
	std::string password;
};

static std::vector<loginCredentials> users;

namespace LOCKER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
		{
			InitializeComponent();
			getCredentials("users.txt");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ usernameBox;
	protected:
	private: System::Windows::Forms::TextBox^ passwordBox;
	private: System::Windows::Forms::Button^ signinButton;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::LinkLabel^ regisLink;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->usernameBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->signinButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->regisLink = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// usernameBox
			// 
			this->usernameBox->Location = System::Drawing::Point(85, 140);
			this->usernameBox->Name = L"usernameBox";
			this->usernameBox->Size = System::Drawing::Size(190, 28);
			this->usernameBox->TabIndex = 0;
			// 
			// passwordBox
			// 
			this->passwordBox->Location = System::Drawing::Point(85, 192);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(190, 28);
			this->passwordBox->TabIndex = 1;
			// 
			// signinButton
			// 
			this->signinButton->Location = System::Drawing::Point(45, 255);
			this->signinButton->Name = L"signinButton";
			this->signinButton->Size = System::Drawing::Size(131, 40);
			this->signinButton->TabIndex = 2;
			this->signinButton->Text = L"sign in";
			this->signinButton->UseVisualStyleBackColor = true;
			this->signinButton->Click += gcnew System::EventHandler(this, &loginForm::signinButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(196, 255);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(131, 40);
			this->exitButton->TabIndex = 3;
			this->exitButton->Text = L"exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &loginForm::exitButton_Click);
			// 
			// regisLink
			// 
			this->regisLink->AutoSize = true;
			this->regisLink->Location = System::Drawing::Point(247, 338);
			this->regisLink->Name = L"regisLink";
			this->regisLink->Size = System::Drawing::Size(92, 25);
			this->regisLink->TabIndex = 4;
			this->regisLink->TabStop = true;
			this->regisLink->Text = L"register";
			this->regisLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &loginForm::regisLink_LinkClicked);
			// 
			// loginForm
			// 
			this->AcceptButton = this->signinButton;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(368, 384);
			this->Controls->Add(this->regisLink);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->signinButton);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->usernameBox);
			this->Font = (gcnew System::Drawing::Font(L"Fira Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"loginForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void getCredentials (const std::string& filename) {
			std::ifstream file(filename);
			loginCredentials user;
			while (file >> user.username >> user.password) {
				users.push_back(user);
			}
			file.close();
		}

		bool checkCredentials(String^ username, String^ password) {
			for (const auto& user : users) {
				if (username == gcnew System::String(user.username.c_str()) && password == gcnew System::String(user.password.c_str())) {
					return true;
				}
			}
			return false;
		}

#pragma endregion
	private: System::Void signinButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->usernameBox->Text;
		String^ password = this->passwordBox->Text;

		bool successs = checkCredentials(username, password);

		if (successs) {
			this->Hide();
			homeForm^ home = gcnew homeForm();
			home->ShowDialog();
		}
	}
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void regisLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Hide();
		registerForm^ regis = gcnew registerForm();
		regis->ShowDialog();
	}
};
}
