#pragma once

namespace project1 {

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
	private: System::Windows::Forms::Button^ close_btn_main;
	private: System::Windows::Forms::TextBox^ result_box;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ point_btn;

	private: System::Windows::Forms::Button^ res_btn;




	private: System::Windows::Forms::Button^ kb1;
	private: System::Windows::Forms::Button^ kb2;
	private: System::Windows::Forms::Button^ kb3;
	private: System::Windows::Forms::Button^ plus_btn;






	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ minus_btn;


	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ umno_btn;


	private: System::Windows::Forms::Button^ clear_btn;
	private: System::Windows::Forms::Button^ plus_min_btn;
	private: System::Windows::Forms::Button^ procent_btn;




	private: System::Windows::Forms::Button^ del_btn;

	private: char user_action = ' ';
	private: float first_num;
	private: float second;

	private: System::ComponentModel::IContainer^ components;























	protected:

	protected:



	protected:









	protected:






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->close_btn_main = (gcnew System::Windows::Forms::Button());
			this->result_box = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->point_btn = (gcnew System::Windows::Forms::Button());
			this->res_btn = (gcnew System::Windows::Forms::Button());
			this->kb1 = (gcnew System::Windows::Forms::Button());
			this->kb2 = (gcnew System::Windows::Forms::Button());
			this->kb3 = (gcnew System::Windows::Forms::Button());
			this->plus_btn = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->minus_btn = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->umno_btn = (gcnew System::Windows::Forms::Button());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->plus_min_btn = (gcnew System::Windows::Forms::Button());
			this->procent_btn = (gcnew System::Windows::Forms::Button());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// close_btn_main
			// 
			this->close_btn_main->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->close_btn_main->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->close_btn_main->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->close_btn_main->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->close_btn_main->Location = System::Drawing::Point(248, -1);
			this->close_btn_main->Name = L"close_btn_main";
			this->close_btn_main->Size = System::Drawing::Size(31, 25);
			this->close_btn_main->TabIndex = 0;
			this->close_btn_main->Text = L"X";
			this->close_btn_main->UseVisualStyleBackColor = false;
			this->close_btn_main->Click += gcnew System::EventHandler(this, &MyForm::close_btn_main_Click);
			// 
			// result_box
			// 
			this->result_box->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->result_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_box->ForeColor = System::Drawing::SystemColors::Menu;
			this->result_box->Location = System::Drawing::Point(11, 30);
			this->result_box->Multiline = true;
			this->result_box->Name = L"result_box";
			this->result_box->Size = System::Drawing::Size(254, 152);
			this->result_box->TabIndex = 1;
			this->result_box->Text = L"0";
			this->result_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(11, 433);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// point_btn
			// 
			this->point_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->point_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->point_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point_btn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->point_btn->Location = System::Drawing::Point(141, 433);
			this->point_btn->Name = L"point_btn";
			this->point_btn->Size = System::Drawing::Size(59, 55);
			this->point_btn->TabIndex = 3;
			this->point_btn->Text = L",";
			this->point_btn->UseVisualStyleBackColor = false;
			this->point_btn->Click += gcnew System::EventHandler(this, &MyForm::point_btn_Click);
			// 
			// res_btn
			// 
			this->res_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->res_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->res_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res_btn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->res_btn->Location = System::Drawing::Point(206, 433);
			this->res_btn->Name = L"res_btn";
			this->res_btn->Size = System::Drawing::Size(59, 55);
			this->res_btn->TabIndex = 4;
			this->res_btn->Text = L"=";
			this->res_btn->UseVisualStyleBackColor = false;
			this->res_btn->Click += gcnew System::EventHandler(this, &MyForm::res_btn_Click);
			// 
			// kb1
			// 
			this->kb1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->kb1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->kb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kb1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->kb1->Location = System::Drawing::Point(11, 372);
			this->kb1->Name = L"kb1";
			this->kb1->Size = System::Drawing::Size(59, 55);
			this->kb1->TabIndex = 2;
			this->kb1->Text = L"1";
			this->kb1->UseVisualStyleBackColor = false;
			this->kb1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// kb2
			// 
			this->kb2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->kb2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->kb2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kb2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->kb2->Location = System::Drawing::Point(76, 372);
			this->kb2->Name = L"kb2";
			this->kb2->Size = System::Drawing::Size(59, 55);
			this->kb2->TabIndex = 2;
			this->kb2->Text = L"2";
			this->kb2->UseVisualStyleBackColor = false;
			this->kb2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// kb3
			// 
			this->kb3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->kb3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->kb3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kb3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->kb3->Location = System::Drawing::Point(141, 372);
			this->kb3->Name = L"kb3";
			this->kb3->Size = System::Drawing::Size(59, 55);
			this->kb3->TabIndex = 3;
			this->kb3->Text = L"3";
			this->kb3->UseVisualStyleBackColor = false;
			this->kb3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// plus_btn
			// 
			this->plus_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->plus_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus_btn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->plus_btn->Location = System::Drawing::Point(206, 372);
			this->plus_btn->Name = L"plus_btn";
			this->plus_btn->Size = System::Drawing::Size(59, 55);
			this->plus_btn->TabIndex = 4;
			this->plus_btn->Text = L"+";
			this->plus_btn->UseVisualStyleBackColor = false;
			this->plus_btn->Click += gcnew System::EventHandler(this, &MyForm::plus_btn_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(11, 311);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(59, 55);
			this->button9->TabIndex = 2;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(76, 311);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(59, 55);
			this->button10->TabIndex = 2;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(141, 311);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(59, 55);
			this->button11->TabIndex = 3;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// minus_btn
			// 
			this->minus_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->minus_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus_btn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->minus_btn->Location = System::Drawing::Point(206, 311);
			this->minus_btn->Name = L"minus_btn";
			this->minus_btn->Size = System::Drawing::Size(59, 55);
			this->minus_btn->TabIndex = 4;
			this->minus_btn->Text = L"-";
			this->minus_btn->UseVisualStyleBackColor = false;
			this->minus_btn->Click += gcnew System::EventHandler(this, &MyForm::minus_btn_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(11, 250);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(59, 55);
			this->button13->TabIndex = 2;
			this->button13->Text = L"7";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Location = System::Drawing::Point(76, 250);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(59, 55);
			this->button14->TabIndex = 2;
			this->button14->Text = L"8";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Location = System::Drawing::Point(141, 250);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(59, 55);
			this->button15->TabIndex = 3;
			this->button15->Text = L"9";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_clk);
			// 
			// umno_btn
			// 
			this->umno_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->umno_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->umno_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->umno_btn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->umno_btn->Location = System::Drawing::Point(206, 250);
			this->umno_btn->Name = L"umno_btn";
			this->umno_btn->Size = System::Drawing::Size(59, 55);
			this->umno_btn->TabIndex = 4;
			this->umno_btn->Text = L"*";
			this->umno_btn->UseVisualStyleBackColor = false;
			this->umno_btn->Click += gcnew System::EventHandler(this, &MyForm::umno_btn_Click);
			// 
			// clear_btn
			// 
			this->clear_btn->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->clear_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear_btn->Location = System::Drawing::Point(12, 200);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(58, 44);
			this->clear_btn->TabIndex = 5;
			this->clear_btn->Text = L"AC";
			this->clear_btn->UseVisualStyleBackColor = false;
			this->clear_btn->Click += gcnew System::EventHandler(this, &MyForm::clear_btn_Click);
			// 
			// plus_min_btn
			// 
			this->plus_min_btn->AllowDrop = true;
			this->plus_min_btn->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->plus_min_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus_min_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus_min_btn->Location = System::Drawing::Point(76, 200);
			this->plus_min_btn->Name = L"plus_min_btn";
			this->plus_min_btn->Size = System::Drawing::Size(58, 44);
			this->plus_min_btn->TabIndex = 5;
			this->plus_min_btn->Text = L"+|-";
			this->plus_min_btn->UseVisualStyleBackColor = false;
			this->plus_min_btn->Click += gcnew System::EventHandler(this, &MyForm::plus_min_btn_Click);
			// 
			// procent_btn
			// 
			this->procent_btn->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->procent_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->procent_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->procent_btn->Location = System::Drawing::Point(141, 200);
			this->procent_btn->Name = L"procent_btn";
			this->procent_btn->Size = System::Drawing::Size(58, 44);
			this->procent_btn->TabIndex = 5;
			this->procent_btn->Text = L"%";
			this->procent_btn->UseVisualStyleBackColor = false;
			this->procent_btn->Click += gcnew System::EventHandler(this, &MyForm::procent_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->del_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->del_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del_btn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->del_btn->Location = System::Drawing::Point(205, 200);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(60, 44);
			this->del_btn->TabIndex = 5;
			this->del_btn->Text = L"/";
			this->del_btn->UseVisualStyleBackColor = false;
			this->del_btn->Click += gcnew System::EventHandler(this, &MyForm::del_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(277, 500);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->procent_btn);
			this->Controls->Add(this->plus_min_btn);
			this->Controls->Add(this->clear_btn);
			this->Controls->Add(this->umno_btn);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->minus_btn);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->plus_btn);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->kb3);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->res_btn);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->kb2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->point_btn);
			this->Controls->Add(this->kb1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->close_btn_main);
			this->Controls->Add(this->result_box);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void close_btn_main_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	};
	private: System::Void BtnNumber_clk(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender); // Сохраняем в button значение кнопки

		if (this->result_box->Text == "0") {
			this->result_box->Text = button->Text;
		}
		else {
			this->result_box->Text = this->result_box->Text + button->Text;
		}
	};
	private: System::Void clear_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_box->Text = "0";
	};
	private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	};
	private: System::Void umno_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void minus_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void plus_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void procent_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void point_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result_box->Text;
		if (!text->Contains(",")) { // Contains проверяет наличие точки в числе (в пайтонe count())
			this->result_box->Text += ",";
		}
	}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->result_box->Text); // То же самое что System::Convert::ToInt32(...), только во-первых конвертация во float
		this->user_action = action;
		this->result_box->Text = "0";
	}
	private: System::Void res_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		float res;

		if (user_action == ' ') {
			return;
		}

		second = System::Convert::ToDouble(this->result_box->Text);
		switch (this->user_action) {
		case '+':
			res = this->first_num + second;
			break;
		case '-':
			res = this->first_num - second;
			break;
		case '*':
			res = this->first_num * second;
			break;
		case '/':
			if (second == 0) {
				res = 0;
				this->result_box->ForeColor = Color::Red;
				MessageBox::Show(this, "Ошибка вычисления.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->result_box->ForeColor = Color::White;
			}
			else
				res = first_num / second;
		case '%':
			res = this->first_num * second / 100;
		}
		this->result_box->Text = System::Convert::ToString(res);

	}
	private: System::Void plus_min_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->result_box->Text);
		num *= -1;
		this->result_box->Text = System::Convert::ToString(num);
	}
	};
}