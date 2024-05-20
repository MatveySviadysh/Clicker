#pragma once
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"

namespace ClickClack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	private:
		int count = 0,power_click = 1;
		bool count_flag = false, image_flag = false;
		bool count_flag_2 = false, shop_count = false;
		System::String^ fileName;
	public:
		void UpdateValues(int count, int power) {
			this->count = count;
			this->power_click = power;
		}

		void set_power(int p) {
			power_click = p;
		}
		void set_count(int c) {
			count = c;
		}

		int get_count() {
			return count;
		}

		int get_power_click() {
			return count;
		}

		void UpdateValuesFromForm5(int count, int power_click) {
			this->count = count;
			this->power_click = power_click;
			label4->Text = count.ToString();
		}

		Form^ ff;

		MyForm2(Form^ f, System::String^ fileName)
		{
			this->fileName = fileName;
			ff = f;

			InitializeComponent();
			//	//
			//	//TODO: добавьте код конструктора
			//	//
		}
		
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;



	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(290, 549);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"→";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"накопите 10 очков и  просмотреть доступные сцены";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(137, 289);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 69);
			this->button3->TabIndex = 4;
			this->button3->Text = L"получить очко";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"кол очков:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(134, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"0";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(29, 373);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"смена локации";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(158, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(12, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"/";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(185, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"10";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(188, 484);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"сдатьь задание";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Квест 1:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(234, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(12, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"/";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(254, 128);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(210, 128);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"0";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm2::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(35, 128);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(159, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"посмотреть доступные сцены";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(32, 49);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(331, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"квест 2: вам необходимо собрать 300 очков и зайти в магазин ";
			this->label12->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(72, 501);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"магазин";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(53, 128);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(94, 13);
			this->label13->TabIndex = 19;
			this->label13->Text = L"зайти в магазин:";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(210, 128);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 20;
			this->label14->Text = L"0";
			this->label14->Visible = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 593);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"обучение";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		count+= power_click;
		label4->Text = count + "";
		if (count == 10) {
			count_flag = true;
		}
		if (count == 300) {
			count_flag_2 = true;
		}
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Вы действительно хотите пропустить обучение?", "Подтверждение", System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Question);
		
		if (result == System::Windows::Forms::DialogResult::Yes) {
			MyForm3^ f = gcnew MyForm3(this, fileName);
			this->Hide();
			f->Show();
		}
	}
	
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		image_flag = true;
		label10->Text = "" + 1;
		MyForm4^ f = gcnew MyForm4(this,fileName);
		f->Show();
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int count_btn2 = 0, btn2 = 0;
		if (image_flag == true && count_flag == true) {
			count_btn2++;
			label2->Visible = false;
			label6->Text = 300 + "";
			label7->Visible = false;
			label10->Visible = false;
			label11->Visible = false;

			button4->Visible = true;
			label12->Visible = true;
			label13->Visible = true;
			label14->Visible = true;
		}
		if (count_flag_2 == true && shop_count == true) {
			count_btn2++;
		}
		/*else if(btn2 == 1)
		{
			if (count_flag_2 == false) {
				int a = 300 - count;
				MessageBox::Show("вам не хватает" + a);
			}
		}*/
		if (count_btn2 == 2) {
			MyForm3^ f = gcnew MyForm3(this, fileName);
			this->Hide();
			f->Show();
		}
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		shop_count = true;
		label14->Text = 1+"";

		MyForm5^ f = gcnew MyForm5(this,count, power_click,fileName);
		f->FormClosed += gcnew FormClosedEventHandler(this, &MyForm2::OnForm5Closed);

		f->Show();
		this->Hide();
	}
	private: System::Void OnForm5Closed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->count = dynamic_cast<MyForm5^>(sender)->GetCount(); 
		this->power_click = dynamic_cast<MyForm5^>(sender)->GetPower(); 
		label4->Text = count.ToString(); 
		this->Show(); 
	}
};
}
