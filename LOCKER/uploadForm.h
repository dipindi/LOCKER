#pragma once

namespace LOCKER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for uploadForm
	/// </summary>
	public ref class uploadForm : public System::Windows::Forms::Form
	{
	public:
		uploadForm(void)
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ ofd;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;


	protected:


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
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->confirmButton = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->richTextBox1->Size = System::Drawing::Size(278, 152);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->Location = System::Drawing::Point(312, 134);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(280, 154);
			this->panel2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(313, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(278, 30);
			this->textBox1->TabIndex = 17;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(275, 216);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(11, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(276, 36);
			this->button1->TabIndex = 19;
			this->button1->Text = L"open";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &uploadForm::button1_Click);
			// 
			// ofd
			// 
			this->ofd->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->dateTimePicker1->Location = System::Drawing::Point(392, 55);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 21);
			this->dateTimePicker1->TabIndex = 20;
			// 
			// uploadForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->ClientSize = System::Drawing::Size(624, 384);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"uploadForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"uploadForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBox1->ImageLocation = ofd->FileName;
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
}
};
}
