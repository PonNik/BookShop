#pragma once
#include "CreateForm.h"
#include "RedactorBD.h"
#include <msclr/marshal_cppstd.h>

namespace BookShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public: OpenFileDialog ofd;
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_Open;
	private: System::Windows::Forms::Button^ b_redact;
	protected:

	protected:


	private: System::Windows::Forms::Button^ b_Exit;
	private: System::Windows::Forms::Button^ b_Create;
	private: System::Windows::Forms::TextBox^ textBox1;




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
			this->b_Open = (gcnew System::Windows::Forms::Button());
			this->b_redact = (gcnew System::Windows::Forms::Button());
			this->b_Exit = (gcnew System::Windows::Forms::Button());
			this->b_Create = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// b_Open
			// 
			this->b_Open->Location = System::Drawing::Point(13, 57);
			this->b_Open->Name = L"b_Open";
			this->b_Open->Size = System::Drawing::Size(104, 38);
			this->b_Open->TabIndex = 1;
			this->b_Open->Text = L"Открыть базу данных";
			this->b_Open->UseVisualStyleBackColor = true;
			this->b_Open->Click += gcnew System::EventHandler(this, &MainForm::b_Open_Click);
			// 
			// b_redact
			// 
			this->b_redact->Enabled = false;
			this->b_redact->Location = System::Drawing::Point(13, 101);
			this->b_redact->Name = L"b_redact";
			this->b_redact->Size = System::Drawing::Size(104, 38);
			this->b_redact->TabIndex = 2;
			this->b_redact->Text = L"Редактировать базу данных";
			this->b_redact->UseVisualStyleBackColor = true;
			this->b_redact->Click += gcnew System::EventHandler(this, &MainForm::b_redact_Click);
			// 
			// b_Exit
			// 
			this->b_Exit->Location = System::Drawing::Point(13, 145);
			this->b_Exit->Name = L"b_Exit";
			this->b_Exit->Size = System::Drawing::Size(104, 38);
			this->b_Exit->TabIndex = 3;
			this->b_Exit->Text = L"Выход";
			this->b_Exit->UseVisualStyleBackColor = true;
			this->b_Exit->Click += gcnew System::EventHandler(this, &MainForm::b_Exit_Click);
			// 
			// b_Create
			// 
			this->b_Create->Location = System::Drawing::Point(13, 12);
			this->b_Create->Name = L"b_Create";
			this->b_Create->Size = System::Drawing::Size(104, 38);
			this->b_Create->TabIndex = 4;
			this->b_Create->Text = L"Создать базу данных";
			this->b_Create->UseVisualStyleBackColor = true;
			this->b_Create->Click += gcnew System::EventHandler(this, &MainForm::b_Create_Click);
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(133, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(398, 170);
			this->textBox1->TabIndex = 5;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(543, 215);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->b_Create);
			this->Controls->Add(this->b_Exit);
			this->Controls->Add(this->b_redact);
			this->Controls->Add(this->b_Open);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void b_Create_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateForm^ form = gcnew CreateForm();
		form->ShowDialog();
		if (form->getNameFile() != "")
			this->textBox1->Text += "База данных созданна \"" + form->getNameFile() + ".txt\"\r\n";
		else
			this->textBox1->Text += "База данных не созданна \r\n";
		delete form;
	}
	private: System::Void b_Open_Click(System::Object^ sender, System::EventArgs^ e) {
		ofd.ShowDialog();
		if (ofd.FileName != "") {
			this->textBox1->Text += "База данных открыта по пути: \"" + ofd.FileName + "\"\r\n";
			this->b_redact->Enabled = true;
		}
		else {
			this->textBox1->Text += "База данных не была открыта\r\n";
		}
	}
	private: System::Void b_redact_Click(System::Object^ sender, System::EventArgs^ e) {
		RedactorBD^ rform = gcnew RedactorBD(ofd.FileName);
		rform->ShowDialog();
	}
};
}
