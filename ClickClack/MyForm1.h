#pragma once
#include "MyForm2.h"

namespace ClickClack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private:
		System::String^ fileName;
	private: System::Windows::Forms::Label^ label1;
	public:

		Form^ ff;
		MyForm1(Form^ f, System::String^ fileName)
		{
			ff = f;
			this->fileName = fileName; // Сохраняем имя файла
			InitializeComponent();
		}
		
		//MyForm1(Form^ f)
		//{
		//	ff = f;
		//	InitializeComponent();
		//	//	//
		//	//	//TODO: добавьте код конструктора
		//	//	//
		//}
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(282, 547);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"→";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 1;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 593);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"возможности игры";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ login;
		String^ password;

		try {
			StreamReader^ reader = File::OpenText(fileName);
			login = reader->ReadLine();
			password = reader->ReadLine();
			reader->Close();

			label1->Text = login;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при чтении файла: " + ex->Message);
		}
	}

	

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены, что хотите перейти к обучению?", "Подтверждение", System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			MyForm2^ f = gcnew MyForm2(this, fileName);
			this->Hide();
			f->Show();
		}
	}
	};
}
