#pragma once
#include "MyForm1.h"
#include <string>

namespace ClickClack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	//using namespace System::Text::RegularExpressions::Regex;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(142, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 232);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 287);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(66, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"зарегистрироваться";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(210, 258);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"войти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(142, 332);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"зарестироваться";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(133, 231);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(133, 286);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(142, 414);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"назад";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 235);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"логин:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(88, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"пороль:";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(66, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Пароль должен состоять минимум из 4 символов";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(269, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Имя пользователя может содержать только буквы";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(66, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"логин короче 4 символов";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(66, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"заполните поля";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(66, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"такой пользователь есть ";
			this->label7->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 593);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"начало";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ enteredLogin = textBox1->Text;
			String^ enteredPassword = textBox2->Text;

			if (String::IsNullOrEmpty(enteredLogin) || String::IsNullOrEmpty(enteredPassword)) {
				label6->Visible = true;
				return;
			}

			bool credentialsMatch = false;

			int lastFileNumber = 0;
			String^ fileName;

			while (true) {
				fileName = "user_" + (lastFileNumber + 1) + ".txt";
				if (!File::Exists(fileName)) {
					break;
				}

				StreamReader^ userFile = File::OpenText(fileName);
				String^ loginFromFile = userFile->ReadLine();
				String^ passwordFromFile = userFile->ReadLine();
				userFile->Close();

				if (loginFromFile == enteredLogin && passwordFromFile == enteredPassword) {
					credentialsMatch = true;
					break;
				}

				lastFileNumber++;
			}

			if (credentialsMatch) {
				MyForm1^ f = gcnew MyForm1(this, fileName);
				f->Show();
				this->textBox1->Clear();
				this->textBox2->Clear();
				this->Hide();
			}
			else {
				MessageBox::Show("Проверьте введенные данные!");
				this->textBox1->Clear();
				this->textBox2->Clear();
			}
		}
		catch (IOException^ ex) {
			MessageBox::Show("Ошибка при чтении файлов: " + ex->Message);
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Visible = true;
		textBox4->Visible = true;
		button4->Visible = true;

		button3->Visible = false;
		button2->Visible = false;

		button5->Visible = true;
		this->Text = "регистрация";

		label1->Visible = true;
		label2->Visible = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Visible = true;
		textBox1->Visible = true;
		textBox2->Visible = true;

		button3->Visible = false;
		button2->Visible = false;

		button5->Visible = true;
		this->Text = "вход";

		label1->Visible = true;
		label2->Visible = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		button3->Visible = true;
		button2->Visible = true;

		button1->Visible = false;
		textBox1->Visible = false;
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		button4->Visible = false;

		button5->Visible = false;
		this->Text = "начало";

		label1->Visible = false;
		label2->Visible = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ login = textBox3->Text;
			String^ password = textBox4->Text;

			bool hasEmptyFields = false;
			bool hasShortPassword = false;
			bool hasInvalidLogin = false;
			bool hasShortLogin = false;
			bool hasDuplicateLogin = false;

			if (String::IsNullOrEmpty(login) || String::IsNullOrEmpty(password)) {
				hasEmptyFields = true;
			}
			if (password->Length < 4) {
				hasShortPassword = true;
			}
			if (!System::Text::RegularExpressions::Regex::IsMatch(login, "^[a-zA-Z]+$")) {
				hasInvalidLogin = true;
			}
			if (login->Length < 4) {
				hasShortLogin = true;
			}

			array<String^>^ fileList = Directory::GetFiles(".", "user*.txt");
			for each (String ^ file in fileList) {
				StreamReader^ reader = File::OpenText(file);
				String^ existingLogin = reader->ReadLine();
				reader->Close();
				if (existingLogin == login) {
					hasDuplicateLogin = true;
					textBox3->Clear();
					textBox4->Clear();
					break;
				}
			}

			label6->Visible = hasEmptyFields;
			label3->Visible = hasShortPassword;
			label4->Visible = hasInvalidLogin;
			label5->Visible = hasShortLogin;
			label7->Visible = hasDuplicateLogin;

			if (hasEmptyFields || hasShortPassword || hasInvalidLogin || hasShortLogin || hasDuplicateLogin) {
				return;
			}

			int maxFileNumber = 0;
			for each (String ^ file in fileList) {
				String^ fileName = Path::GetFileNameWithoutExtension(file);
				array<String^>^ parts = fileName->Split('_');
				if (parts->Length > 1) {
					String^ lastPart = parts[parts->Length - 1];
					int number;
					if (Int32::TryParse(lastPart, number)) {
						if (number > maxFileNumber) {
							maxFileNumber = number;
						}
					}
				}
			}

			int nextFileNumber = maxFileNumber + 1;
			String^ nextFileName = "user_" + nextFileNumber + ".txt";

			StreamWriter^ writer = File::AppendText(nextFileName);
			writer->WriteLine(login);
			writer->WriteLine(password);
			writer->Close();

			this->textBox3->Clear();
			this->textBox4->Clear();

			button1->Visible = true;
			textBox1->Visible = true;
			textBox2->Visible = true;
			button3->Visible = false;
			button2->Visible = false;
			button5->Visible = true;
			this->Text = "вход";

			label1->Visible = true;
			label2->Visible = true;
			textBox3->Visible = false;
			textBox4->Visible = false;
			button4->Visible = false;
			button5->Visible = false;
		}
		catch (IOException^ ex) {
			MessageBox::Show("Ошибка при записи в файл: " + ex->Message);
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
