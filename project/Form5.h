#pragma once

namespace project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;      //

	/// <summary>
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Form5(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

			Form5(Form ^ obj1)
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
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form5::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->ForeColor = System::Drawing::Color::Chocolate;
			this->label1->Location = System::Drawing::Point(38, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter your word";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox1->ForeColor = System::Drawing::Color::Brown;
			this->textBox1->Location = System::Drawing::Point(42, 62);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 25);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form5::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->ForeColor = System::Drawing::Color::Chocolate;
			this->label2->Location = System::Drawing::Point(38, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter your Definition";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox2->ForeColor = System::Drawing::Color::Brown;
			this->textBox2->Location = System::Drawing::Point(42, 140);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(195, 65);
			this->textBox2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PeachPuff;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->ForeColor = System::Drawing::Color::Chocolate;
			this->button1->Location = System::Drawing::Point(42, 235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Add to Dictionary";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PeachPuff;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Chocolate;
			this->button2->Location = System::Drawing::Point(42, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(195, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Delete from Dictionary";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form5::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PeachPuff;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::Chocolate;
			this->button3->Location = System::Drawing::Point(73, 489);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form5::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PeachPuff;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Chocolate;
			this->button4->Location = System::Drawing::Point(766, 489);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 32);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form5::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->listBox1->ForeColor = System::Drawing::Color::Brown;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(371, 56);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(600, 396);
			this->listBox1->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->ForeColor = System::Drawing::Color::Chocolate;
			this->label3->Location = System::Drawing::Point(367, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 19);
			this->label3->TabIndex = 11;
			this->label3->Text = L"My Dictionary";
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(971, 533);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"Form5";
			this->Text = L"My Dictionary";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:void ClearControls()  // function to clear text from
				{
					textBox1->Text="";    //textBox1
					textBox2->Text="";    //textBox2
					//when user click Add to my Dictionary and Delete from my Dictionary button
				}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		    // when user click on back 
			 this->Hide();    // hide form5
			 obj->Show();     //show form1
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();  //to close program
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->CharacterCasing=CharacterCasing::Lower;  // make all character that user enter it be small letters
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ data=textBox1->Text + ":" +textBox2->Text;
			 String^ dictionary = data;
			 listBox1->Items->Clear();
			 StreamReader^ sr=gcnew StreamReader("MyDictionary.txt");  //to read from text file
			 while(!sr->EndOfStream)
			 {
				 listBox1->Items->Add(sr->ReadLine());  // read data from MyDictionary and show it on listBox1
			 }
			 sr->Close();
			 ClearControls();
			 listBox1->Items->Add(dictionary);
			 StreamWriter^ sw=gcnew StreamWriter("MyDictionary.txt");  //to write data into text file
			 for(int i=0;i<listBox1->Items->Count;i++)
			 {
				 sw->WriteLine(listBox1->Items[i]);   //write data into MyDictionary and show it on listBox1
			 }
			 sw->Close();
			 ClearControls();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Remove(listBox1->SelectedItem);     //user can delete any Selected data that he wants
		 }
private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
			 StreamReader^ sr=gcnew StreamReader("MyDictionary.txt");
			 while(!sr->EndOfStream)
			 {
				 listBox1->Items->Add(sr->ReadLine());
			 }
			 sr->Close();
			 ClearControls();
		 }

};
}
