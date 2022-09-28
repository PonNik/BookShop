#pragma once
#include "DataBase.h"
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
	/// Сводка для RedactorBD
	/// </summary>
	public ref class RedactorBD : public System::Windows::Forms::Form
	{
	private: DataBase* my_db;
	private: int num = 1;
	private: System::Windows::Forms::TextBox^ tb_bookName;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Button^ b_save;
	private: OpenFileDialog ofd;
	public:
		RedactorBD(String^ _ofd)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			my_db = new DataBase();
			ofd.FileName = _ofd;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RedactorBD()
		{
			if (components)
			{
				delete components;
			}
			delete my_db;
		}
	private: System::Windows::Forms::GroupBox^ gb_menu;
	protected:
	private: System::Windows::Forms::Button^ b_save_exit;
	private: System::Windows::Forms::Button^ b_edit;
	private: System::Windows::Forms::Button^ b_enter;
	private: System::Windows::Forms::Button^ b_done;
	private: System::Windows::Forms::GroupBox^ gb_shipment;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ tb_supplierDetals;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb_numDoc;

	private: System::Windows::Forms::Label^ dddddd;
	private: System::Windows::Forms::DateTimePicker^ dTP1;

	private: System::Windows::Forms::TextBox^ tb_genre;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tb_autorSurname;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tb_autorName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dTP2;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tb_price;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tb_numPages;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tb_publisherPlace;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tb_publisher;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dTP3;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ tb_summ;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tb_numCopies;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ b_plus;

	private: System::Windows::Forms::Button^ b_minus;
	private: System::Windows::Forms::TextBox^ tb_num;

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
			this->gb_menu = (gcnew System::Windows::Forms::GroupBox());
			this->b_save_exit = (gcnew System::Windows::Forms::Button());
			this->b_edit = (gcnew System::Windows::Forms::Button());
			this->b_enter = (gcnew System::Windows::Forms::Button());
			this->b_done = (gcnew System::Windows::Forms::Button());
			this->gb_shipment = (gcnew System::Windows::Forms::GroupBox());
			this->tb_num = (gcnew System::Windows::Forms::TextBox());
			this->b_plus = (gcnew System::Windows::Forms::Button());
			this->b_minus = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_bookName = (gcnew System::Windows::Forms::TextBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tb_price = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tb_numPages = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_publisherPlace = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tb_publisher = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dTP2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tb_genre = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tb_autorSurname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_autorName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->b_save = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tb_summ = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tb_numCopies = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dTP3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tb_supplierDetals = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_numDoc = (gcnew System::Windows::Forms::TextBox());
			this->dddddd = (gcnew System::Windows::Forms::Label());
			this->dTP1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->gb_menu->SuspendLayout();
			this->gb_shipment->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// gb_menu
			// 
			this->gb_menu->Controls->Add(this->b_save_exit);
			this->gb_menu->Controls->Add(this->b_edit);
			this->gb_menu->Controls->Add(this->b_enter);
			this->gb_menu->Location = System::Drawing::Point(13, 13);
			this->gb_menu->Name = L"gb_menu";
			this->gb_menu->Size = System::Drawing::Size(200, 221);
			this->gb_menu->TabIndex = 0;
			this->gb_menu->TabStop = false;
			this->gb_menu->Text = L"Меню";
			// 
			// b_save_exit
			// 
			this->b_save_exit->Location = System::Drawing::Point(7, 150);
			this->b_save_exit->Name = L"b_save_exit";
			this->b_save_exit->Size = System::Drawing::Size(187, 59);
			this->b_save_exit->TabIndex = 2;
			this->b_save_exit->Text = L"Выйти";
			this->b_save_exit->UseVisualStyleBackColor = true;
			this->b_save_exit->Click += gcnew System::EventHandler(this, &RedactorBD::b_save_exit_Click);
			// 
			// b_edit
			// 
			this->b_edit->Location = System::Drawing::Point(7, 85);
			this->b_edit->Name = L"b_edit";
			this->b_edit->Size = System::Drawing::Size(187, 59);
			this->b_edit->TabIndex = 1;
			this->b_edit->Text = L"Редактировать данные";
			this->b_edit->UseVisualStyleBackColor = true;
			// 
			// b_enter
			// 
			this->b_enter->Location = System::Drawing::Point(7, 20);
			this->b_enter->Name = L"b_enter";
			this->b_enter->Size = System::Drawing::Size(187, 59);
			this->b_enter->TabIndex = 0;
			this->b_enter->Text = L"Ввести данные";
			this->b_enter->UseVisualStyleBackColor = true;
			this->b_enter->Click += gcnew System::EventHandler(this, &RedactorBD::b_enter_Click);
			// 
			// b_done
			// 
			this->b_done->Location = System::Drawing::Point(20, 438);
			this->b_done->Name = L"b_done";
			this->b_done->Size = System::Drawing::Size(194, 59);
			this->b_done->TabIndex = 3;
			this->b_done->Text = L"Готово";
			this->b_done->UseVisualStyleBackColor = true;
			this->b_done->Click += gcnew System::EventHandler(this, &RedactorBD::b_done_Click);
			// 
			// gb_shipment
			// 
			this->gb_shipment->Controls->Add(this->tb_num);
			this->gb_shipment->Controls->Add(this->b_plus);
			this->gb_shipment->Controls->Add(this->b_minus);
			this->gb_shipment->Controls->Add(this->groupBox1);
			this->gb_shipment->Controls->Add(this->groupBox2);
			this->gb_shipment->Controls->Add(this->tb_supplierDetals);
			this->gb_shipment->Controls->Add(this->label1);
			this->gb_shipment->Controls->Add(this->tb_numDoc);
			this->gb_shipment->Controls->Add(this->dddddd);
			this->gb_shipment->Controls->Add(this->dTP1);
			this->gb_shipment->Enabled = false;
			this->gb_shipment->Location = System::Drawing::Point(220, 13);
			this->gb_shipment->Name = L"gb_shipment";
			this->gb_shipment->Size = System::Drawing::Size(542, 484);
			this->gb_shipment->TabIndex = 4;
			this->gb_shipment->TabStop = false;
			this->gb_shipment->Text = L"Поставка";
			// 
			// tb_num
			// 
			this->tb_num->Enabled = false;
			this->tb_num->Location = System::Drawing::Point(256, 155);
			this->tb_num->Name = L"tb_num";
			this->tb_num->Size = System::Drawing::Size(36, 20);
			this->tb_num->TabIndex = 10;
			this->tb_num->Text = L"1";
			this->tb_num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// b_plus
			// 
			this->b_plus->Location = System::Drawing::Point(298, 155);
			this->b_plus->Name = L"b_plus";
			this->b_plus->Size = System::Drawing::Size(26, 23);
			this->b_plus->TabIndex = 9;
			this->b_plus->Text = L">";
			this->b_plus->UseVisualStyleBackColor = true;
			this->b_plus->Click += gcnew System::EventHandler(this, &RedactorBD::button1_Click);
			// 
			// b_minus
			// 
			this->b_minus->Location = System::Drawing::Point(224, 155);
			this->b_minus->Name = L"b_minus";
			this->b_minus->Size = System::Drawing::Size(26, 23);
			this->b_minus->TabIndex = 8;
			this->b_minus->Text = L"<";
			this->b_minus->UseVisualStyleBackColor = true;
			this->b_minus->Click += gcnew System::EventHandler(this, &RedactorBD::b_minus_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tb_bookName);
			this->groupBox1->Controls->Add(this->label);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->tb_price);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->tb_numPages);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->tb_publisherPlace);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->tb_publisher);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->dTP2);
			this->groupBox1->Controls->Add(this->tb_genre);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->tb_autorSurname);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->tb_autorName);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(9, 182);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(258, 287);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Книга";
			// 
			// tb_bookName
			// 
			this->tb_bookName->Location = System::Drawing::Point(105, 23);
			this->tb_bookName->Name = L"tb_bookName";
			this->tb_bookName->Size = System::Drawing::Size(135, 20);
			this->tb_bookName->TabIndex = 20;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(5, 26);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(57, 13);
			this->label->TabIndex = 19;
			this->label->Text = L"Название";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 148);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Год издания";
			this->label9->Click += gcnew System::EventHandler(this, &RedactorBD::label9_Click);
			// 
			// tb_price
			// 
			this->tb_price->Location = System::Drawing::Point(106, 260);
			this->tb_price->Name = L"tb_price";
			this->tb_price->Size = System::Drawing::Size(135, 20);
			this->tb_price->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 263);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Цена";
			// 
			// tb_numPages
			// 
			this->tb_numPages->Location = System::Drawing::Point(105, 229);
			this->tb_numPages->Name = L"tb_numPages";
			this->tb_numPages->Size = System::Drawing::Size(135, 20);
			this->tb_numPages->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(5, 232);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Кол-во страниц";
			// 
			// tb_publisherPlace
			// 
			this->tb_publisherPlace->Location = System::Drawing::Point(106, 201);
			this->tb_publisherPlace->Name = L"tb_publisherPlace";
			this->tb_publisherPlace->Size = System::Drawing::Size(135, 20);
			this->tb_publisherPlace->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 204);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Место издания";
			// 
			// tb_publisher
			// 
			this->tb_publisher->Location = System::Drawing::Point(106, 174);
			this->tb_publisher->Name = L"tb_publisher";
			this->tb_publisher->Size = System::Drawing::Size(135, 20);
			this->tb_publisher->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Издательство";
			// 
			// dTP2
			// 
			this->dTP2->CustomFormat = L"yyyy";
			this->dTP2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dTP2->Location = System::Drawing::Point(106, 141);
			this->dTP2->Name = L"dTP2";
			this->dTP2->Size = System::Drawing::Size(135, 20);
			this->dTP2->TabIndex = 9;
			// 
			// tb_genre
			// 
			this->tb_genre->Location = System::Drawing::Point(106, 108);
			this->tb_genre->Name = L"tb_genre";
			this->tb_genre->Size = System::Drawing::Size(135, 20);
			this->tb_genre->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Жанр ";
			// 
			// tb_autorSurname
			// 
			this->tb_autorSurname->Location = System::Drawing::Point(106, 79);
			this->tb_autorSurname->Name = L"tb_autorSurname";
			this->tb_autorSurname->Size = System::Drawing::Size(135, 20);
			this->tb_autorSurname->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Фамилия автора";
			// 
			// tb_autorName
			// 
			this->tb_autorName->Location = System::Drawing::Point(106, 53);
			this->tb_autorName->Name = L"tb_autorName";
			this->tb_autorName->Size = System::Drawing::Size(135, 20);
			this->tb_autorName->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Имя автора";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->b_save);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->tb_summ);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->tb_numCopies);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->dTP3);
			this->groupBox2->Location = System::Drawing::Point(278, 182);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(258, 287);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Продажи";
			// 
			// b_save
			// 
			this->b_save->Location = System::Drawing::Point(6, 243);
			this->b_save->Name = L"b_save";
			this->b_save->Size = System::Drawing::Size(246, 38);
			this->b_save->TabIndex = 25;
			this->b_save->Text = L"Сохранить";
			this->b_save->UseVisualStyleBackColor = true;
			this->b_save->Click += gcnew System::EventHandler(this, &RedactorBD::b_save_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(6, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(246, 38);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Добавить книгу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RedactorBD::button3_Click);
			// 
			// tb_summ
			// 
			this->tb_summ->Location = System::Drawing::Point(135, 82);
			this->tb_summ->Name = L"tb_summ";
			this->tb_summ->Size = System::Drawing::Size(117, 20);
			this->tb_summ->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 85);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Сумма";
			// 
			// tb_numCopies
			// 
			this->tb_numCopies->Location = System::Drawing::Point(135, 53);
			this->tb_numCopies->Name = L"tb_numCopies";
			this->tb_numCopies->Size = System::Drawing::Size(117, 20);
			this->tb_numCopies->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Дата ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 56);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Кол-во экземпляров";
			// 
			// dTP3
			// 
			this->dTP3->CustomFormat = L"";
			this->dTP3->Location = System::Drawing::Point(135, 23);
			this->dTP3->Name = L"dTP3";
			this->dTP3->Size = System::Drawing::Size(117, 20);
			this->dTP3->TabIndex = 18;
			// 
			// tb_supplierDetals
			// 
			this->tb_supplierDetals->Location = System::Drawing::Point(125, 73);
			this->tb_supplierDetals->Multiline = true;
			this->tb_supplierDetals->Name = L"tb_supplierDetals";
			this->tb_supplierDetals->Size = System::Drawing::Size(411, 65);
			this->tb_supplierDetals->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Данные поставщика";
			// 
			// tb_numDoc
			// 
			this->tb_numDoc->Location = System::Drawing::Point(125, 47);
			this->tb_numDoc->Name = L"tb_numDoc";
			this->tb_numDoc->Size = System::Drawing::Size(411, 20);
			this->tb_numDoc->TabIndex = 2;
			// 
			// dddddd
			// 
			this->dddddd->AutoSize = true;
			this->dddddd->Location = System::Drawing::Point(6, 50);
			this->dddddd->Name = L"dddddd";
			this->dddddd->Size = System::Drawing::Size(98, 13);
			this->dddddd->TabIndex = 1;
			this->dddddd->Text = L"Номер документа";
			// 
			// dTP1
			// 
			this->dTP1->Location = System::Drawing::Point(7, 20);
			this->dTP1->Name = L"dTP1";
			this->dTP1->Size = System::Drawing::Size(200, 20);
			this->dTP1->TabIndex = 0;
			// 
			// RedactorBD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(774, 511);
			this->Controls->Add(this->gb_shipment);
			this->Controls->Add(this->b_done);
			this->Controls->Add(this->gb_menu);
			this->Name = L"RedactorBD";
			this->Text = L"Редактор";
			this->gb_menu->ResumeLayout(false);
			this->gb_shipment->ResumeLayout(false);
			this->gb_shipment->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		gb_shipment->Enabled = true;
		gb_menu->Enabled = false;
	}
	private: System::Void b_save_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void b_done_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if(	tb_bookName->Text		!= ""	&&
			tb_autorName->Text		!= ""	&&
			tb_autorSurname->Text	!= ""	&& 
			tb_genre->Text			!= ""	&&
			tb_numCopies->Text		!= ""	&&
			tb_numDoc->Text			!= ""	&&
			tb_numPages->Text		!= ""	&&
			tb_price->Text			!= ""	&&
			tb_publisher->Text		!= ""	&&
			tb_publisherPlace->Text != ""	&&
			tb_summ->Text			!= ""	&& 
			tb_supplierDetals->Text != ""	) 
		{
			StreamWriter^ sw = gcnew StreamWriter(ofd.FileName);
			sw->WriteLine(dTP1->Text);
			sw->WriteLine(tb_numDoc->Text);
			sw->WriteLine(tb_supplierDetals->Text + "\r\n");
			int i = 0;
			System::String^ str = gcnew String("");
			while (i < my_db->getBooks().size()) {
				str = gcnew String(my_db->getBook(i).getName().c_str());
				sw->WriteLine(str);
				str = gcnew String(my_db->getBook(i).getAutors()[0].name.c_str());
				sw->WriteLine(str);
				str = gcnew String(my_db->getBook(i).getAutors()[0].surname.c_str());
				sw->WriteLine(str);
				str = gcnew String(my_db->getBook(i).getGenre().c_str());
				sw->WriteLine(str);
				str = Convert::ToString(my_db->getBook(i).getYear());
				sw->WriteLine(str);
				str = gcnew String(my_db->getBook(i).getPublisher().c_str());
				sw->WriteLine(str);
				str = gcnew String(my_db->getBook(i).getPlaceOfPubl().c_str());
				sw->WriteLine(str);
				str = Convert::ToString(my_db->getBook(i).getNumOfPages());
				sw->WriteLine(str);
				str = Convert::ToString(my_db->getBook(i).getPrice());
				sw->WriteLine(str);
			
				System::String^ str1 = gcnew String(my_db->getSalesOfBook(i).getDate().mouth.c_str());
				str = Convert::ToString(my_db->getSalesOfBook(i).getDate().day);
				str += "." + str1;
				str += "." + Convert::ToString(my_db->getSalesOfBook(i).getDate().year);
				sw->WriteLine(str);
				str = Convert::ToString(my_db->getSalesOfBook(i).getNumOfCopies());
				sw->WriteLine(str);
				str = Convert::ToString(my_db->getSalesOfBook(i).getSummOfBooksSold());
				sw->WriteLine(str);
				i++;
			}


			sw->Close();
		}
		
		gb_shipment->Enabled = false;
		gb_menu->Enabled = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToUInt64(tb_num->Text) <= my_db->getBooks().size()) {
			tb_num->Text = Convert::ToString(Convert::ToInt64(tb_num->Text) + 1);

			int i = Convert::ToInt64(tb_num->Text);
			i--;
			String^ str = gcnew String("");

			str = gcnew String(my_db->getBook(i).getName().c_str());
			tb_bookName->Text = str;
			str = gcnew String(my_db->getBook(i).getAutors()[0].name.c_str());
			tb_autorName->Text = str;
			str = gcnew String(my_db->getBook(i).getAutors()[0].surname.c_str());
			tb_autorSurname->Text = str;
			str = gcnew String(my_db->getBook(i).getGenre().c_str());
			tb_genre->Text = str;
			str = gcnew String(my_db->getBook(i).getPublisher().c_str());
			tb_publisher->Text = str;
			str = gcnew String(my_db->getBook(i).getPlaceOfPubl().c_str());
			tb_publisherPlace->Text = str;
			str = Convert::ToString(my_db->getBook(i).getNumOfPages());
			tb_numPages->Text = str;
			str = Convert::ToString(my_db->getBook(i).getPrice());
			tb_price->Text = str;

			str = Convert::ToString(my_db->getSalesOfBook(i).getNumOfCopies());
			tb_numCopies->Text = str;
			str = Convert::ToString(my_db->getSalesOfBook(i).getSummOfBooksSold());
			tb_summ->Text = str;
		}
	}
	private: System::Void b_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToInt64(tb_num->Text) != 1) {
			tb_num->Text = Convert::ToString(Convert::ToInt64(tb_num->Text) - 1);
			
			int i = Convert::ToInt64(tb_num->Text);
			i--;
			String^ str = gcnew String("");

			str = gcnew String(my_db->getBook(i).getName().c_str());
			tb_bookName->Text = str;
			str = gcnew String(my_db->getBook(i).getAutors()[0].name.c_str());
			tb_autorName->Text = str;
			str = gcnew String(my_db->getBook(i).getAutors()[0].surname.c_str());
			tb_autorSurname->Text = str;
			str = gcnew String(my_db->getBook(i).getGenre().c_str());
			tb_genre->Text = str;
			str = gcnew String(my_db->getBook(i).getPublisher().c_str());
			tb_publisher->Text = str;
			str = gcnew String(my_db->getBook(i).getPlaceOfPubl().c_str());
			tb_publisherPlace->Text = str;
			str = Convert::ToString(my_db->getBook(i).getNumOfPages());
			tb_numPages->Text = str;
			str = Convert::ToString(my_db->getBook(i).getPrice());
			tb_price->Text = str;

			str = Convert::ToString(my_db->getSalesOfBook(i).getNumOfCopies());
			tb_numCopies->Text = str;
			str = Convert::ToString(my_db->getSalesOfBook(i).getSummOfBooksSold());
			tb_summ->Text = str;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			tb_bookName->Text = "";
			tb_autorName->Text = "";
			tb_autorSurname->Text = "";
			tb_genre->Text = "";
			tb_numCopies->Text = "";
			tb_numPages->Text = "";
			tb_price->Text = "";
			tb_publisher->Text = "";
			tb_publisherPlace->Text = "";
			tb_summ->Text = "";
			tb_num->Text = Convert::ToString(Convert::ToInt64(tb_num->Text) + 1);
			button3->Enabled = false;
	}
	private: System::Void b_save_Click(System::Object^ sender, System::EventArgs^ e) {

		if (tb_bookName->Text != "" &&
			tb_autorName->Text != "" &&
			tb_autorSurname->Text != "" &&
			tb_genre->Text != "" &&
			tb_numCopies->Text != "" &&
			tb_numDoc->Text != "" &&
			tb_numPages->Text != "" &&
			tb_price->Text != "" &&
			tb_publisher->Text != "" &&
			tb_publisherPlace->Text != "" &&
			tb_summ->Text != "" &&
			tb_supplierDetals->Text != "")
		{
			Book book(msclr::interop::marshal_as<std::string>(tb_genre->Text),
				msclr::interop::marshal_as<std::string>(tb_bookName->Text),
				msclr::interop::marshal_as<std::string>(tb_autorName->Text),
				msclr::interop::marshal_as<std::string>(tb_autorSurname->Text),
				Convert::ToUInt16(dTP2->Text),
				msclr::interop::marshal_as<std::string>(tb_publisher->Text),
				msclr::interop::marshal_as<std::string>(tb_publisherPlace->Text),
				Convert::ToUInt16(tb_numPages->Text),
				Convert::ToDouble(tb_price->Text));
			Date date;
			date.year = dTP3->Value.Year;
			date.mouth = msclr::interop::marshal_as<std::string>(dTP3->Value.Month.ToString());
			
			SalesOfBook sOfBook(date,
				Convert::ToInt64(tb_numCopies->Text),
				Convert::ToDouble(tb_summ->Text));

			my_db->addBook(book, sOfBook);
		}
		button3->Enabled = true;
	}
};
}
