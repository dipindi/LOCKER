#pragma once
#include "Users.h"

namespace LOCKER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class registerForm : public System::Windows::Forms::Form
	{
	public:
		registerForm(void)
		{
			InitializeComponent();
			getCredentials("users.txt");
		}

	protected:
		~registerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ passwordBox;
	private: System::Windows::Forms::TextBox^ usernameBox;
	private: System::Windows::Forms::Label^ passLabel;
	private: System::Windows::Forms::Label^ userLabel;
	private: System::Windows::Forms::Button^ signupButton;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registerForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->signupButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameBox = (gcnew System::Windows::Forms::TextBox());
			this->passLabel = (gcnew System::Windows::Forms::Label());
			this->userLabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->panel1->Controls->Add(this->signupButton);
			this->panel1->Location = System::Drawing::Point(0, 166);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(280, 64);
			this->panel1->TabIndex = 0;
			// 
			// signupButton
			// 
			this->signupButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->signupButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signupButton->Location = System::Drawing::Point(172, 13);
			this->signupButton->Name = L"signupButton";
			this->signupButton->Size = System::Drawing::Size(96, 39);
			this->signupButton->TabIndex = 13;
			this->signupButton->Text = L"sign up";
			this->signupButton->UseVisualStyleBackColor = false;
			this->signupButton->Click += gcnew System::EventHandler(this, &registerForm::signupButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(41, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &registerForm::pictureBox1_Click);
			// 
			// passwordBox
			// 
			this->passwordBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->passwordBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordBox->Font = (gcnew System::Drawing::Font(L"Fira Code", 11.5F));
			this->passwordBox->Location = System::Drawing::Point(47, 117);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(190, 28);
			this->passwordBox->TabIndex = 10;
			// 
			// usernameBox
			// 
			this->usernameBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->usernameBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->usernameBox->Font = (gcnew System::Drawing::Font(L"Fira Code", 11.5F));
			this->usernameBox->Location = System::Drawing::Point(47, 66);
			this->usernameBox->Name = L"usernameBox";
			this->usernameBox->Size = System::Drawing::Size(190, 28);
			this->usernameBox->TabIndex = 9;
			// 
			// passLabel
			// 
			this->passLabel->AutoSize = true;
			this->passLabel->Font = (gcnew System::Drawing::Font(L"Fira Code", 10));
			this->passLabel->Location = System::Drawing::Point(44, 97);
			this->passLabel->Name = L"passLabel";
			this->passLabel->Size = System::Drawing::Size(74, 22);
			this->passLabel->TabIndex = 11;
			this->passLabel->Text = L"password";
			// 
			// userLabel
			// 
			this->userLabel->AutoSize = true;
			this->userLabel->Font = (gcnew System::Drawing::Font(L"Fira Code", 10));
			this->userLabel->Location = System::Drawing::Point(44, 47);
			this->userLabel->Name = L"userLabel";
			this->userLabel->Size = System::Drawing::Size(74, 22);
			this->userLabel->TabIndex = 12;
			this->userLabel->Text = L"username";
			// 
			// registerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->ClientSize = System::Drawing::Size(280, 230);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->usernameBox);
			this->Controls->Add(this->passLabel);
			this->Controls->Add(this->userLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Fira Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"registerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	public: bool backToLogin = false;
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		backToLogin = true;
		this->Close();
	}
	private: System::Void signupButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->usernameBox->Text;
		String^ password = this->passwordBox->Text;

		bool existing = checkCredentials(username, password);
		if (existing) {
			MessageBox::Show("Account already exists");
		}
		else {
			addCredentials(username, password);
			MessageBox::Show("Account successfully created");
			backToLogin = true;
			this->Close();
		}
	}
};
}
