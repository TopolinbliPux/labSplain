#pragma once
#include <vector>
#include <string>
#include <cmath>
#include <cstdint>

#ifndef ULONG
using ULONG = unsigned long;  // или unsigned long
#endif

#include "functions_names.h" 

namespace FrontEPTA
{
    using namespace std;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Windows::Forms::DataVisualization::Charting;

    /// <summary>
    /// Сводка для MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            // Настройка DataGridView
            dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
        }

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

    private:
        // Все элементы управления формы





        System::Windows::Forms::RadioButton^ radioButton1;
        System::Windows::Forms::RadioButton^ radioButton2;
        System::Windows::Forms::RadioButton^ radioButton3;
        System::Windows::Forms::GroupBox^ groupBox1;
        System::Windows::Forms::RadioButton^ radioButton4;
        System::Windows::Forms::RadioButton^ radioButton6;
        System::Windows::Forms::RadioButton^ radioButton5;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::Label^ label7;
        System::Windows::Forms::Label^ label8;
        System::Windows::Forms::TextBox^ textBox5;
        System::Windows::Forms::GroupBox^ groupBox2;
        System::Windows::Forms::Label^ label9;
        System::Windows::Forms::RadioButton^ radioButton7;
        System::Windows::Forms::RadioButton^ radioButton8;
        System::Windows::Forms::RadioButton^ radioButton9;
        System::Windows::Forms::GroupBox^ groupBox3;
        System::Windows::Forms::Label^ label10;
        System::Windows::Forms::GroupBox^ groupBox4;
        System::Windows::Forms::RadioButton^ radioButton10;
        System::Windows::Forms::Label^ label11;
        System::Windows::Forms::TextBox^ textBox4;
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::GroupBox^ groupBox5;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::TextBox^ textBox16;
    private: System::Windows::Forms::TextBox^ textBox15;
    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
    private: System::Windows::Forms::RadioButton^ radioButton11;
    private: System::Windows::Forms::RadioButton^ radioButton12;



    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;


    private: System::ComponentModel::IContainer^ components;



#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->groupBox3->SuspendLayout();
            this->groupBox4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->groupBox5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            this->SuspendLayout();
            // 
            // radioButton1
            // 
            this->radioButton1->AutoSize = true;
            this->radioButton1->Checked = true;
            this->radioButton1->Location = System::Drawing::Point(5, 40);
            this->radioButton1->Name = L"radioButton1";
            this->radioButton1->Size = System::Drawing::Size(106, 20);
            this->radioButton1->TabIndex = 6;
            this->radioButton1->TabStop = true;
            this->radioButton1->Text = L"(ln(x+1))/(x+1)";
            this->radioButton1->UseVisualStyleBackColor = true;
            this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
            // 
            // radioButton2
            // 
            this->radioButton2->AutoSize = true;
            this->radioButton2->Location = System::Drawing::Point(5, 62);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(76, 20);
            this->radioButton2->TabIndex = 7;
            this->radioButton2->Text = L"ln(x+1)/x";
            this->radioButton2->UseVisualStyleBackColor = true;
            // 
            // radioButton3
            // 
            this->radioButton3->AutoSize = true;
            this->radioButton3->Location = System::Drawing::Point(5, 82);
            this->radioButton3->Name = L"radioButton3";
            this->radioButton3->Size = System::Drawing::Size(83, 20);
            this->radioButton3->TabIndex = 8;
            this->radioButton3->Text = L"sin(x+1)/x";
            this->radioButton3->UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->radioButton4);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->radioButton3);
            this->groupBox1->Controls->Add(this->radioButton1);
            this->groupBox1->Controls->Add(this->radioButton2);
            this->groupBox1->Location = System::Drawing::Point(3, 0);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(127, 107);
            this->groupBox1->TabIndex = 9;
            this->groupBox1->TabStop = false;
            // 
            // radioButton4
            // 
            this->radioButton4->AutoSize = true;
            this->radioButton4->Location = System::Drawing::Point(5, 19);
            this->radioButton4->Name = L"radioButton4";
            this->radioButton4->Size = System::Drawing::Size(49, 20);
            this->radioButton4->TabIndex = 9;
            this->radioButton4->Text = L"ϕ(x)";
            this->radioButton4->UseVisualStyleBackColor = true;
            this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(26, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(65, 16);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Функции";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // radioButton6
            // 
            this->radioButton6->AutoSize = true;
            this->radioButton6->Location = System::Drawing::Point(6, 63);
            this->radioButton6->Name = L"radioButton6";
            this->radioButton6->Size = System::Drawing::Size(109, 20);
            this->radioButton6->TabIndex = 11;
            this->radioButton6->TabStop = true;
            this->radioButton6->Text = L"f(x)+cos(100x)";
            this->radioButton6->UseVisualStyleBackColor = true;
            this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
            // 
            // radioButton5
            // 
            this->radioButton5->AutoSize = true;
            this->radioButton5->Location = System::Drawing::Point(6, 42);
            this->radioButton5->Name = L"radioButton5";
            this->radioButton5->Size = System::Drawing::Size(102, 20);
            this->radioButton5->TabIndex = 10;
            this->radioButton5->TabStop = true;
            this->radioButton5->Text = L"f(x)+cos(10x)";
            this->radioButton5->UseVisualStyleBackColor = true;
            this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(47, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(136, 16);
            this->label4->TabIndex = 10;
            this->label4->Text = L"Граничные условия";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(39, 35);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(36, 22);
            this->textBox3->TabIndex = 12;
            this->textBox3->Text = L"1";
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(11, 38);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(22, 16);
            this->label5->TabIndex = 11;
            this->label5->Text = L"a=";
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(6, 18);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(120, 16);
            this->label6->TabIndex = 13;
            this->label6->Text = L"Границы отрезка";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(84, 38);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(22, 16);
            this->label7->TabIndex = 14;
            this->label7->Text = L"b=";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(6, 60);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(211, 16);
            this->label8->TabIndex = 16;
            this->label8->Text = L"Значение вторых производных";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(112, 35);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(36, 22);
            this->textBox5->TabIndex = 17;
            this->textBox5->Text = L"2";
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->radioButton12);
            this->groupBox2->Controls->Add(this->radioButton11);
            this->groupBox2->Controls->Add(this->label4);
            this->groupBox2->Controls->Add(this->textBox5);
            this->groupBox2->Controls->Add(this->label8);
            this->groupBox2->Controls->Add(this->label7);
            this->groupBox2->Controls->Add(this->label6);
            this->groupBox2->Controls->Add(this->textBox3);
            this->groupBox2->Controls->Add(this->label5);
            this->groupBox2->Location = System::Drawing::Point(2, 106);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(225, 145);
            this->groupBox2->TabIndex = 18;
            this->groupBox2->TabStop = false;
            // 
            // radioButton12
            // 
            this->radioButton12->AutoSize = true;
            this->radioButton12->Location = System::Drawing::Point(9, 103);
            this->radioButton12->Name = L"radioButton12";
            this->radioButton12->Size = System::Drawing::Size(167, 20);
            this->radioButton12->TabIndex = 19;
            this->radioButton12->TabStop = true;
            this->radioButton12->Text = L"S\'\'(a)=F\'\'(a) S\'\'(b)=F\'\'(b)";
            this->radioButton12->UseVisualStyleBackColor = true;
            // 
            // radioButton11
            // 
            this->radioButton11->AutoSize = true;
            this->radioButton11->Checked = true;
            this->radioButton11->Location = System::Drawing::Point(9, 80);
            this->radioButton11->Name = L"radioButton11";
            this->radioButton11->Size = System::Drawing::Size(141, 20);
            this->radioButton11->TabIndex = 18;
            this->radioButton11->TabStop = true;
            this->radioButton11->Text = L"ЕГУ S\'\'(a)=S\'\'(b)=0";
            this->radioButton11->UseVisualStyleBackColor = true;
            this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton11_CheckedChanged);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(31, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(120, 16);
            this->label9->TabIndex = 12;
            this->label9->Text = L"Строить графики";
            // 
            // radioButton7
            // 
            this->radioButton7->AutoSize = true;
            this->radioButton7->Checked = true;
            this->radioButton7->Location = System::Drawing::Point(6, 19);
            this->radioButton7->Name = L"radioButton7";
            this->radioButton7->Size = System::Drawing::Size(155, 20);
            this->radioButton7->TabIndex = 14;
            this->radioButton7->TabStop = true;
            this->radioButton7->Text = L"Функции и сплайна";
            this->radioButton7->UseVisualStyleBackColor = true;
            this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
            // 
            // radioButton8
            // 
            this->radioButton8->AutoSize = true;
            this->radioButton8->Location = System::Drawing::Point(6, 40);
            this->radioButton8->Name = L"radioButton8";
            this->radioButton8->Size = System::Drawing::Size(229, 20);
            this->radioButton8->TabIndex = 12;
            this->radioButton8->TabStop = true;
            this->radioButton8->Text = L"Первых производных и ошибки";
            this->radioButton8->UseVisualStyleBackColor = true;
            this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton8_CheckedChanged);
            // 
            // radioButton9
            // 
            this->radioButton9->AutoSize = true;
            this->radioButton9->Location = System::Drawing::Point(6, 61);
            this->radioButton9->Name = L"radioButton9";
            this->radioButton9->Size = System::Drawing::Size(227, 20);
            this->radioButton9->TabIndex = 13;
            this->radioButton9->TabStop = true;
            this->radioButton9->Text = L"Вторых производных и ошибки";
            this->radioButton9->UseVisualStyleBackColor = true;
            this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton9_CheckedChanged);
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->label9);
            this->groupBox3->Controls->Add(this->radioButton9);
            this->groupBox3->Controls->Add(this->radioButton8);
            this->groupBox3->Controls->Add(this->radioButton7);
            this->groupBox3->Location = System::Drawing::Point(275, 2);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(262, 89);
            this->groupBox3->TabIndex = 19;
            this->groupBox3->TabStop = false;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(233, 124);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(122, 16);
            this->label10->TabIndex = 20;
            this->label10->Text = L"Число разбиений";
            // 
            // groupBox4
            // 
            this->groupBox4->Controls->Add(this->radioButton6);
            this->groupBox4->Controls->Add(this->radioButton10);
            this->groupBox4->Controls->Add(this->radioButton5);
            this->groupBox4->Controls->Add(this->label11);
            this->groupBox4->Location = System::Drawing::Point(134, 1);
            this->groupBox4->Name = L"groupBox4";
            this->groupBox4->Size = System::Drawing::Size(141, 106);
            this->groupBox4->TabIndex = 22;
            this->groupBox4->TabStop = false;
            // 
            // radioButton10
            // 
            this->radioButton10->AutoSize = true;
            this->radioButton10->Checked = true;
            this->radioButton10->Location = System::Drawing::Point(6, 21);
            this->radioButton10->Name = L"radioButton10";
            this->radioButton10->Size = System::Drawing::Size(51, 20);
            this->radioButton10->TabIndex = 12;
            this->radioButton10->TabStop = true;
            this->radioButton10->Text = L"нет";
            this->radioButton10->UseVisualStyleBackColor = true;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(28, -1);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(87, 16);
            this->label11->TabIndex = 23;
            this->label11->Text = L"Осцилляции";
            this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(361, 121);
            this->textBox4->Multiline = true;
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(62, 24);
            this->textBox4->TabIndex = 21;
            this->textBox4->Text = L"5";
            this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
            this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox4_KeyDown);
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(3, 270);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(594, 90);
            this->dataGridView1->TabIndex = 23;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(3, 241);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(267, 23);
            this->button1->TabIndex = 24;
            this->button1->Text = L"Рассчитать коэффициенты сплайна ";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // dataGridView2
            // 
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Location = System::Drawing::Point(2, 398);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowHeadersWidth = 51;
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(594, 352);
            this->dataGridView2->TabIndex = 25;
            this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(3, 367);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(158, 23);
            this->button2->TabIndex = 26;
            this->button2->Text = L"Сравнить F(x) и S(x)";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(381, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(63, 16);
            this->label12->TabIndex = 27;
            this->label12->Text = L"Справка";
            // 
            // groupBox5
            // 
            this->groupBox5->Controls->Add(this->textBox16);
            this->groupBox5->Controls->Add(this->textBox14);
            this->groupBox5->Controls->Add(this->textBox15);
            this->groupBox5->Controls->Add(this->label23);
            this->groupBox5->Controls->Add(this->label22);
            this->groupBox5->Controls->Add(this->label21);
            this->groupBox5->Controls->Add(this->textBox13);
            this->groupBox5->Controls->Add(this->textBox8);
            this->groupBox5->Controls->Add(this->textBox12);
            this->groupBox5->Controls->Add(this->label12);
            this->groupBox5->Controls->Add(this->textBox11);
            this->groupBox5->Controls->Add(this->label13);
            this->groupBox5->Controls->Add(this->textBox10);
            this->groupBox5->Controls->Add(this->label14);
            this->groupBox5->Controls->Add(this->textBox9);
            this->groupBox5->Controls->Add(this->label15);
            this->groupBox5->Controls->Add(this->label16);
            this->groupBox5->Controls->Add(this->textBox7);
            this->groupBox5->Controls->Add(this->label17);
            this->groupBox5->Controls->Add(this->textBox6);
            this->groupBox5->Controls->Add(this->label18);
            this->groupBox5->Controls->Add(this->label20);
            this->groupBox5->Controls->Add(this->label19);
            this->groupBox5->Location = System::Drawing::Point(2, 756);
            this->groupBox5->Name = L"groupBox5";
            this->groupBox5->Size = System::Drawing::Size(794, 232);
            this->groupBox5->TabIndex = 28;
            this->groupBox5->TabStop = false;
            // 
            // textBox16
            // 
            this->textBox16->Location = System::Drawing::Point(83, 189);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(100, 22);
            this->textBox16->TabIndex = 51;
            // 
            // textBox14
            // 
            this->textBox14->Location = System::Drawing::Point(83, 101);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(100, 22);
            this->textBox14->TabIndex = 49;
            // 
            // textBox15
            // 
            this->textBox15->Location = System::Drawing::Point(83, 144);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(100, 22);
            this->textBox15->TabIndex = 50;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(11, 192);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(69, 16);
            this->label23->TabIndex = 48;
            this->label23->Text = L"в точке j=";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Location = System::Drawing::Point(9, 144);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(69, 16);
            this->label22->TabIndex = 47;
            this->label22->Text = L"в точке j=";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(9, 103);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(69, 16);
            this->label21->TabIndex = 46;
            this->label21->Text = L"в точке j=";
            // 
            // textBox13
            // 
            this->textBox13->Location = System::Drawing::Point(682, 167);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(100, 22);
            this->textBox13->TabIndex = 45;
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(523, 76);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(100, 22);
            this->textBox8->TabIndex = 40;
            // 
            // textBox12
            // 
            this->textBox12->Location = System::Drawing::Point(682, 124);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(100, 22);
            this->textBox12->TabIndex = 44;
            // 
            // textBox11
            // 
            this->textBox11->Location = System::Drawing::Point(682, 76);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(100, 22);
            this->textBox11->TabIndex = 43;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(9, 44);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(124, 16);
            this->label13->TabIndex = 29;
            this->label13->Text = L"Сетка сплайна: n=";
            // 
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(523, 170);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(100, 22);
            this->textBox10->TabIndex = 42;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(357, 44);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(152, 16);
            this->label14->TabIndex = 31;
            this->label14->Text = L"Контрольная сетка N=";
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(523, 124);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(100, 22);
            this->textBox9->TabIndex = 41;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Location = System::Drawing::Point(7, 82);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(405, 16);
            this->label15->TabIndex = 32;
            this->label15->Text = L"Погрешность сплайна на контрольной сетке  max (0,...,j)|Fj-Sj|=";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(629, 79);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(47, 16);
            this->label16->TabIndex = 33;
            this->label16->Text = L"при x=";
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(523, 41);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(100, 22);
            this->textBox7->TabIndex = 39;
            this->textBox7->Text = L"4000";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(7, 128);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(444, 16);
            this->label17->TabIndex = 34;
            this->label17->Text = L"Погрешность производной на контрольной сетке  max (0,...,j)|F\'j-S\'j|=";
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(166, 41);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(100, 22);
            this->textBox6->TabIndex = 38;
            this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(629, 127);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(47, 16);
            this->label18->TabIndex = 35;
            this->label18->Text = L"при x=";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Location = System::Drawing::Point(629, 173);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(47, 16);
            this->label20->TabIndex = 37;
            this->label20->Text = L"при x=";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(7, 170);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(500, 16);
            this->label19->TabIndex = 36;
            this->label19->Text = L"Погрешность второй производной на контрольной сетке  max (0,...,j)|F\'\'j-S\'\'j|=";
            // 
            // chart1
            // 
            chartArea1->Name = L"ChartArea1";
            this->chart1->ChartAreas->Add(chartArea1);
            legend1->Name = L"Legend1";
            this->chart1->Legends->Add(legend1);
            this->chart1->Location = System::Drawing::Point(603, 2);
            this->chart1->Name = L"chart1";
            series1->ChartArea = L"ChartArea1";
            series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
            series1->Legend = L"Legend1";
            series1->Name = L"Series1";
            this->chart1->Series->Add(series1);
            this->chart1->Size = System::Drawing::Size(1500, 770);
            this->chart1->TabIndex = 29;
            this->chart1->Text = L"chart1";
            this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1924, 987);
            this->Controls->Add(this->chart1);
            this->Controls->Add(this->groupBox5);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->dataGridView2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->groupBox4);
            this->Controls->Add(this->groupBox3);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->groupBox3->ResumeLayout(false);
            this->groupBox3->PerformLayout();
            this->groupBox4->ResumeLayout(false);
            this->groupBox4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            this->groupBox5->ResumeLayout(false);
            this->groupBox5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }//void InitializeComponent(void)
#pragma endregion

    private:
        System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void label5_Click(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void label11_Click(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e)
        {
        }

        System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
        {
            // Обработка кликов по ячейкам dataGridView2
        }

        System::Void textBox4_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
        {
            // Обрабатываем только стрелки вверх/вниз
            if (e->KeyCode == Keys::Up || e->KeyCode == Keys::Down)
            {
                e->Handled = true; // Блокируем стандартное поведение
                int number;
                // Пытаемся преобразовать текст в число
                if (Int32::TryParse(textBox4->Text, number))
                {
                    // Изменяем значение
                    if (e->KeyCode == Keys::Up)
                        number++;
                    else if (e->KeyCode == Keys::Down)
                        number--;

                    // Обновляем текст
                    textBox4->Text = number.ToString();
                }
                else
                {
                    // Если не число - устанавливаем 0
                    textBox4->Text = "0";
                }
            }
        }

        System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
        {
            // Обработка кликов по ячейкам dataGridView2
        }

        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            FillSplineCoefficientsTable();
        }
        //// Основные методы
        void FillSplineCoefficientsTable()
        {
            try
            {
                dataGridView1->Rows->Clear();
                dataGridView1->RowHeadersVisible = false; // Отключить заголовки строк
                dataGridView1->Columns->Clear();

                // Добавляем колонки
                dataGridView1->Columns->Add("i", "i");
                dataGridView1->Columns->Add("x_i", "xᵢ");
                dataGridView1->Columns->Add("f_i", "fᵢ");
                dataGridView1->Columns->Add("a_i", "aᵢ");
                dataGridView1->Columns->Add("b_i", "bᵢ");
                dataGridView1->Columns->Add("c_i", "cᵢ");
                dataGridView1->Columns->Add("d_i", "dᵢ");

                dataGridView1->Columns["i"]->Width = 20; // Установка ширины первого столбца 

                // Получаем параметры
                int n = Int32::Parse(textBox4->Text);
                double a = Double::Parse(textBox3->Text);
                double b = Double::Parse(textBox5->Text);

                // Объявляем переменные здесь, чтобы они были видны во всей функции
                vector<double> xs, fi, a_coeff, b_coeff, c_coeff, d_coeff;

                double (*Func)(double) = nullptr;
                double (*FSecondDerivate)(double) = nullptr;

                double mu1 = 0.0;
                double mu2 = 0.0;
                // Определяем выбранную функцию, осцилляцию и вторую производную
                if (radioButton11->Checked)//ЕГУ
                {
                    if (radioButton10->Checked)
                    {
                        if (radioButton1->Checked) { Func = getFBfunc4; FSecondDerivate = getFBSecondDerivatefunc4; }
                        else if (radioButton2->Checked) { Func = getFBfunc5; FSecondDerivate = getFBSecondDerivatefunc5; }
                        else if (radioButton3->Checked) { Func = getFBfunc6;  FSecondDerivate = getFBSecondDerivatefunc6; }
                    }
                    else if (radioButton5->Checked)
                    {
                        if (radioButton1->Checked)
                        {
                            Func = getF41; FSecondDerivate = getSecondDerivateF41;
                        }
                        else if (radioButton2->Checked)
                        {
                            Func = getF51; FSecondDerivate = getSecondDerivateF51;
                        }
                        else if (radioButton3->Checked)
                        {
                            Func = getF61; FSecondDerivate = getSecondDerivateF61;
                        }
                    }
                    else if (radioButton6->Checked)
                    {
                        if (radioButton1->Checked)
                        {
                            Func = getF42; FSecondDerivate = getSecondDerivateF42;
                        }
                        else if (radioButton2->Checked)
                        {
                            Func = getF52; FSecondDerivate = getSecondDerivateF52;
                        }
                        else if (radioButton3->Checked)
                        {
                            Func = getF62; FSecondDerivate = getSecondDerivateF62;
                        }
                    }

                }
                else if  (radioButton12->Checked)
                {
                    if (radioButton10->Checked)
                    {
                        if (radioButton1->Checked) { Func = getFBfunc4; FSecondDerivate = getFBSecondDerivatefunc4; }
                        else if (radioButton2->Checked) { Func = getFBfunc5; FSecondDerivate = getFBSecondDerivatefunc5; }
                        else if (radioButton3->Checked) { Func = getFBfunc6;  FSecondDerivate = getFBSecondDerivatefunc6; }
                    }
                    else if (radioButton5->Checked)
                    {
                        if (radioButton1->Checked)
                        {
                            Func = getF41; FSecondDerivate = getSecondDerivateF41; mu1 = getSecondDerivateF41(a); mu2 = getSecondDerivateF41(b);
                        }
                        else if (radioButton2->Checked)
                        {
                            Func = getF51; FSecondDerivate = getSecondDerivateF51; mu1 = getSecondDerivateF51(a); mu2 = getSecondDerivateF51(b);
                        }
                        else if (radioButton3->Checked)
                        {
                            Func = getF61; FSecondDerivate = getSecondDerivateF61; mu1 = getSecondDerivateF61(a); mu2 = getSecondDerivateF61(b);
                        }
                    }
                    else if (radioButton6->Checked)
                    {
                        if (radioButton1->Checked)
                        {
                            Func = getF41; FSecondDerivate = getSecondDerivateF41; mu1 = getSecondDerivateF41(a); mu2 = getSecondDerivateF41(b);
                        }
                        else if (radioButton2->Checked)
                        {
                            Func = getF51; FSecondDerivate = getSecondDerivateF51; mu1 = getSecondDerivateF51(a); mu2 = getSecondDerivateF51(b);
                        }
                        else if (radioButton3->Checked)
                        {
                            Func = getF61; FSecondDerivate = getSecondDerivateF61; mu1 = getSecondDerivateF61(a); mu2 = getSecondDerivateF61(b);
                        }
                    }
                }
                // Получаем коэффициенты сплайна
                vector<vector<double>> coeffs = get_coeffs(n, a, b, Func, mu1, mu2);
                xs = coeffs[0];
                fi = coeffs[1];
                a_coeff = coeffs[2];
                b_coeff = coeffs[3];
                c_coeff = coeffs[4];
                d_coeff = coeffs[5];
                // Заполняем таблицу - теперь только n строк (по числу интервалов)
                for (int i = 0; i <n; i++)
                {
                    int rowIndex = dataGridView1->Rows->Add();
                    dataGridView1->Rows[rowIndex]->Cells["i"]->Value = i.ToString();
                    dataGridView1->Rows[rowIndex]->Cells["x_i"]->Value = xs[i].ToString("F6");
                    dataGridView1->Rows[rowIndex]->Cells["f_i"]->Value = fi[i].ToString("F6");
                    dataGridView1->Rows[rowIndex]->Cells["a_i"]->Value = a_coeff[i].ToString("F6");
                    dataGridView1->Rows[rowIndex]->Cells["b_i"]->Value = b_coeff[i].ToString("F6");
                    dataGridView1->Rows[rowIndex]->Cells["c_i"]->Value = c_coeff[i].ToString("F6");
                    dataGridView1->Rows[rowIndex]->Cells["d_i"]->Value = d_coeff[i].ToString("F6");
                }

                // Добавляем последний узел (только x, f и c)
                /*int lastRow = dataGridView1->Rows->Add();
                dataGridView1->Rows[lastRow]->Cells["i"]->Value = n.ToString();
                dataGridView1->Rows[lastRow]->Cells["x_i"]->Value = xs[n].ToString("F6");
                dataGridView1->Rows[lastRow]->Cells["f_i"]->Value = fi[n].ToString("F6");
                dataGridView1->Rows[lastRow]->Cells["c_i"]->Value = c_coeff[n].ToString("F6");*/
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Ошибка: " + ex->Message, "Ошибка расчета",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        //Основные методы 
        void ComparisonSplineAndFuncion()
        {
            try
            {
                dataGridView2->Rows->Clear();
                dataGridView2->RowHeadersVisible = false; // Отключить заголовки 
                dataGridView2->Columns->Clear();
                // Добавляем 
                dataGridView2->Columns->Add("i", "i");
                dataGridView2->Columns->Add("xi", "xi");
                dataGridView2->Columns->Add("Fi", "Fi");
                dataGridView2->Columns->Add("Si", "Si");
                dataGridView2->Columns->Add("|Fi-Si|", "|Fi-Si|");
                dataGridView2->Columns->Add("F'i", "F'i");
                dataGridView2->Columns->Add("S'i", "S'i");
                dataGridView2->Columns->Add("|F'i-S'i|", "|F'i-S'i|");
                dataGridView2->Columns->Add("F''i", "F''i");
                dataGridView2->Columns->Add("S''i", "S''i");
                dataGridView2->Columns->Add("|F''i-S''i|", "|F''i-S''i|");

                dataGridView2->Columns["i"]->Width = 30; // Установка ширины первого столбца 
                dataGridView2->Columns["xi"]->Width = 80;
                
                //Получаем параметры 
                int n = Int32::Parse(textBox4->Text);
                double a = Double::Parse(textBox3->Text);
                double b = Double::Parse(textBox5->Text);
                int N = 4000;//вводим параметр для более точного счета на каждом интервале

                // Получаем вторые производные из textBox


                double (*Func)(double) = nullptr;
                double (*FFirstDerivate)(double) = nullptr;
                double (*FSecondDerivate)(double) = nullptr;
                double (*Osc)(double) = nullptr;
                double (*OscFirstDerivate)(double) = nullptr;
                double (*OscSecondDerivate)(double) = nullptr;
                double (*Summa)(double) = nullptr; //сумма основной функции и осцилляторной get_coeff

                //инициализация переменных для хранения максимумов
                double maxDiff = 0, maxDiffFirst = 0, maxDiffSecond = 0;
                double maxDiffIndex = -1, maxDiffFirstIndex = -1, maxDiffSecondIndex = -1;
                double xMaxDiff = 0, xMaxDiffFirst = 0, xMaxDiffSecond = 0;

                // Объявляем переменные ДО блоков if
                vector<double> xs, fi, a_coeff, b_coeff, c_coeff, d_coeff;
                vector<vector<double>> coeffs;
                vector<vector<double>> errorData;

                //естественные граничные условия
                double mu1 = 0.0;
                double mu2 = 0.0;

                //выбираем функции, осцилляции и вторые производные
                if (radioButton11->Checked)
                {
                    if (radioButton10->Checked)//без осцилляции
                    {
                        if (radioButton1->Checked) { Func = getFBfunc4; FFirstDerivate = getFBFirstDerivatefunc4; FSecondDerivate = getFBSecondDerivatefunc4; }
                        else if (radioButton2->Checked) { Func = getFBfunc5; FFirstDerivate = getFBFirstDerivatefunc5; FSecondDerivate = getFBSecondDerivatefunc5; }
                        else if (radioButton3->Checked) { Func = getFBfunc6; FFirstDerivate = getFBFirstDerivatefunc6; FSecondDerivate = getFBSecondDerivatefunc6; }

                        // Получаем коэффициенты сплайна
                        vector<vector<double>> coeffs = get_coeffs(n, a, b, Func,mu1,mu2);
                        vector<double> xs = coeffs[0];
                        vector<double> fi = coeffs[1];
                        vector<double> a_coeff = coeffs[2];
                        vector<double> b_coeff = coeffs[3];
                        vector<double> c_coeff = coeffs[4];
                        vector<double> d_coeff = coeffs[5];
                        //остальной код для заполнения таблицы, используем getSplainError
                        errorData = getSplainError(N, nullptr, nullptr, nullptr,
                            Func, FFirstDerivate, FSecondDerivate,
                            xs, a_coeff, b_coeff, c_coeff, d_coeff);
                    }
                    else if (radioButton5->Checked)
                    {
                        Osc = Osc1; OscFirstDerivate = OscDerivate1; OscSecondDerivate = OscSecondDerivate1;
                        if (radioButton1->Checked)
                        {
                            Func = getFBfunc4; FFirstDerivate = getFBFirstDerivatefunc4; FSecondDerivate = getFBSecondDerivatefunc4; Summa = getF41;
                        }
                        else if (radioButton2->Checked)
                        {
                            Func = getFBfunc5; FFirstDerivate = getFBFirstDerivatefunc5; FSecondDerivate = getFBSecondDerivatefunc5; Summa = getF51;
                        }
                        else if (radioButton3->Checked)
                        {
                            Func = getFBfunc6; FFirstDerivate = getFBFirstDerivatefunc6; FSecondDerivate = getFBSecondDerivatefunc6; Summa = getF61;
                        }
                        // Получаем коэффициенты сплайна
                        vector<vector<double>> coeffs = get_coeffs(n, a, b, Summa, mu1,mu2);
                        vector<double> xs = coeffs[0];
                        vector<double> fi = coeffs[1];
                        vector<double> a_coeff = coeffs[2];
                        vector<double> b_coeff = coeffs[3];
                        vector<double> c_coeff = coeffs[4];
                        vector<double> d_coeff = coeffs[5];
                        //остальной код для заполнения таблицы, используем getSplainErrorWithOsc
                        errorData = getSplainErrorWithOsc(N, nullptr, nullptr, nullptr,
                            Func, FFirstDerivate, FSecondDerivate,
                            Osc, OscFirstDerivate, OscSecondDerivate,
                            xs, a_coeff, b_coeff, c_coeff, d_coeff);
                    }
                    else if (radioButton6->Checked)
                    {
                        Osc = Osc2; OscFirstDerivate = OscDerivate2; OscSecondDerivate = OscSecondDerivate2;
                        if (radioButton1->Checked)
                        {
                            Func = getFBfunc4; FFirstDerivate = getFBFirstDerivatefunc4; FSecondDerivate = getFBSecondDerivatefunc4; Summa = getF42;
                        }
                        else if (radioButton2->Checked)
                        {
                            Func = getFBfunc5; FFirstDerivate = getFBFirstDerivatefunc5; FSecondDerivate = getFBSecondDerivatefunc5; Summa = getF52;
                        }
                        else if (radioButton3->Checked)
                        {
                            Func = getFBfunc6; FFirstDerivate = getFBFirstDerivatefunc6; FSecondDerivate = getFBSecondDerivatefunc6; Summa = getF62;
                        }

                        // Получаем коэффициенты сплайна
                        vector<vector<double>> coeffs = get_coeffs(n, a, b, Summa,mu1,mu2);
                        vector<double> xs = coeffs[0];
                        vector<double> fi = coeffs[1];
                        vector<double> a_coeff = coeffs[2];
                        vector<double> b_coeff = coeffs[3];
                        vector<double> c_coeff = coeffs[4];
                        vector<double> d_coeff = coeffs[5];
                        //остальной код для заполнения таблицы, используем getSplainErrorForLastCase
                        errorData = getSplainErrorWithOsc(N, nullptr, nullptr, nullptr,
                            Func, FFirstDerivate, FSecondDerivate,
                            Osc, OscFirstDerivate, OscSecondDerivate,
                            xs, a_coeff, b_coeff, c_coeff, d_coeff);
                    }
                }
                
                else if (radioButton12->Checked)//должны вычислить mu1 и mu2
                {
                    if (radioButton10->Checked)//без осцилляции
                    {
                        if (radioButton1->Checked) { Func = getFBfunc4; FFirstDerivate = getFBFirstDerivatefunc4; FSecondDerivate = getFBSecondDerivatefunc4; }
                        else if (radioButton2->Checked) { Func = getFBfunc5; FFirstDerivate = getFBFirstDerivatefunc5; FSecondDerivate = getFBSecondDerivatefunc5; }
                        else if (radioButton3->Checked) { Func = getFBfunc6; FFirstDerivate = getFBFirstDerivatefunc6; FSecondDerivate = getFBSecondDerivatefunc6; }
                        mu1 = FSecondDerivate(a);
                        mu2 = FSecondDerivate(b);
                        // Получаем коэффициенты сплайна
                        vector<vector<double>> coeffs = get_coeffs(n, a, b, Func,mu1,mu2);
                        vector<double> xs = coeffs[0];
                        vector<double> fi = coeffs[1];
                        vector<double> a_coeff = coeffs[2];
                        vector<double> b_coeff = coeffs[3];
                        vector<double> c_coeff = coeffs[4];
                        vector<double> d_coeff = coeffs[5];
                        //остальной код для заполнения таблицы, используем getSplainError
                        errorData = getSplainError(N, nullptr, nullptr, nullptr,
                            Func, FFirstDerivate, FSecondDerivate,
                            xs, a_coeff, b_coeff, c_coeff, d_coeff);
                    }
                    else if (radioButton5->Checked)
                    {
                        Osc = Osc1; OscFirstDerivate = OscDerivate1; OscSecondDerivate = OscSecondDerivate1;
                        if (radioButton1->Checked)
                        {
                            Func = getFBfunc4; FFirstDerivate = getFBFirstDerivatefunc4; FSecondDerivate = getFBSecondDerivatefunc4; Summa = getF41;
                        }
                        else if (radioButton2->Checked)
                        {
                            Func = getFBfunc5; FFirstDerivate = getFBFirstDerivatefunc5; FSecondDerivate = getFBSecondDerivatefunc5; Summa = getF51;
                        }
                        else if (radioButton3->Checked)
                        {
                            Func = getFBfunc6; FFirstDerivate = getFBFirstDerivatefunc6; FSecondDerivate = getFBSecondDerivatefunc6; Summa = getF61;
                        }
                        mu1 = FSecondDerivate(a);
                        mu2 = FSecondDerivate(b);
                        // Получаем коэффициенты сплайна
                        vector<vector<double>> coeffs = get_coeffs(n, a, b,Summa,mu1,mu2);
                        vector<double> xs = coeffs[0];
                        vector<double> fi = coeffs[1];
                        vector<double> a_coeff = coeffs[2];
                        vector<double> b_coeff = coeffs[3];
                        vector<double> c_coeff = coeffs[4];
                        vector<double> d_coeff = coeffs[5];
                        //остальной код для заполнения таблицы, используем getSplainErrorWithOsc
                        errorData = getSplainErrorWithOsc(N, nullptr, nullptr, nullptr,
                            Func, FFirstDerivate, FSecondDerivate,
                            Osc, OscFirstDerivate, OscSecondDerivate,
                            xs, a_coeff, b_coeff, c_coeff, d_coeff);
                    }
                    else if (radioButton6->Checked)
                    {
                        Osc = Osc2; OscFirstDerivate = OscDerivate2; OscSecondDerivate = OscSecondDerivate2;
                        if (radioButton1->Checked)
                        {
                            Func = getFBfunc4; FFirstDerivate = getFBFirstDerivatefunc4; FSecondDerivate = getFBSecondDerivatefunc4; Summa = getF42;
                        }
                        else if (radioButton2->Checked)
                        {
                            Func = getFBfunc5; FFirstDerivate = getFBFirstDerivatefunc5; FSecondDerivate = getFBSecondDerivatefunc5; Summa = getF52;
                        }
                        else if (radioButton3->Checked)
                        {
                            Func = getFBfunc6; FFirstDerivate = getFBFirstDerivatefunc6; FSecondDerivate = getFBSecondDerivatefunc6; Summa = getF62;
                        }
                        mu1 = FSecondDerivate(a);
                        mu2 = FSecondDerivate(b);
                        // Получаем коэффициенты сплайна
                        vector<vector<double>> coeffs = get_coeffs(n, a, b,Summa,mu1,mu2);
                        vector<double> xs = coeffs[0];
                        vector<double> fi = coeffs[1];
                        vector<double> a_coeff = coeffs[2];
                        vector<double> b_coeff = coeffs[3];
                        vector<double> c_coeff = coeffs[4];
                        vector<double> d_coeff = coeffs[5];
                        //остальной код для заполнения таблицы, используем getSplainErrorForLastCase
                        errorData = getSplainErrorWithOsc(N, nullptr, nullptr, nullptr,
                            Func, FFirstDerivate, FSecondDerivate,
                            Osc, OscFirstDerivate, OscSecondDerivate,
                            xs, a_coeff, b_coeff, c_coeff, d_coeff);
                    }
                }
               
                // Заполнение таблицы
                double step = (b - a) / N;
                for (int i = 0; i < N; i++)
                {
                    int rowIndex = dataGridView2->Rows->Add();
                    double x = a + i * step;
                 
                    // Заполняем строку
                    dataGridView2->Rows[rowIndex]->Cells["i"]->Value = i.ToString();
                    dataGridView2->Rows[rowIndex]->Cells["xi"]->Value = x.ToString("F8");

                    // Основные значения
                    dataGridView2->Rows[rowIndex]->Cells["Fi"]->Value = errorData[0][i].ToString("F8");
                    dataGridView2->Rows[rowIndex]->Cells["Si"]->Value = errorData[1][i].ToString("F8");
                    dataGridView2->Rows[rowIndex]->Cells["|Fi-Si|"]->Value = errorData[2][i].ToString("F8");

                    // Первые производные
                    dataGridView2->Rows[rowIndex]->Cells["F'i"]->Value = errorData[3][i].ToString("F8");
                    dataGridView2->Rows[rowIndex]->Cells["S'i"]->Value = errorData[4][i].ToString("F8");
                    dataGridView2->Rows[rowIndex]->Cells["|F'i-S'i|"]->Value = errorData[5][i].ToString("F8");

                    // Вторые производные
                    dataGridView2->Rows[rowIndex]->Cells["F''i"]->Value = errorData[6][i].ToString("F8");
                    dataGridView2->Rows[rowIndex]->Cells["S''i"]->Value = errorData[7][i].ToString("F8");
                    dataGridView2->Rows[rowIndex]->Cells["|F''i-S''i|"]->Value = errorData[8][i].ToString("F8");

                    // Поиск максимумов 
                    double currentDiff = errorData[2][i];       // 5 столбец (|Fi-Si|)
                    double currentFirst = errorData[5][i];      // 8 столбец (|F'i-S'i|)
                    double currentSecond = errorData[8][i];     // 11 столбец (|F''i-S''i|)

                    if (currentDiff > maxDiff)
                    {
                        maxDiff = currentDiff;
                        maxDiffIndex = i;
                        xMaxDiff = x;
                    }

                    if (currentFirst > maxDiffFirst)
                    {
                        maxDiffFirst = currentFirst;
                        maxDiffFirstIndex = i;
                        xMaxDiffFirst = x;
                    }

                    if (currentSecond > maxDiffSecond)
                    {
                        maxDiffSecond = currentSecond;
                        maxDiffSecondIndex = i;
                        xMaxDiffSecond = x;
                    }
                }

                // Выводим результаты
                textBox8->Text = maxDiff.ToString("F8");
                textBox14->Text = maxDiffIndex.ToString();
                textBox11->Text = xMaxDiff.ToString("F8");

                textBox9->Text = maxDiffFirst.ToString("F8");
                textBox15->Text = maxDiffFirstIndex.ToString();
                textBox12->Text = xMaxDiffFirst.ToString("F8");

                textBox10->Text = maxDiffSecond.ToString("F8");
                textBox16->Text = maxDiffSecondIndex.ToString();
                textBox13->Text = xMaxDiffSecond.ToString("F8");

            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Ошибка: " + ex->Message, "Ошибка расчета",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void PlotFunctionFromTable1()
        {
            try
            {
                // Очищаем предыдущие графики
                chart1->Series->Clear();
                
                // 1. Графики функции F(x) и сплайна S(x)
                Series^ seriesF = gcnew Series();
                seriesF->Name = "F(x)";
                seriesF->ChartType = SeriesChartType::Spline;
                seriesF->BorderWidth = 2;
                seriesF->Color = Color::Blue;

                Series^ seriesS = gcnew Series();
                seriesS->Name = "S(x)";
                seriesS->ChartType = SeriesChartType::Spline;
                seriesS->BorderWidth = 2;
                seriesS->Color = Color::Green;

                // 4. Графики погрешностей
                Series^ seriesError = gcnew Series();
                seriesError->Name = "F(x)-S(x)";
                seriesError->ChartType = SeriesChartType::Line;
                seriesError->BorderWidth = 1;
                seriesError->Color = Color::Red;

                // Собираем данные из таблицы
                for (int i = 0; i < dataGridView2->Rows->Count; i++)
                {
                    if (dataGridView2->Rows[i]->IsNewRow) continue;

                    // Получаем значения из таблицы
                    double x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["xi"]->Value);
                    double fx = Convert::ToDouble(dataGridView2->Rows[i]->Cells["Fi"]->Value);
                    double sx = Convert::ToDouble(dataGridView2->Rows[i]->Cells["Si"]->Value);
                    double error = Convert::ToDouble(dataGridView2->Rows[i]->Cells["|Fi-Si|"]->Value);

                    // Добавляем точки на графики
                    seriesF->Points->AddXY(x, fx);
                    seriesS->Points->AddXY(x, sx);
                    seriesError->Points->AddXY(x, error);
                }

                // Добавляем все серии на график
                chart1->Series->Add(seriesF);
                chart1->Series->Add(seriesS);
                chart1->Series->Add(seriesError);

                // Настраиваем оси и легенду
                chart1->ChartAreas[0]->AxisX->Title = "x";
                chart1->ChartAreas[0]->AxisY->Title = "Значения";
                chart1->ChartAreas[0]->RecalculateAxesScale();

                // Настраиваем легенду
                chart1->Legends->Clear();
                Legend^ legend = gcnew Legend();
                legend->Docking = Docking::Right;
                legend->Alignment = StringAlignment::Center;
                chart1->Legends->Add(legend);

                // Обновляем график
                chart1->Update();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Ошибка при построении графика: " + ex->Message,
                    "Ошибка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error);
            }
        }

        void PlotFunctionFromTable2()
        {
            try
            {
                // Очищаем предыдущие графики
                chart1->Series->Clear();

                // 2. Графики первых производных
                Series^ seriesF1 = gcnew Series();
                seriesF1->Name = "F'(x)";
                seriesF1->ChartType = SeriesChartType::Spline;
                seriesF1->BorderWidth = 2;
                seriesF1->Color = Color::Blue;

                Series^ seriesS1 = gcnew Series();
                seriesS1->Name = "S'(x)";
                seriesS1->ChartType = SeriesChartType::Spline;
                seriesS1->BorderWidth = 2;
                seriesS1->Color = Color::Green;

                // 4. Графики погрешностей

                Series^ seriesError1 = gcnew Series();
                seriesError1->Name = "F'(x)-S'(x)";
                seriesError1->ChartType = SeriesChartType::Line;
                seriesError1->BorderWidth = 1;
                seriesError1->Color = Color::Red;


                // Собираем данные из таблицы
                for (int i = 0; i < dataGridView2->Rows->Count; i++)
                {
                    if (dataGridView2->Rows[i]->IsNewRow) continue;

                    // Получаем значения из таблицы
                    double x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["xi"]->Value);
                    double f1x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["F'i"]->Value);
                    double s1x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["S'i"]->Value);
                    double error1 = Convert::ToDouble(dataGridView2->Rows[i]->Cells["|F'i-S'i|"]->Value);


                    // Добавляем точки на графики
                    seriesF1->Points->AddXY(x, f1x);
                    seriesS1->Points->AddXY(x, s1x);
                    seriesError1->Points->AddXY(x, error1);

                }

                // Добавляем все серии на график
                chart1->Series->Add(seriesF1);
                chart1->Series->Add(seriesS1);
                chart1->Series->Add(seriesError1);


                // Настраиваем оси и легенду
                chart1->ChartAreas[0]->AxisX->Title = "x";
                chart1->ChartAreas[0]->AxisY->Title = "Значения";
                chart1->ChartAreas[0]->RecalculateAxesScale();

                // Настраиваем легенду
                chart1->Legends->Clear();
                Legend^ legend = gcnew Legend();
                legend->Docking = Docking::Right;
                legend->Alignment = StringAlignment::Center;
                chart1->Legends->Add(legend);

                // Обновляем график
                chart1->Update();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Ошибка при построении графика: " + ex->Message,
                    "Ошибка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error);
            }
        }
        void PlotFunctionFromTable3()
        {
            try
            {
                // Очищаем предыдущие графики
                chart1->Series->Clear();

                // 3. Графики вторых производных
                Series^ seriesF2 = gcnew Series();
                seriesF2->Name = "F''(x)";
                seriesF2->ChartType = SeriesChartType::Spline;
                seriesF2->BorderWidth = 2;
                seriesF2->Color = Color::Blue;

                Series^ seriesS2 = gcnew Series();
                seriesS2->Name = "S''(x)";
                seriesS2->ChartType = SeriesChartType::Spline;
                seriesS2->BorderWidth = 2;
                seriesS2->Color = Color::Green;

                Series^ seriesError2 = gcnew Series();
                seriesError2->Name = "F''(x)-S''(x)";
                seriesError2->ChartType = SeriesChartType::Line;
                seriesError2->BorderWidth = 1;
                seriesError2->Color = Color::Red;

                // Собираем данные из таблицы
                for (int i = 0; i < dataGridView2->Rows->Count; i++)
                {
                    if (dataGridView2->Rows[i]->IsNewRow) continue;

                    // Получаем значения из таблицы
                    double x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["xi"]->Value);
                    double f2x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["F''i"]->Value);
                    double s2x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["S''i"]->Value);
                    double error2 = Convert::ToDouble(dataGridView2->Rows[i]->Cells["|F''i-S''i|"]->Value);

                    // Добавляем точки на графики
                    seriesF2->Points->AddXY(x, f2x);
                    seriesS2->Points->AddXY(x, s2x);
                    seriesError2->Points->AddXY(x, error2);
                }

                // Добавляем все серии на график
                chart1->Series->Add(seriesF2);
                chart1->Series->Add(seriesS2);
                chart1->Series->Add(seriesError2);

                // Настраиваем оси и легенду
                chart1->ChartAreas[0]->AxisX->Title = "x";
                chart1->ChartAreas[0]->AxisY->Title = "Значения";
                chart1->ChartAreas[0]->RecalculateAxesScale();

                // Настраиваем легенду
                chart1->Legends->Clear();
                Legend^ legend = gcnew Legend();
                legend->Docking = Docking::Right;
                legend->Alignment = StringAlignment::Center;
                chart1->Legends->Add(legend);

                // Обновляем график
                chart1->Update();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Ошибка при построении графика: " + ex->Message,
                    "Ошибка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error);
            }
        }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        ComparisonSplineAndFuncion();
        textBox6->Text = textBox4->Text;
        if (radioButton7->Checked) { PlotFunctionFromTable1(); }
        if (radioButton8->Checked) { PlotFunctionFromTable2(); }
        if (radioButton9->Checked) { PlotFunctionFromTable3(); }
    }

          
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textBox6->Text = textBox4->Text;
}

private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    PlotFunctionFromTable1();
}
private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    PlotFunctionFromTable2();
}
private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    PlotFunctionFromTable3();
}
private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
//private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//}
//private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}