#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <ctime>
#include <string>
#include "lib.h"


namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace std;
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: Thread^ myThread;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox2->Location = System::Drawing::Point(38, 271);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(253, 311);
			this->textBox2->TabIndex = 23;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button2->Location = System::Drawing::Point(710, 407);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 63);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox3->Location = System::Drawing::Point(391, 271);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(253, 311);
			this->textBox3->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::Info;
			this->label5->Location = System::Drawing::Point(32, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(259, 32);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Полученные векторы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::Info;
			this->label4->Location = System::Drawing::Point(356, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(298, 32);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Отсортированный файл";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::Info;
			this->label3->Location = System::Drawing::Point(32, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 32);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Исходный файл";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button1->Location = System::Drawing::Point(710, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 63);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Vector";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox1->Location = System::Drawing::Point(32, 113);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(650, 61);
			this->textBox1->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(32, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 32);
			this->label2->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Info;
			this->label1->Location = System::Drawing::Point(459, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 38);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Кукелева Карина Сергеевна";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(871, 616);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTime datetime = DateTime::Now; //реализация текущей даты и времени на форме
		this->label2->Text = datetime.ToString();
		String^ Filename = "file1.txt";
		StreamReader^ file = File::OpenText(Filename);
		textBox1->Text = file->ReadToEnd();
		file->Close();
	}
		   public: void thread1()
		   {
			   BUTTON1();
		   }
			public: void thread2()
			{
				vector <string> s1;
				s1.resize(10);
				int i, j;
				ifstream b1("file2.txt");
				for (i = 0; i < 10; i++)
				{
					b1 >> s1[i];
				}
				b1.close();

				ofstream b("file2.txt");
				for (i = 0; i < 10; i++)
					sort(s1[i].begin(), s1[i].end()); //сортировка букв в векторе
				for (i = 0; i < 9; i++)
				{
					if (s1[i].compare(s1[i + 1]) == 1) //сортировка строк по возрастанию
					{
						swap(s1[i], s1[i + 1]);
						i = 0;
					}
				}
				for (i = 0; i < 10; i++)
					b << s1[i] << endl;
				b.close();
			}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	myThread = gcnew Thread(gcnew ThreadStart(this, &MyForm1::thread1));
	myThread->Start();
	myThread->Join();
	String^ Filename = "file2.txt";
	StreamReader^ file = File::OpenText(Filename);
	textBox2->Text = file->ReadToEnd();
	file->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	myThread = gcnew Thread(gcnew ThreadStart(this, &MyForm1::thread2));
	myThread->Start();
	myThread->Join();
	String^ Filename = "file2.txt";
	StreamReader^ file = File::OpenText(Filename);
	textBox3->Text = file->ReadToEnd();
	file->Close();
}
};
}
