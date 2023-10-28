#pragma once
#include "Users.h"
#include "loginForm.h"
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
#include "json.hpp"

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

	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ sortButton;
	private: System::Windows::Forms::ComboBox^ yearMenu;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->sortButton = (gcnew System::Windows::Forms::Button());
			this->yearMenu = (gcnew System::Windows::Forms::ComboBox());
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
			this->uploadButton->Location = System::Drawing::Point(12, 75);
			this->uploadButton->Name = L"uploadButton";
			this->uploadButton->Size = System::Drawing::Size(96, 51);
			this->uploadButton->TabIndex = 3;
			this->uploadButton->Text = L"upload";
			this->uploadButton->UseVisualStyleBackColor = false;
			this->uploadButton->Click += gcnew System::EventHandler(this, &homeForm::uploadButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(111, 148);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 400);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &homeForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(24, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 64);
			this->button1->TabIndex = 8;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &homeForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 619);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 32);
			this->label1->TabIndex = 10;
			this->label1->Text = L"description";
			this->label1->Click += gcnew System::EventHandler(this, &homeForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"PP Agrandir Text", 14, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(110, 563);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 32);
			this->label2->TabIndex = 11;
			this->label2->Text = L"TITLE";
			this->label2->Click += gcnew System::EventHandler(this, &homeForm::label2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Fira Code", 8));
			this->button3->Location = System::Drawing::Point(531, 655);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 36);
			this->button3->TabIndex = 12;
			this->button3->Text = L"refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &homeForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"PP Agrandir Text", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(111, 595);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 26);
			this->label4->TabIndex = 14;
			this->label4->Text = L"0000";
			this->label4->Click += gcnew System::EventHandler(this, &homeForm::label4_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Fira Code", 8));
			this->button4->Location = System::Drawing::Point(531, 512);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 36);
			this->button4->TabIndex = 15;
			this->button4->Text = L"delete";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &homeForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Fira Code", 8));
			this->button5->Location = System::Drawing::Point(444, 655);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 36);
			this->button5->TabIndex = 16;
			this->button5->Text = L"edit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &homeForm::button5_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(538, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 64);
			this->button2->TabIndex = 9;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &homeForm::button2_Click);
			// 
			// sortButton
			// 
			this->sortButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->sortButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sortButton->Font = (gcnew System::Drawing::Font(L"Fira Code", 8));
			this->sortButton->Location = System::Drawing::Point(357, 655);
			this->sortButton->Name = L"sortButton";
			this->sortButton->Size = System::Drawing::Size(81, 36);
			this->sortButton->TabIndex = 17;
			this->sortButton->Text = L"sort";
			this->sortButton->UseVisualStyleBackColor = false;
			this->sortButton->Click += gcnew System::EventHandler(this, &homeForm::sortButton_Click);
			// 
			// yearMenu
			// 
			this->yearMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->yearMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yearMenu->Font = (gcnew System::Drawing::Font(L"Fira Code", 8));
			this->yearMenu->FormattingEnabled = true;
			this->yearMenu->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
				L"All", L"1998", L"1999", L"2000", L"2001", L"2002",
					L"2003", L"2004", L"2005", L"2006", L"2007", L"2008", L"2009", L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016",
					L"2017", L"2018", L"2019", L"2020", L"2021", L"2022", L"2023"
			});
			this->yearMenu->Location = System::Drawing::Point(423, 113);
			this->yearMenu->Name = L"yearMenu";
			this->yearMenu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->yearMenu->Size = System::Drawing::Size(88, 29);
			this->yearMenu->TabIndex = 23;
			this->yearMenu->Text = L"All";
			this->yearMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &homeForm::yearMenu_SelectedIndexChanged);
			// 
			// homeForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->ClientSize = System::Drawing::Size(624, 703);
			this->Controls->Add(this->yearMenu);
			this->Controls->Add(this->sortButton);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool signOff = false;
		  int currentPicture = 0;
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
		int numEntries;
		String^ selectedYear;
	private: System::Void UpdateImage() {
		msclr::interop::marshal_context context;
		std::string jsonFilePathString = context.marshal_as<std::string>(jsonFilePath);
		nlohmann::ordered_json imageJson;
		nlohmann::json imageJsonAsc;
		nlohmann::json imageJsonDesc;
		std::ifstream inJson(jsonFilePathString);
		inJson >> imageJson;

		imageJsonDesc = imageJsonAsc;
		numEntries = imageJson["images"].size();

		std::vector<int> matchingIndices;
		for (int i = 0; i < numEntries; i++) {
			std::string imgYear = imageJson["images"][i]["img_year"].get<std::string>();
			if (selectedYear == "" || selectedYear == gcnew String(imgYear.c_str())) {
				matchingIndices.push_back(i);
			}
		}

			if (selectedYear == "All") {
				// Get image path, description, and title
				std::string imagePath = imageJson["images"][currentPicture]["imgpath"].get<std::string>();
				std::string imgDesc = imageJson["images"][currentPicture]["img_desc"].get<std::string>();
				std::string imgTitle = imageJson["images"][currentPicture]["img_title"].get<std::string>();
				std::string imgMonth = imageJson["images"][currentPicture]["img_month"].get<std::string>();
				std::string imgYear = imageJson["images"][currentPicture]["img_year"].get<std::string>();

				// Update PictureBox with the image
				String^ imagePathStr = gcnew String(imagePath.c_str());
				if (System::IO::File::Exists(imagePathStr)) {
					pictureBox1->ImageLocation = imagePathStr;
				}

				// Update image description and title
				label1->Text = gcnew String(imgDesc.c_str());
				label2->Text = gcnew String(imgTitle.c_str());
				String^ monthNyear = gcnew String(imgMonth.c_str()) + " " + gcnew String(imgYear.c_str());
				label4->Text = monthNyear;
			}
			else {
				int imageIndex = matchingIndices[currentPicture];

				// Get image path, description, title, and other details
				std::string imagePath = imageJson["images"][imageIndex]["imgpath"].get<std::string>();
				std::string imgDesc = imageJson["images"][imageIndex]["img_desc"].get<std::string>();
				std::string imgTitle = imageJson["images"][imageIndex]["img_title"].get<std::string>();
				std::string imgMonth = imageJson["images"][imageIndex]["img_month"].get<std::string>();
				std::string imgYear = imageJson["images"][imageIndex]["img_year"].get<std::string>();

				// Update PictureBox with the image
				String^ imagePathStr = gcnew String(imagePath.c_str());
				if (System::IO::File::Exists(imagePathStr)) {
					pictureBox1->ImageLocation = imagePathStr;
				}

				// Update image description and title
				label1->Text = gcnew String(imgDesc.c_str());
				label2->Text = gcnew String(imgTitle.c_str());
				String^ monthNyear = gcnew String(imgMonth.c_str()) + " " + gcnew String(imgYear.c_str());
				label4->Text = monthNyear;
			}
		}

	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (filter == false) {
				currentPicture++;
				UpdateImage(); 
		}
		if (filter == true) {
				currentPicture--;
				UpdateImage();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (filter == false) {
			currentPicture--;
			UpdateImage();
		}
		if (filter == true) {
			currentPicture++;
			UpdateImage();
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateImage();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void deleteEntry() {
		msclr::interop::marshal_context context;
		std::string jsonFilePathString = context.marshal_as<std::string>(jsonFilePath);
		nlohmann::ordered_json imageJson;
		std::ifstream inJson(jsonFilePathString);
		inJson >> imageJson;

		if (imageJson.find("images") != imageJson.end() && imageJson["images"].is_array()) {
			if (currentPicture >= 0 && currentPicture < imageJson["images"].size()) {
				imageJson["images"].erase(imageJson["images"].begin() + currentPicture);

				std::ofstream outJson(jsonFilePathString);
				outJson << imageJson;
			}
		}
		currentPicture = 0;
	}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteEntry();
		MessageBox::Show("Entry deleted");
		UpdateImage();
	}
public: bool openEditor = false;
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	openEditor = true;
	this->Close();
}

public:
	bool filter = false;
private: System::Void sortButton_Click(System::Object^ sender, System::EventArgs^ e) {
	filter ? true : false;
	filter = !filter;
}
private: System::Void yearMenu_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedYear = yearMenu->Text;
	UpdateImage();
}
};
}
