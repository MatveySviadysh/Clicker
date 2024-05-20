#pragma once

namespace ClickClack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	private:
		System::String^ fileName;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:

		

		Form^ ff;
		MyForm4(Form^ f, System::String^ fileName)
		{
			ff = f;
			this->fileName = fileName;
			InitializeComponent();
		}
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button5;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(54, 93);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(259, 65);
			this->button5->TabIndex = 0;
			this->button5->Text = L"тропики";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm4::button5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(54, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(259, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"пустыня";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(54, 259);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(259, 65);
			this->button3->TabIndex = 2;
			this->button3->Text = L"луна";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(24, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"←";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox1->Location = System::Drawing::Point(1, 547);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(376, 50);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 593);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"смена фото";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ imagePath = "bg_image\\sand.jpg";

		if (System::IO::File::Exists(imagePath)) {
			try {
				ff->BackgroundImage = Image::FromFile(imagePath);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка загрузки изображения: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Файл изображения не найден!");
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

		ff->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ imagePath = "bg_image\\tropick.jpg";

		if (System::IO::File::Exists(imagePath)) {
			try {
				ff->BackgroundImage = Image::FromFile(imagePath);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка загрузки изображения: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Файл изображения не найден!");
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ imagePath = "bg_image\\moon.jpg";

		if (System::IO::File::Exists(imagePath)) {
			try {
				ff->BackgroundImage = Image::FromFile(imagePath);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка загрузки изображения: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Файл изображения не найден!");
		}
	}
};
}
