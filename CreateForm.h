#pragma once
#include <fstream>
#include <msclr/marshal_cppstd.h>

namespace BookShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CreateForm
	/// </summary>
	public ref class CreateForm : public System::Windows::Forms::Form
	{
	public:
		CreateForm()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~CreateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(Void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(83, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"»м€ файла";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(110, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"—оздать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateForm::button1_Click);
			// 
			// CreateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(309, 121);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximumSize = System::Drawing::Size(325, 160);
			this->MinimumSize = System::Drawing::Size(325, 160);
			this->Name = L"CreateForm";
			this->ShowIcon = false;
			this->Text = L"—оздать форму";
			this->Load += gcnew System::EventHandler(this, &CreateForm::CreateForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			
		}
public: String^ getNameFile() 
		{
			return textBox1->Text;
		}
#pragma endregion
	private: System::Void CreateForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s = getNameFile();
		if (s != "") 
		{
			std::ofstream fout("DataBases/" + msclr::interop::marshal_as<std::string>(s) + ".txt");
			
			fout.close();
			this->Close();

		}

	}
	};
}
