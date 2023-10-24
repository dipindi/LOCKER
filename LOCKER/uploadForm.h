#pragma once

namespace LOCKER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class uploadForm : public System::Windows::Forms::Form
	{
	public:
		uploadForm(void)
		{
			InitializeComponent();
		}

	protected:
		~uploadForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ confirmButton;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ imageUpload;


	private: System::Windows::Forms::OpenFileDialog^ ofd;

	private: System::Windows::Forms::Button^ uploadButton;
	private: System::Windows::Forms::ComboBox^ monthMenu;
	private: System::Windows::Forms::ComboBox^ yearMenu;



	protected:


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->confirmButton = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->imageUpload = (gcnew System::Windows::Forms::PictureBox());
			this->uploadButton = (gcnew System::Windows::Forms::Button());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->monthMenu = (gcnew System::Windows::Forms::ComboBox());
			this->yearMenu = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageUpload))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->panel1->Controls->Add(this->cancelButton);
			this->panel1->Controls->Add(this->confirmButton);
			this->panel1->Location = System::Drawing::Point(0, 320);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(624, 64);
			this->panel1->TabIndex = 1;
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->cancelButton->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelButton->Location = System::Drawing::Point(12, 13);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(96, 39);
			this->cancelButton->TabIndex = 14;
			this->cancelButton->Text = L"cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &uploadForm::cancelButton_Click);
			// 
			// confirmButton
			// 
			this->confirmButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->confirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmButton->Location = System::Drawing::Point(516, 13);
			this->confirmButton->Name = L"confirmButton";
			this->confirmButton->Size = System::Drawing::Size(96, 39);
			this->confirmButton->TabIndex = 13;
			this->confirmButton->Text = L"confirm";
			this->confirmButton->UseVisualStyleBackColor = false;
			this->confirmButton->Click += gcnew System::EventHandler(this, &uploadForm::confirmButton_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(1, 1);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(278, 189);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->Location = System::Drawing::Point(311, 97);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(280, 191);
			this->panel2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(312, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(280, 28);
			this->textBox1->TabIndex = 17;
			// 
			// imageUpload
			// 
			this->imageUpload->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->imageUpload->Location = System::Drawing::Point(33, 33);
			this->imageUpload->Name = L"imageUpload";
			this->imageUpload->Size = System::Drawing::Size(254, 254);
			this->imageUpload->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageUpload->TabIndex = 18;
			this->imageUpload->TabStop = false;
			// 
			// uploadButton
			// 
			this->uploadButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->uploadButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uploadButton->Font = (gcnew System::Drawing::Font(L"Fira Code Light", 12));
			this->uploadButton->Location = System::Drawing::Point(32, 32);
			this->uploadButton->Name = L"uploadButton";
			this->uploadButton->Size = System::Drawing::Size(256, 256);
			this->uploadButton->TabIndex = 19;
			this->uploadButton->Text = L"select image";
			this->uploadButton->UseVisualStyleBackColor = false;
			this->uploadButton->Click += gcnew System::EventHandler(this, &uploadForm::uploadButton_Click);
			// 
			// ofd
			// 
			this->ofd->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// monthMenu
			// 
			this->monthMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->monthMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monthMenu->Font = (gcnew System::Drawing::Font(L"Fira Code", 8));
			this->monthMenu->FormattingEnabled = true;
			this->monthMenu->Location = System::Drawing::Point(409, 32);
			this->monthMenu->Name = L"monthMenu";
			this->monthMenu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->monthMenu->Size = System::Drawing::Size(88, 25);
			this->monthMenu->TabIndex = 21;
			this->monthMenu->Text = L"  month";
			// 
			// yearMenu
			// 
			this->yearMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->yearMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yearMenu->Font = (gcnew System::Drawing::Font(L"Fira Code", 8));
			this->yearMenu->FormattingEnabled = true;
			this->yearMenu->Location = System::Drawing::Point(503, 32);
			this->yearMenu->Name = L"yearMenu";
			this->yearMenu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->yearMenu->Size = System::Drawing::Size(88, 25);
			this->yearMenu->TabIndex = 22;
			this->yearMenu->Text = L"   year";
			// 
			// uploadForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->ClientSize = System::Drawing::Size(624, 384);
			this->Controls->Add(this->yearMenu);
			this->Controls->Add(this->monthMenu);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->uploadButton);
			this->Controls->Add(this->imageUpload);
			this->Font = (gcnew System::Drawing::Font(L"Fira Code", 12));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"uploadForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"uploadForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageUpload))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		array<String^>^ files;
		String^ path;
		int currentIndex;

	public: bool backToHome = false;
	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		backToHome = true;
		this->Close();
	}

	private: System::Void confirmButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Entry successfully uploaded");
		backToHome = true;
		this->Close();
	}
	private: System::Void uploadButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			imageUpload->ImageLocation = ofd->FileName;
			path = System::IO::Path::GetDirectoryName(ofd->FileName);
			files = System::IO::Directory::GetFiles(path);

			for (int i = 0; i < files->Length; i++)
			{
				if (files[i] == ofd->FileName)
				{
					currentIndex = i;
					break;
				}
			}
		}
		imageUpload->BringToFront();
	}
};
}
