#pragma once
#include "Form2.h"   //to access form2
#include "Form3.h"   //to access form3
#include "Form4.h"   //to access form4
#include "Form5.h"   //to access form5
namespace project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PeachPuff;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Chocolate;
			this->label1->Location = System::Drawing::Point(323, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(396, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hello in English Dictionary";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PeachPuff;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Chocolate;
			this->button4->Location = System::Drawing::Point(479, 434);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PeachPuff;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Chocolate;
			this->button3->Location = System::Drawing::Point(409, 256);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(218, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Mathematical Dictionary";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PeachPuff;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Chocolate;
			this->button2->Location = System::Drawing::Point(409, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(218, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Medical Dictionary";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PeachPuff;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Chocolate;
			this->button1->Location = System::Drawing::Point(409, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"English Dictionary";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::PeachPuff;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button5->ForeColor = System::Drawing::Color::Chocolate;
			this->button5->Location = System::Drawing::Point(409, 335);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(218, 39);
			this->button5->TabIndex = 5;
			this->button5->Text = L"My Dictionary";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 520);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"Form1";
			this->Text = L"English English Dictionary";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();   //to closs the program
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();       // to hide form2 when click on button back
			 Form2^ frm=gcnew Form2(this);       // to make new form (form2)
			 frm->Show();     // to show form2 when click on button English dictionary
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();       // to hide form3 when click on button back       
			 Form3^ frm=gcnew Form3(this);         // to make new form (form3)
		     frm->Show();     // to show form3 when click on button Medical dictionary
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();      // to hide form4 when click on button back
			  Form4^ frm=gcnew Form4(this);   // to make new form (form4)
			  frm->Show();     //  to show form4 when click on button mathemtical dictionary
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();      // to hide form5 when click on button back
			  Form5^ frm=gcnew Form5(this);   // to make new form (form5)
			  frm->Show();     //  to show form5 when click on button my dictionary
		 }
};
}

