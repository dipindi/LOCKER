#pragma once
#include "json.hpp"
#include <fstream>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

namespace LOCKER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for editForm
	/// </summary>
	public ref class editForm : public System::Windows::Forms::Form
	{
	public:
		editForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~editForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ saveButton;
	protected:


	private: System::Windows::Forms::Label^ titleLabel;
	private: System::Windows::Forms::TextBox^ titleBox;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RichTextBox^ descBox;
	private: System::Windows::Forms::PictureBox^ imageEdit;

	private: System::Windows::Forms::Label^ descLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->titleBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->descBox = (gcnew System::Windows::Forms::RichTextBox());
			this->imageEdit = (gcnew System::Windows::Forms::PictureBox());
			this->descLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageEdit))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->panel1->Controls->Add(this->saveButton);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 320);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(624, 64);
			this->panel1->TabIndex = 2;
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Location = System::Drawing::Point(503, 13);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(109, 39);
			this->saveButton->TabIndex = 13;
			this->saveButton->Text = L"save";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &editForm::saveButton_Click);
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"PP Agrandir Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->titleLabel->Location = System::Drawing::Point(308, 36);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(65, 26);
			this->titleLabel->TabIndex = 29;
			this->titleLabel->Text = L"TITLE";
			// 
			// titleBox
			// 
			this->titleBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->titleBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titleBox->Location = System::Drawing::Point(312, 63);
			this->titleBox->Name = L"titleBox";
			this->titleBox->Size = System::Drawing::Size(280, 34);
			this->titleBox->TabIndex = 26;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel2->Controls->Add(this->descBox);
			this->panel2->Location = System::Drawing::Point(311, 118);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(280, 167);
			this->panel2->TabIndex = 25;
			// 
			// descBox
			// 
			this->descBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->descBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->descBox->Location = System::Drawing::Point(1, 1);
			this->descBox->Name = L"descBox";
			this->descBox->Size = System::Drawing::Size(278, 165);
			this->descBox->TabIndex = 3;
			this->descBox->Text = L"";
			// 
			// imageEdit
			// 
			this->imageEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->imageEdit->Location = System::Drawing::Point(32, 34);
			this->imageEdit->Name = L"imageEdit";
			this->imageEdit->Size = System::Drawing::Size(254, 254);
			this->imageEdit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageEdit->TabIndex = 27;
			this->imageEdit->TabStop = false;
			// 
			// descLabel
			// 
			this->descLabel->AutoSize = true;
			this->descLabel->Font = (gcnew System::Drawing::Font(L"PP Agrandir Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descLabel->Location = System::Drawing::Point(308, 94);
			this->descLabel->Name = L"descLabel";
			this->descLabel->Size = System::Drawing::Size(149, 26);
			this->descLabel->TabIndex = 30;
			this->descLabel->Text = L"DESCRIPTION";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"PP Agrandir Text", 12, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Location = System::Drawing::Point(379, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 26);
			this->label4->TabIndex = 31;
			this->label4->Text = L"0000";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 41);
			this->button1->TabIndex = 32;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &editForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(99, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 41);
			this->button2->TabIndex = 33;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &editForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Fira Code", 8));
			this->button3->Location = System::Drawing::Point(185, 331);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 41);
			this->button3->TabIndex = 34;
			this->button3->Text = L"refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &editForm::button3_Click);
			// 
			// editForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->ClientSize = System::Drawing::Size(624, 384);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->titleLabel);
			this->Controls->Add(this->titleBox);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->imageEdit);
			this->Controls->Add(this->descLabel);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Fira Code", 12));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->Name = L"editForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"editForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageEdit))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int currentPicEdit = 0;
		System::String^ jsonFilePathEdit;

	private: System::Void UpdateImage() {
		msclr::interop::marshal_context context;
		std::string jsonFilePathString = context.marshal_as<std::string>(jsonFilePathEdit);
		std::ifstream inJson(jsonFilePathString);
		nlohmann::ordered_json imageJson;
		inJson >> imageJson;

		// Get image path, description, and title
		std::string imagePath = imageJson["images"][currentPicEdit]["imgpath"].get<std::string>();
		std::string imgDesc = imageJson["images"][currentPicEdit]["img_desc"].get<std::string>();
		std::string imgTitle = imageJson["images"][currentPicEdit]["img_title"].get<std::string>();
		std::string imgMonth = imageJson["images"][currentPicEdit]["img_month"].get<std::string>();
		std::string imgYear = imageJson["images"][currentPicEdit]["img_year"].get<std::string>();

		// Update PictureBox with the image
		String^ imagePathStr = gcnew String(imagePath.c_str());
		if (System::IO::File::Exists(imagePathStr)) {
			imageEdit->ImageLocation = imagePathStr;
		}

		String^ monthNyear = gcnew String(imgMonth.c_str()) + " " + gcnew String(imgYear.c_str());

		// Display image description and title
		titleBox->Text = gcnew String(imgTitle.c_str());
		descBox->Text = gcnew String(imgDesc.c_str());
		label4->Text = monthNyear;
	}

	public: bool saveEntry = false;
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string jsonFilePathString = context.marshal_as<std::string>(jsonFilePathEdit);
		nlohmann::json nlohmannJson;

		// Read the existing JSON data
		std::ifstream inJson(jsonFilePathString);
		inJson >> nlohmannJson;

		// Update the img_title in the JSON data
		nlohmannJson["images"][currentPicEdit]["img_title"] = msclr::interop::marshal_as<std::string>(titleBox->Text);
		nlohmannJson["images"][currentPicEdit]["img_desc"] = msclr::interop::marshal_as<std::string>(descBox->Text);

		// Write the updated JSON back to the file
		std::ofstream outJson(jsonFilePathString);
		outJson << std::setw(4) << nlohmannJson;
		outJson.close();

		saveEntry = true;
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentPicEdit > 0)
		currentPicEdit--;
	UpdateImage();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	currentPicEdit++;
	UpdateImage();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateImage();
}
};
}
