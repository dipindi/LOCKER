#pragma once
#include "Users.h"
#include "loginForm.h"

namespace LOCKER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class homeForm : public System::Windows::Forms::Form
	{
	public:
		homeForm(void)
		{
			InitializeComponent();
		}

	protected:
		~homeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ headerImage;
	private: System::Windows::Forms::PictureBox^ logoutButton;
	protected:

	protected:

	private: System::Windows::Forms::Button^ uploadButton;
	private: System::Windows::Forms::Label^ greeting;


	private:
		System::ComponentModel::Container ^components;
	private: 

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(homeForm::typeid));
			this->headerImage = (gcnew System::Windows::Forms::PictureBox());
			this->logoutButton = (gcnew System::Windows::Forms::PictureBox());
			this->uploadButton = (gcnew System::Windows::Forms::Button());
			this->greeting = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->headerImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoutButton))->BeginInit();
			this->SuspendLayout();
			// 
			// headerImage
			// 
			this->headerImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"headerImage.Image")));
			this->headerImage->Location = System::Drawing::Point(0, 0);
			this->headerImage->Name = L"headerImage";
			this->headerImage->Size = System::Drawing::Size(624, 64);
			this->headerImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->headerImage->TabIndex = 0;
			this->headerImage->TabStop = false;
			// 
			// logoutButton
			// 
			this->logoutButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logoutButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoutButton.Image")));
			this->logoutButton->Location = System::Drawing::Point(560, 0);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(64, 64);
			this->logoutButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->logoutButton->TabIndex = 1;
			this->logoutButton->TabStop = false;
			this->logoutButton->Click += gcnew System::EventHandler(this, &homeForm::logoutButton_Click);
			// 
			// uploadButton
			// 
			this->uploadButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->uploadButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uploadButton->Location = System::Drawing::Point(8, 72);
			this->uploadButton->Name = L"uploadButton";
			this->uploadButton->Size = System::Drawing::Size(96, 39);
			this->uploadButton->TabIndex = 3;
			this->uploadButton->Text = L"upload";
			this->uploadButton->UseVisualStyleBackColor = false;
			this->uploadButton->Click += gcnew System::EventHandler(this, &homeForm::uploadButton_Click);
			// 
			// greeting
			// 
			this->greeting->AutoSize = true;
			this->greeting->Location = System::Drawing::Point(110, 79);
			this->greeting->Name = L"greeting";
			this->greeting->Size = System::Drawing::Size(142, 25);
			this->greeting->TabIndex = 4;
			this->greeting->Text = L"Hello, ";
			// 
			// homeForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->ClientSize = System::Drawing::Size(624, 703);
			this->Controls->Add(this->greeting);
			this->Controls->Add(this->uploadButton);
			this->Controls->Add(this->logoutButton);
			this->Controls->Add(this->headerImage);
			this->Font = (gcnew System::Drawing::Font(L"Fira Code", 12));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"homeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->headerImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoutButton))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool signOff = false;
	private: System::Void logoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
		signOff = true;
		this->Close();
	}
	
	public: bool openUpload = false;
	private: System::Void uploadButton_Click(System::Object^ sender, System::EventArgs^ e) {
		openUpload = true;
		this->Close();
	}
	};
}
