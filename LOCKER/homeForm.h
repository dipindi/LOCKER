#pragma once
#include "Users.h"
#include "json.hpp"
#include <msclr/marshal_cppstd.h>

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->headerImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoutButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->greeting->Size = System::Drawing::Size(66, 25);
			this->greeting->TabIndex = 4;
			this->greeting->Text = L"Hello, ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(188, 228);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(259, 323);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(287, 575);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"TITLE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(279, 618);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"caption";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(130, 620);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 37);
			this->button1->TabIndex = 8;
			this->button1->Text = L"previous";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(455, 620);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 9;
			this->button2->Text = L"next";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// homeForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->ClientSize = System::Drawing::Size(624, 703);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->greeting);
			this->Controls->Add(this->uploadButton);
			this->Controls->Add(this->logoutButton);
			this->Controls->Add(this->headerImage);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"homeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->headerImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoutButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	public: bool previous = false;
	public: bool next = false;
	private: System::Void uploadButton_Click(System::Object^ sender, System::EventArgs^ e) {
		openUpload = true;
		this->Close();
	}

public:
	String^ jsonFilePath;
	int currentPicture = 1;

private:
	System::Void UpdateImage() {
		nlohmann::ordered_json imageJson;
		msclr::interop::marshal_context context;
		std::string jsonFilePathString = context.marshal_as<std::string>(jsonFilePath);
		std::ifstream inJson(jsonFilePathString);
		if (inJson.good()) {
			inJson >> imageJson;
		}
		inJson.close();

		if (imageJson.contains("images") && imageJson["images"].is_array() && currentPicture < imageJson["images"].size()) {
			String^ imagePath = gcnew String(imageJson["images"][currentPicture]["imgpath"].get<std::string>().c_str());

			if (System::IO::File::Exists(imagePath)) {
				pictureBox1->ImageLocation = imagePath;
				pictureBox1->BringToFront();
			}
		}
	}

	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (currentPicture > 1) {
				currentPicture--;
				UpdateImage();
			}
		}
	private:
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			nlohmann::ordered_json imageJson;
			msclr::interop::marshal_context context;
			std::string jsonFilePathString = context.marshal_as<std::string>(jsonFilePath);
			std::ifstream inJson(jsonFilePathString);
			if (inJson.good()) {
				inJson >> imageJson;
			}
			inJson.close();

			if (imageJson.contains("images") && imageJson["images"].is_array() && currentPicture < imageJson["images"].size()) {
				currentPicture++;
				UpdateImage();
			}
		}
};
}
