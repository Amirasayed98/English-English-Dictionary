#pragma once

namespace project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;    // function to read and write into text file

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form2(Form ^ obj1)    
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SkyBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(42, 474);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SkyBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter your word";
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(42, 103);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 25);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form2::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(149, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 32);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(42, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SkyBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(874, 474);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 32);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(416, 103);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(439, 96);
			this->textBox2->TabIndex = 0;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form2::textBox2_TextChanged);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SkyBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button5->Location = System::Drawing::Point(66, 216);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(129, 43);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Add to Dictionary";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(982, 518);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->Text = L"English Dictionary";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();  // to closs the program
			 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel6_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamReader^ reader=gcnew StreamReader("English.txt");  // to read from English file
			 while(!reader->EndOfStream)
			 {
				 String^ read= reader->ReadLine();
				 array<String^> ^res;
				 res=read->Split(':');
				 if(textBox1->Text==res[0])    // check if the the user enter in textBox1 a word from first coloum 
				 {
					 textBox2->Text=res[1];   // if yes, write in textBox2 a definition from second coloum
					 break;
				
			     }
				if(textBox1->Text!=res[0])
				 {
					textBox2->Text="This word not found";   // if no, show messagebox 
					 continue;
				 }
			 }
				
             reader->Close(); // close the file
				 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="";   // when user click on button clear , make textBox1 empty
			 textBox2->Text="";   // and make textBox2 empty
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 // when user click on back 
			 this->Hide();    // hide form2
			 obj->Show();     //show form1
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->CharacterCasing=CharacterCasing::Lower;  // make all character that user enter it be small letters
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 // to Add word and difinition to my(favourite)dictionary
			 String^ data=textBox1->Text +":" +textBox2->Text+"\n";
			 String^ dictionary=data;
			 StreamWriter^ sr=gcnew StreamWriter("MyDictionary.txt",true);
			 sr->Write(dictionary);
			 sr->Close();
		 }
};
}
