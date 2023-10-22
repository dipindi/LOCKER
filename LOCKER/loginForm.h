#pragma once
#include "Users.h"

namespace LOCKER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
		{
			InitializeComponent();
			getCredentials("users.txt");
		}

	protected:
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


	private: System::Windows::Forms::Label^ passLabel;
	private: System::Windows::Forms::Label^ userLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginForm::typeid));
			this->usernameBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->signinButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->regisLink = (gcnew System::Windows::Forms::LinkLabel());
			this->passLabel = (gcnew System::Windows::Forms::Label());
			this->userLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// usernameBox
			// 
			this->usernameBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->usernameBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->usernameBox->Font = (gcnew System::Drawing::Font(L"Fira Code", 11.5F));
			this->usernameBox->Location = System::Drawing::Point(85, 164);
			this->usernameBox->Name = L"usernameBox";
			this->usernameBox->Size = System::Drawing::Size(190, 28);
			this->usernameBox->TabIndex = 0;
			// 
			// passwordBox
			// 
			this->passwordBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->passwordBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordBox->Font = (gcnew System::Drawing::Font(L"Fira Code", 11.5F));
			this->passwordBox->Location = System::Drawing::Point(85, 215);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(190, 28);
			this->passwordBox->TabIndex = 1;
			this->passwordBox->UseSystemPasswordChar = true;
			// 
			// signinButton
			// 
			this->signinButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->signinButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signinButton->Location = System::Drawing::Point(78, 280);
			this->signinButton->Name = L"signinButton";
			this->signinButton->Size = System::Drawing::Size(96, 39);
			this->signinButton->TabIndex = 2;
			this->signinButton->Text = L"sign in";
			this->signinButton->UseVisualStyleBackColor = false;
			this->signinButton->Click += gcnew System::EventHandler(this, &loginForm::signinButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitButton->Location = System::Drawing::Point(194, 280);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(96, 39);
			this->exitButton->TabIndex = 3;
			this->exitButton->Text = L"exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &loginForm::exitButton_Click);
			// 
			// regisLink
			// 
			this->regisLink->AutoSize = true;
			this->regisLink->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->regisLink->Location = System::Drawing::Point(264, 350);
			this->regisLink->Name = L"regisLink";
			this->regisLink->Size = System::Drawing::Size(92, 25);
			this->regisLink->TabIndex = 4;
			this->regisLink->TabStop = true;
			this->regisLink->Text = L"register";
			this->regisLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &loginForm::regisLink_LinkClicked);
			// 
			// passLabel
			// 
			this->passLabel->AutoSize = true;
			this->passLabel->Font = (gcnew System::Drawing::Font(L"Fira Code", 10));
			this->passLabel->Location = System::Drawing::Point(82, 195);
			this->passLabel->Name = L"passLabel";
			this->passLabel->Size = System::Drawing::Size(74, 22);
			this->passLabel->TabIndex = 7;
			this->passLabel->Text = L"password";
			// 
			// userLabel
			// 
			this->userLabel->AutoSize = true;
			this->userLabel->Font = (gcnew System::Drawing::Font(L"Fira Code", 10));
			this->userLabel->Location = System::Drawing::Point(82, 145);
			this->userLabel->Name = L"userLabel";
			this->userLabel->Size = System::Drawing::Size(74, 22);
			this->userLabel->TabIndex = 8;
			this->userLabel->Text = L"username";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(85, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// loginForm
			// 
			this->AcceptButton = this->signinButton;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->ClientSize = System::Drawing::Size(368, 384);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->regisLink);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->signinButton);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->usernameBox);
			this->Controls->Add(this->passLabel);
			this->Controls->Add(this->userLabel);
			this->Font = (gcnew System::Drawing::Font(L"Fira Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"loginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	public: bool switchToMain = false;
	private: System::Void signinButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->usernameBox->Text;
		String^ password = this->passwordBox->Text;

		bool auth = checkCredentials(username, password);

		if (auth) {
			switchToMain = true;
			this->Close();
		}
		else {
			MessageBox::Show("Username or Password is incorrect");
		}
	}
	
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	public: bool switchToRegis = false;
	private: System::Void regisLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToRegis = true;
		this->Close();
	}
};
}
