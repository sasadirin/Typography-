#pragma once
#include "TDBCore.h"
#include <string>

namespace Drukarnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button3;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;




	private: System::Windows::Forms::Button^  button12;




	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox11;





















	public: 
		TDBCore^ DBCore;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Panel^  panel3;
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(978, 100);
			this->panel1->TabIndex = 0;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(36, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(151, 74);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Робота з базой даних";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(207, 19);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(139, 61);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Робота з замовленнями";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->groupBox4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(978, 519);
			this->panel2->TabIndex = 1;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->textBox12);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->textBox11);
			this->groupBox4->Location = System::Drawing::Point(306, 260);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(329, 131);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Зміна стану складу";
			this->groupBox4->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(28, 82);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 20);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Кількість";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(28, 34);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(80, 20);
			this->label17->TabIndex = 22;
			this->label17->Text = L"Матеріал";
			this->label17->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(112, 79);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 26);
			this->textBox12->TabIndex = 18;
			this->textBox12->Visible = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(218, 25);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 80);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Змінити кількість матеріалу";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(112, 38);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 26);
			this->textBox11->TabIndex = 16;
			this->textBox11->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Кількість";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Матеріал";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Вид замовлення";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(174, 144);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 3;
			this->textBox3->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(174, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(174, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Location = System::Drawing::Point(18, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(271, 412);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Створення нового замовлення";
			this->groupBox1->Visible = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(58, 324);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(78, 20);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Кількість";
			this->label15->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(58, 289);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 20);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Матеріал";
			this->label14->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(156, 318);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 26);
			this->textBox10->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Дата";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(46, 203);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(185, 29);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Додати замовлення";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(6, 371);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(259, 30);
			this->button14->TabIndex = 18;
			this->button14->Text = L"Додати замовлення матеріалів";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(156, 171);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 4;
			this->textBox4->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(156, 286);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 26);
			this->textBox9->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(42, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(195, 20);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Замовлення від кліентів";
			this->label13->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(25, 246);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(189, 20);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Замовлення матеріалів";
			this->label12->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Location = System::Drawing::Point(306, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(329, 232);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Видалення замовлень";
			this->groupBox2->Visible = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(119, 149);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(204, 70);
			this->button11->TabIndex = 16;
			this->button11->Text = L"Видалити замовлення матеріалів";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(13, 175);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"для видалення";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(0, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(278, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Введіть код замовленя матеріалів ";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(132, 58);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(191, 40);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Видалити замовлення";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(311, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Введіть код замовленя для видалення";
			this->label5->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(16, 58);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 11;
			this->textBox5->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Location = System::Drawing::Point(650, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(316, 379);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Підтвердження виконання замовлення";
			this->groupBox3->Visible = false;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(157, 240);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(129, 104);
			this->button13->TabIndex = 7;
			this->button13->Text = L"Підтвердити завершення замовлення матеріалів";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(51, 248);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 26);
			this->textBox8->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 207);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(282, 20);
			this->label10->TabIndex = 5;
			this->label10->Text = L"для підтвердження його виконання";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 183);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(287, 20);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Введіть код замовлення матеріалів ";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(157, 101);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(129, 69);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Підтвердити завершення замовлення";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(51, 122);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 2;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(248, 20);
			this->label9->TabIndex = 1;
			this->label9->Text = L"підтвердження його виконання";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(236, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Введіть код замовлення для ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(978, 519);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button10);
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 519);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(978, 100);
			this->panel3->TabIndex = 1;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(18, 12);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(200, 78);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Відкрити таблицю архів замовлень матеріалів";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(224, 22);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(174, 65);
			this->button9->TabIndex = 3;
			this->button9->Text = L"Відкрити таблицю архів замовлень";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(404, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 80);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Відкрити таблицю складу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(599, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 84);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Відкрити таблицю замовлення матеріалів";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(788, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 87);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Відкрити таблицю замовлень";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 619);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void MyForm_Load(System::Object^ sender,System::EventArgs^ e){
				

				 }


	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();
				
				 	 this->Text="Таблиця замовлення";
					 DBCore=gcnew TDBCore();
					 DBCore->ShowRecord(dataGridView1,0);
					 delete DBCore;
					 
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 

			dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();

			  this->Text="Таблиця замовлення матеріалів";
					 DBCore=gcnew TDBCore();
					 DBCore->ShowRecord(dataGridView1,1);
					 delete DBCore;
		 }


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {	dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();

			  this->Text="Таблиця складу";
					 DBCore=gcnew TDBCore();
					 DBCore->ShowRecord(dataGridView1,2);
					 delete DBCore;
		 }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
		 // Кнопка додавання замовлень
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		
		
		 if(!(textBox1->Text->CompareTo("") && textBox2->Text->CompareTo("") && textBox3->Text->CompareTo("") && textBox4->Text->CompareTo(""))){MessageBox::Show("Всі поля мають бути заповнені ");return;}
		 DBCore=gcnew TDBCore();
		 DBCore->InsertOrder(textBox1->Text,textBox2->Text,textBox3->Text,textBox4->Text);
					 delete DBCore;		
					 textBox1->Clear();
					 textBox2->Clear();
					 textBox3->Clear();
					 textBox4->Clear();

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(!textBox5->Text->CompareTo("")){MessageBox::Show("Поле коду має бути заповненим ");return;}
			 DBCore=gcnew TDBCore();
			DBCore->DeleteOrder(textBox5->Text);
					 delete DBCore;		
					 textBox5->Clear();

		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 		dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();
				
				 	 this->Text="Таблиця архів замовлень матеріалів";
					 DBCore=gcnew TDBCore();
					 DBCore->ShowRecord(dataGridView1,4);
					 delete DBCore;
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 		dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();
				
				 	 this->Text="Таблиця архів замовлень";
					 DBCore=gcnew TDBCore();
					 DBCore->ShowRecord(dataGridView1,3);
					 delete DBCore;
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
			   this->Text="Перегляд Бази данних";

			  button4->Visible=0;
			  button7->Visible=0;
			  button8->Visible=0;
			  button11->Visible=0;
			  button12->Visible=0;
			  button13->Visible=0;
			  button14->Visible=0;

			  textBox1->Visible=0;
			  textBox2->Visible=0;
			  textBox3->Visible=0;
			  textBox4->Visible=0;
			  textBox5->Visible=0;
			  textBox6->Visible=0;
			  textBox7->Visible=0;
			  textBox8->Visible=0;
			  textBox9->Visible=0;
			  textBox12->Visible=0;
			  textBox11->Visible=0;

			  
			  label1->Visible=0;
			  label2->Visible=0;
			  label3->Visible=0;
			  label4->Visible=0;
			  label5->Visible=0;
			  label6->Visible=0;
			  label7->Visible=0;
			  label8->Visible=0;
			  label9->Visible=0;
			  label10->Visible=0;
			  label11->Visible=0;
			  label12->Visible=0;
			  label13->Visible=0;
			  label14->Visible=0;
			  label15->Visible=0;
			  label16->Visible=0;
			  label17->Visible=0;

			  groupBox1->Visible=0;
			  groupBox2->Visible=0;
			  groupBox3->Visible=0;
			  groupBox4->Visible=0;



			  dataGridView1->Visible=1;
			  button1->Visible=1;
			  button2->Visible=1;
			  button3->Visible=1;
			  button9->Visible=1;
			  button10->Visible=1;

		 }
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Text="Робота з замовленнями";
			dataGridView1->Columns->Clear();
			  button4->Visible=1;
			  button7->Visible=1;
			  button8->Visible=1;
			  button11->Visible=1;
			  button12->Visible=1;
			  button13->Visible=1;
			  button14->Visible=1;
			  textBox1->Visible=1;
			  textBox2->Visible=1;
			  textBox3->Visible=1;
			  textBox4->Visible=1;
			  textBox5->Visible=1;
			  textBox6->Visible=1;
			  textBox7->Visible=1;
			  textBox8->Visible=1;
			  textBox9->Visible=1;
			  textBox12->Visible=1;
			  textBox11->Visible=1;
			  label1->Visible=1;
			  label2->Visible=1;
			  label3->Visible=1;
			  label4->Visible=1;
			  label5->Visible=1;
			  label6->Visible=1;
			  label7->Visible=1;
			  label8->Visible=1;
			  label9->Visible=1;
			  label10->Visible=1;
			  label11->Visible=1;
			  label12->Visible=1;
			  label13->Visible=1;
			  label14->Visible=1;
			  label15->Visible=1;
			  label16->Visible=1;
			  label17->Visible=1;
			  groupBox1->Visible=1;
			  groupBox2->Visible=1;
			  groupBox3->Visible=1;
			  groupBox4->Visible=1;
			  dataGridView1->Visible=0;
			  button1->Visible=0;
			  button2->Visible=0;
			  button3->Visible=0;
			  button9->Visible=0;
			  button10->Visible=0;
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(!textBox6->Text->CompareTo("")){MessageBox::Show("Поле коду має бути заповненим ");return;}
			 DBCore=gcnew TDBCore();
			DBCore->DeleteOrderM(textBox6->Text);
					 delete DBCore;		
					 textBox6->Clear();
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 //textbox 9,10
			 
		 if(!(textBox9->Text->CompareTo("") && textBox10->Text->CompareTo(""))){MessageBox::Show("Всі поля мають бути заповнені ");return;}
		 DBCore=gcnew TDBCore();
		 DBCore->InsertOrderM(textBox9->Text,textBox10->Text);
					 delete DBCore;		
					 textBox10->Clear();
					 textBox9->Clear();
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(!(textBox7->Text->CompareTo(""))){MessageBox::Show("Всі поля мають бути заповнені ");return;}
		 DBCore=gcnew TDBCore();
		 DBCore->Finish(textBox7->Text);
					 delete DBCore;		
					 textBox7->Clear();
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!(textBox8->Text->CompareTo(""))){MessageBox::Show("Всі поля мають бути заповнені ");return;}
			 DBCore=gcnew TDBCore();
			 DBCore->FinishM(textBox8->Text);
			 delete DBCore;		
			 textBox8->Clear();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(!(textBox11->Text->CompareTo("") && textBox12->Text->CompareTo(""))){MessageBox::Show("Всі поля мають бути заповнені ");return;}
		 DBCore=gcnew TDBCore();
		 DBCore->ChangeStore(textBox11->Text,textBox12->Text);
					 delete DBCore;		
					 textBox11->Clear();
					 textBox12->Clear();

		 }
};
}
