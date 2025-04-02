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
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
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
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
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
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->groupBox3->SuspendLayout();
            this->groupBox4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->SuspendLayout();

            // label1
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(26, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(65, 16);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Функции";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);

            // label2
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(14, 82);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(45, 16);
            this->label2->TabIndex = 2;
            this->label2->Text = L"S\'\'(a)=";

            // label3
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(14, 110);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(45, 16);
            this->label3->TabIndex = 3;
            this->label3->Text = L"S\'\'(b)=";

            // textBox1
            this->textBox1->Location = System::Drawing::Point(67, 79);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(54, 22);
            this->textBox1->TabIndex = 4;
            this->textBox1->Text = L"-1";

            // textBox2
            this->textBox2->Location = System::Drawing::Point(67, 107);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(54, 22);
            this->textBox2->TabIndex = 5;
            this->textBox2->Text = L"1";

            // radioButton1
            this->radioButton1->AutoSize = true;
            this->radioButton1->Location = System::Drawing::Point(5, 40);
            this->radioButton1->Name = L"radioButton1";
            this->radioButton1->Size = System::Drawing::Size(106, 20);
            this->radioButton1->TabIndex = 6;
            this->radioButton1->TabStop = true;
            this->radioButton1->Text = L"(ln(x+1))/(x+1)";
            this->radioButton1->UseVisualStyleBackColor = true;
            this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);

            // radioButton2
            this->radioButton2->AutoSize = true;
            this->radioButton2->Location = System::Drawing::Point(5, 62);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(76, 20);
            this->radioButton2->TabIndex = 7;
            this->radioButton2->TabStop = true;
            this->radioButton2->Text = L"ln(x+1)/x";
            this->radioButton2->UseVisualStyleBackColor = true;

            // radioButton3
            this->radioButton3->AutoSize = true;
            this->radioButton3->Location = System::Drawing::Point(5, 82);
            this->radioButton3->Name = L"radioButton3";
            this->radioButton3->Size = System::Drawing::Size(83, 20);
            this->radioButton3->TabIndex = 8;
            this->radioButton3->TabStop = true;
            this->radioButton3->Text = L"sin(x+1)/x";
            this->radioButton3->UseVisualStyleBackColor = true;

            // groupBox1
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

            // radioButton4
            this->radioButton4->AutoSize = true;
            this->radioButton4->Location = System::Drawing::Point(5, 19);
            this->radioButton4->Name = L"radioButton4";
            this->radioButton4->Size = System::Drawing::Size(49, 20);
            this->radioButton4->TabIndex = 9;
            this->radioButton4->TabStop = true;
            this->radioButton4->Text = L"ϕ(x)";
            this->radioButton4->UseVisualStyleBackColor = true;
            this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);

            // radioButton6
            this->radioButton6->AutoSize = true;
            this->radioButton6->Location = System::Drawing::Point(6, 63);
            this->radioButton6->Name = L"radioButton6";
            this->radioButton6->Size = System::Drawing::Size(109, 20);
            this->radioButton6->TabIndex = 11;
            this->radioButton6->TabStop = true;
            this->radioButton6->Text = L"f(x)+cos(100x)";
            this->radioButton6->UseVisualStyleBackColor = true;
            this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);

            // radioButton5
            this->radioButton5->AutoSize = true;
            this->radioButton5->Location = System::Drawing::Point(6, 42);
            this->radioButton5->Name = L"radioButton5";
            this->radioButton5->Size = System::Drawing::Size(102, 20);
            this->radioButton5->TabIndex = 10;
            this->radioButton5->TabStop = true;
            this->radioButton5->Text = L"f(x)+cos(10x)";
            this->radioButton5->UseVisualStyleBackColor = true;
            this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);

            // label4
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(47, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(136, 16);
            this->label4->TabIndex = 10;
            this->label4->Text = L"Граничные условия";

            // textBox3
            this->textBox3->Location = System::Drawing::Point(39, 35);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(36, 22);
            this->textBox3->TabIndex = 12;
            this->textBox3->Text = L"-1";
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);

            // label5
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(11, 38);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(22, 16);
            this->label5->TabIndex = 11;
            this->label5->Text = L"a=";
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);

            // label6
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(6, 18);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(120, 16);
            this->label6->TabIndex = 13;
            this->label6->Text = L"Границы отрезка";

            // label7
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(84, 38);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(22, 16);
            this->label7->TabIndex = 14;
            this->label7->Text = L"b=";

            // label8
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(6, 60);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(211, 16);
            this->label8->TabIndex = 16;
            this->label8->Text = L"Значение вторых производных";

            // textBox5
            this->textBox5->Location = System::Drawing::Point(112, 35);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(36, 22);
            this->textBox5->TabIndex = 17;
            this->textBox5->Text = L"1";

            // groupBox2
            this->groupBox2->Controls->Add(this->label4);
            this->groupBox2->Controls->Add(this->textBox5);
            this->groupBox2->Controls->Add(this->label2);
            this->groupBox2->Controls->Add(this->label8);
            this->groupBox2->Controls->Add(this->label3);
            this->groupBox2->Controls->Add(this->label7);
            this->groupBox2->Controls->Add(this->textBox1);
            this->groupBox2->Controls->Add(this->label6);
            this->groupBox2->Controls->Add(this->textBox2);
            this->groupBox2->Controls->Add(this->textBox3);
            this->groupBox2->Controls->Add(this->label5);
            this->groupBox2->Location = System::Drawing::Point(3, 103);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(225, 145);
            this->groupBox2->TabIndex = 18;
            this->groupBox2->TabStop = false;

            // label9
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(31, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(120, 16);
            this->label9->TabIndex = 12;
            this->label9->Text = L"Строить графики";

            // radioButton7
            this->radioButton7->AutoSize = true;
            this->radioButton7->Location = System::Drawing::Point(6, 19);
            this->radioButton7->Name = L"radioButton7";
            this->radioButton7->Size = System::Drawing::Size(86, 20);
            this->radioButton7->TabIndex = 14;
            this->radioButton7->TabStop = true;
            this->radioButton7->Text = L"Функций";
            this->radioButton7->UseVisualStyleBackColor = true;

            // radioButton8
            this->radioButton8->AutoSize = true;
            this->radioButton8->Location = System::Drawing::Point(6, 40);
            this->radioButton8->Name = L"radioButton8";
            this->radioButton8->Size = System::Drawing::Size(167, 20);
            this->radioButton8->TabIndex = 12;
            this->radioButton8->TabStop = true;
            this->radioButton8->Text = L"Первых производных";
            this->radioButton8->UseVisualStyleBackColor = true;

            // radioButton9
            this->radioButton9->AutoSize = true;
            this->radioButton9->Location = System::Drawing::Point(6, 61);
            this->radioButton9->Name = L"radioButton9";
            this->radioButton9->Size = System::Drawing::Size(165, 20);
            this->radioButton9->TabIndex = 13;
            this->radioButton9->TabStop = true;
            this->radioButton9->Text = L"Вторых производных";
            this->radioButton9->UseVisualStyleBackColor = true;

            // groupBox3
            this->groupBox3->Controls->Add(this->label9);
            this->groupBox3->Controls->Add(this->radioButton9);
            this->groupBox3->Controls->Add(this->radioButton8);
            this->groupBox3->Controls->Add(this->radioButton7);
            this->groupBox3->Location = System::Drawing::Point(275, 2);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(183, 89);
            this->groupBox3->TabIndex = 19;
            this->groupBox3->TabStop = false;

            // label10
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(7, 251);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(122, 16);
            this->label10->TabIndex = 20;
            this->label10->Text = L"Число разбиений";

            // groupBox4
            this->groupBox4->Controls->Add(this->radioButton6);
            this->groupBox4->Controls->Add(this->radioButton10);
            this->groupBox4->Controls->Add(this->radioButton5);
            this->groupBox4->Controls->Add(this->label11);
            this->groupBox4->Location = System::Drawing::Point(134, 1);
            this->groupBox4->Name = L"groupBox4";
            this->groupBox4->Size = System::Drawing::Size(141, 106);
            this->groupBox4->TabIndex = 22;
            this->groupBox4->TabStop = false;

            // radioButton10
            this->radioButton10->AutoSize = true;
            this->radioButton10->Location = System::Drawing::Point(6, 21);
            this->radioButton10->Name = L"radioButton10";
            this->radioButton10->Size = System::Drawing::Size(51, 20);
            this->radioButton10->TabIndex = 12;
            this->radioButton10->TabStop = true;
            this->radioButton10->Text = L"нет";
            this->radioButton10->UseVisualStyleBackColor = true;

            // label11
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(28, -1);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(87, 16);
            this->label11->TabIndex = 23;
            this->label11->Text = L"Осцилляции";
            this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);

            // textBox4
            this->textBox4->Location = System::Drawing::Point(140, 248);
            this->textBox4->Multiline = true;
            this->textBox4->Name = L"textBox4";
            this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox4->Size = System::Drawing::Size(62, 24);
            this->textBox4->TabIndex = 21;
            this->textBox4->Text = L"5";
            this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
            this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox4_KeyDown);

            // dataGridView1
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(3, 304);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(594, 90);
            this->dataGridView1->TabIndex = 23;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);

            // button1
            this->button1->Location = System::Drawing::Point(8, 273);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(267, 23);
            this->button1->TabIndex = 24;
            this->button1->Text = L"Рассчитать коэффициенты сплайна ";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);

            // dataGridView2
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Location = System::Drawing::Point(3, 430);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowHeadersWidth = 51;
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(594, 202);
            this->dataGridView2->TabIndex = 25;
            this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);

            // MyForm
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1311, 685);
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

        // Основные методы
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
                double (*oscFunc)(double, double(*)(double)) = nullptr;
                // Определяем выбранную функцию и осцилляцию
                if (radioButton1->Checked)
                {
                    if (radioButton10->Checked) { Func = getFBfunc4; }
                    else if (radioButton5->Checked) { Func = getF41; }
                    else if (radioButton6->Checked) { Func = getF42; }
                }
                else if (radioButton2->Checked)
                {
                    if (radioButton10->Checked) { Func = getFBfunc5; }
                    else if (radioButton5->Checked) { Func = getF51; }
                    else if (radioButton6->Checked) { Func = getF52; }
                }
                else if (radioButton3->Checked)
                {
                    if (radioButton10->Checked) { Func = getFBfunc6; }
                    else if (radioButton5->Checked) { Func = getF61; }
                    else if (radioButton6->Checked) { Func = getF62; }
                }
                // Получаем коэффициенты
                vector<vector<double>> coeffs = get_coeffs(n, a, b, Func);
                xs = coeffs[0];
                fi = coeffs[1];
                a_coeff = coeffs[2];
                b_coeff = coeffs[3];
                c_coeff = coeffs[4];
                d_coeff = coeffs[5];

                // Заполняем таблицу
                for (int i = 0; i <= n; i++)
                {
                    int rowIndex = dataGridView1->Rows->Add();
                    dataGridView1->Rows[rowIndex]->Cells["i"]->Value = i.ToString();
                    dataGridView1->Rows[rowIndex]->Cells["x_i"]->Value = xs[i].ToString("F6");
                    dataGridView1->Rows[rowIndex]->Cells["f_i"]->Value = fi[i].ToString("F6");

                    if (i < n)
                    {
                        dataGridView1->Rows[rowIndex]->Cells["a_i"]->Value = a_coeff[i].ToString("F6");
                        dataGridView1->Rows[rowIndex]->Cells["b_i"]->Value = b_coeff[i].ToString("F6");
                        dataGridView1->Rows[rowIndex]->Cells["c_i"]->Value = c_coeff[i].ToString("F6");
                        dataGridView1->Rows[rowIndex]->Cells["d_i"]->Value = d_coeff[i].ToString("F6");
                    }
                }
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Ошибка: " + ex->Message, "Ошибка расчета",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    };
}