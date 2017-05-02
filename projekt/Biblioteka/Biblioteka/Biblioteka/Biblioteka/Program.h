#pragma once
#include <iostream>

namespace Biblioteka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		int id_uzytkownika;
		int id_wybranego_uzytkownika;
		bool czyAdmin;
		bool czyBlokada;

		
	private: System::Windows::Forms::GroupBox^  gbLSignin;
	private: System::Windows::Forms::TextBox^  tbSLogin;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::TextBox^  tbSEmail;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tbSCity;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  tbSSurname;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  tbSName;
	private: System::Windows::Forms::Button^  bSChange1;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  tbSNew2;

	private: System::Windows::Forms::TextBox^  tbSNew1;

	private: System::Windows::Forms::TextBox^  tbSOld;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  bSChange2;
	private: System::Windows::Forms::CheckBox^  cbSPersonal;

	private: System::Windows::Forms::TabPage^  tpAdmin;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  bAPNormalUser;
	private: System::Windows::Forms::Button^  bAPAdmin;
	private: System::Windows::Forms::TextBox^  tbAPSearch;
	private: System::Windows::Forms::Button^  bAPUnlock;
	private: System::Windows::Forms::Button^  bAPLock;
	private: System::Windows::Forms::Button^  bAPSearch;
	private: System::Windows::Forms::DataGridView^  dgAPUsers;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  tbSStreet;

	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::MaskedTextBox^  tbSPNumber;

	private: System::Windows::Forms::TextBox^  tbSANumber;
	private: System::Windows::Forms::TextBox^  tbSBNumber;
	private: System::Windows::Forms::TextBox^  tbSAType;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::GroupBox^  gbAPPersonal;

	private: System::Windows::Forms::MaskedTextBox^  tbAPPNumber;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  tbAPANumber;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  tbAPBNumber;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  tbAPStreet;

	private: System::Windows::Forms::TextBox^  tbAPLogin;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  tbAPEmail;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  tbAPCity;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  tbAPSurname;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  tbAPName;
	private: System::Windows::Forms::Button^  bAPChange;


	private: System::Windows::Forms::Label^  lAPstatus;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  lAPType;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  tbAPNewP;
	private: System::Windows::Forms::Button^  bAPChangeP;
	private: System::Windows::Forms::CheckBox^  cbNewPassword;
	private: System::Windows::Forms::TextBox^  tbBSearch;
	private: System::Windows::Forms::Button^  bBSearch;
	private: System::Windows::Forms::DataGridView^  dgBBooks;
	private: System::Windows::Forms::Button^  bBRent;
	private: System::Windows::Forms::Button^  bRezervation;

	public:
		String^ config = L"datasource=127.0.0.3; port=3306; username=root; password=root123; database=bibliotekaProjekt";
		Program(int uzytkownik, bool admin, bool blokada)
		{
			InitializeComponent();
			id_uzytkownika = uzytkownik;
			czyAdmin = admin;
			czyBlokada = blokada;

			//czyAdmin = admin;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->bBRent = (gcnew System::Windows::Forms::Button());
			this->bRezervation = (gcnew System::Windows::Forms::Button());
			this->tbBSearch = (gcnew System::Windows::Forms::TextBox());
			this->bBSearch = (gcnew System::Windows::Forms::Button());
			this->dgBBooks = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->gbLSignin = (gcnew System::Windows::Forms::GroupBox());
			this->tbSAType = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbSPNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbSANumber = (gcnew System::Windows::Forms::TextBox());
			this->tbSCity = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cbSPersonal = (gcnew System::Windows::Forms::CheckBox());
			this->tbSStreet = (gcnew System::Windows::Forms::TextBox());
			this->tbSLogin = (gcnew System::Windows::Forms::TextBox());
			this->tbSBNumber = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbSEmail = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbSSurname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbSName = (gcnew System::Windows::Forms::TextBox());
			this->bSChange1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bSChange2 = (gcnew System::Windows::Forms::Button());
			this->tbSNew2 = (gcnew System::Windows::Forms::TextBox());
			this->tbSNew1 = (gcnew System::Windows::Forms::TextBox());
			this->tbSOld = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tpAdmin = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->gbAPPersonal = (gcnew System::Windows::Forms::GroupBox());
			this->bAPChangeP = (gcnew System::Windows::Forms::Button());
			this->cbNewPassword = (gcnew System::Windows::Forms::CheckBox());
			this->tbAPNewP = (gcnew System::Windows::Forms::TextBox());
			this->lAPType = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->lAPstatus = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tbAPPNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tbAPANumber = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tbAPBNumber = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tbAPEmail = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tbAPSurname = (gcnew System::Windows::Forms::TextBox());
			this->tbAPCity = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tbAPStreet = (gcnew System::Windows::Forms::TextBox());
			this->tbAPLogin = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tbAPName = (gcnew System::Windows::Forms::TextBox());
			this->bAPChange = (gcnew System::Windows::Forms::Button());
			this->bAPNormalUser = (gcnew System::Windows::Forms::Button());
			this->bAPAdmin = (gcnew System::Windows::Forms::Button());
			this->tbAPSearch = (gcnew System::Windows::Forms::TextBox());
			this->bAPUnlock = (gcnew System::Windows::Forms::Button());
			this->bAPLock = (gcnew System::Windows::Forms::Button());
			this->bAPSearch = (gcnew System::Windows::Forms::Button());
			this->dgAPUsers = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgBBooks))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->gbLSignin->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tpAdmin->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->gbAPPersonal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgAPUsers))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tpAdmin);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(985, 531);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->bBRent);
			this->tabPage1->Controls->Add(this->bRezervation);
			this->tabPage1->Controls->Add(this->tbBSearch);
			this->tabPage1->Controls->Add(this->bBSearch);
			this->tabPage1->Controls->Add(this->dgBBooks);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(977, 505);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Books";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// bBRent
			// 
			this->bBRent->Location = System::Drawing::Point(810, 46);
			this->bBRent->Name = L"bBRent";
			this->bBRent->Size = System::Drawing::Size(75, 23);
			this->bBRent->TabIndex = 12;
			this->bBRent->Text = L"Rent";
			this->bBRent->UseVisualStyleBackColor = true;
			// 
			// bRezervation
			// 
			this->bRezervation->Location = System::Drawing::Point(810, 75);
			this->bRezervation->Name = L"bRezervation";
			this->bRezervation->Size = System::Drawing::Size(75, 23);
			this->bRezervation->TabIndex = 11;
			this->bRezervation->Text = L"Book";
			this->bRezervation->UseVisualStyleBackColor = true;
			// 
			// tbBSearch
			// 
			this->tbBSearch->Location = System::Drawing::Point(9, 41);
			this->tbBSearch->Name = L"tbBSearch";
			this->tbBSearch->Size = System::Drawing::Size(251, 20);
			this->tbBSearch->TabIndex = 8;
			this->tbBSearch->Text = L"Tytu³, autor, ISBN...";
			// 
			// bBSearch
			// 
			this->bBSearch->Location = System::Drawing::Point(266, 39);
			this->bBSearch->Name = L"bBSearch";
			this->bBSearch->Size = System::Drawing::Size(75, 23);
			this->bBSearch->TabIndex = 9;
			this->bBSearch->Text = L"Search";
			this->bBSearch->UseVisualStyleBackColor = true;
			// 
			// dgBBooks
			// 
			this->dgBBooks->AllowUserToAddRows = false;
			this->dgBBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgBBooks->Location = System::Drawing::Point(9, 253);
			this->dgBBooks->Name = L"dgBBooks";
			this->dgBBooks->ReadOnly = true;
			this->dgBBooks->Size = System::Drawing::Size(959, 212);
			this->dgBBooks->TabIndex = 10;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->gbLSignin);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(977, 505);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Settings";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// gbLSignin
			// 
			this->gbLSignin->Controls->Add(this->tbSAType);
			this->gbLSignin->Controls->Add(this->label13);
			this->gbLSignin->Controls->Add(this->label7);
			this->gbLSignin->Controls->Add(this->tbSPNumber);
			this->gbLSignin->Controls->Add(this->tbSANumber);
			this->gbLSignin->Controls->Add(this->tbSCity);
			this->gbLSignin->Controls->Add(this->label12);
			this->gbLSignin->Controls->Add(this->label11);
			this->gbLSignin->Controls->Add(this->cbSPersonal);
			this->gbLSignin->Controls->Add(this->tbSStreet);
			this->gbLSignin->Controls->Add(this->tbSLogin);
			this->gbLSignin->Controls->Add(this->tbSBNumber);
			this->gbLSignin->Controls->Add(this->label4);
			this->gbLSignin->Controls->Add(this->label9);
			this->gbLSignin->Controls->Add(this->tbSEmail);
			this->gbLSignin->Controls->Add(this->label10);
			this->gbLSignin->Controls->Add(this->label8);
			this->gbLSignin->Controls->Add(this->tbSSurname);
			this->gbLSignin->Controls->Add(this->label5);
			this->gbLSignin->Controls->Add(this->label6);
			this->gbLSignin->Controls->Add(this->tbSName);
			this->gbLSignin->Controls->Add(this->bSChange1);
			this->gbLSignin->Location = System::Drawing::Point(299, 28);
			this->gbLSignin->Name = L"gbLSignin";
			this->gbLSignin->Size = System::Drawing::Size(248, 390);
			this->gbLSignin->TabIndex = 2;
			this->gbLSignin->TabStop = false;
			this->gbLSignin->Text = L"Personal";
			// 
			// tbSAType
			// 
			this->tbSAType->Enabled = false;
			this->tbSAType->Location = System::Drawing::Point(124, 37);
			this->tbSAType->Name = L"tbSAType";
			this->tbSAType->Size = System::Drawing::Size(100, 20);
			this->tbSAType->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(24, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Account type:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(24, 208);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"City:";
			// 
			// tbSPNumber
			// 
			this->tbSPNumber->Enabled = false;
			this->tbSPNumber->Location = System::Drawing::Point(124, 175);
			this->tbSPNumber->Mask = L"000-000-000";
			this->tbSPNumber->Name = L"tbSPNumber";
			this->tbSPNumber->Size = System::Drawing::Size(100, 20);
			this->tbSPNumber->TabIndex = 3;
			// 
			// tbSANumber
			// 
			this->tbSANumber->Enabled = false;
			this->tbSANumber->Location = System::Drawing::Point(124, 282);
			this->tbSANumber->Name = L"tbSANumber";
			this->tbSANumber->Size = System::Drawing::Size(100, 20);
			this->tbSANumber->TabIndex = 23;
			this->tbSANumber->TextChanged += gcnew System::EventHandler(this, &Program::tbSANumber_TextChanged);
			// 
			// tbSCity
			// 
			this->tbSCity->Enabled = false;
			this->tbSCity->Location = System::Drawing::Point(124, 204);
			this->tbSCity->Name = L"tbSCity";
			this->tbSCity->Size = System::Drawing::Size(100, 20);
			this->tbSCity->TabIndex = 3;
			this->tbSCity->TextChanged += gcnew System::EventHandler(this, &Program::tbSCity_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(24, 178);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(79, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Phone number:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(24, 286);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Apartment number:";
			// 
			// cbSPersonal
			// 
			this->cbSPersonal->AutoSize = true;
			this->cbSPersonal->Location = System::Drawing::Point(165, 321);
			this->cbSPersonal->Name = L"cbSPersonal";
			this->cbSPersonal->Size = System::Drawing::Size(59, 17);
			this->cbSPersonal->TabIndex = 18;
			this->cbSPersonal->Text = L"Enable";
			this->cbSPersonal->UseVisualStyleBackColor = true;
			this->cbSPersonal->CheckedChanged += gcnew System::EventHandler(this, &Program::cbSName_CheckedChanged);
			// 
			// tbSStreet
			// 
			this->tbSStreet->Enabled = false;
			this->tbSStreet->Location = System::Drawing::Point(124, 230);
			this->tbSStreet->Name = L"tbSStreet";
			this->tbSStreet->Size = System::Drawing::Size(100, 20);
			this->tbSStreet->TabIndex = 19;
			this->tbSStreet->TextChanged += gcnew System::EventHandler(this, &Program::tbSStreet_TextChanged);
			// 
			// tbSLogin
			// 
			this->tbSLogin->Enabled = false;
			this->tbSLogin->Location = System::Drawing::Point(124, 67);
			this->tbSLogin->Name = L"tbSLogin";
			this->tbSLogin->Size = System::Drawing::Size(100, 20);
			this->tbSLogin->TabIndex = 4;
			// 
			// tbSBNumber
			// 
			this->tbSBNumber->Enabled = false;
			this->tbSBNumber->Location = System::Drawing::Point(124, 256);
			this->tbSBNumber->Name = L"tbSBNumber";
			this->tbSBNumber->Size = System::Drawing::Size(100, 20);
			this->tbSBNumber->TabIndex = 21;
			this->tbSBNumber->TextChanged += gcnew System::EventHandler(this, &Program::tbSBNumber_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Login:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(24, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Street:";
			// 
			// tbSEmail
			// 
			this->tbSEmail->Enabled = false;
			this->tbSEmail->Location = System::Drawing::Point(124, 149);
			this->tbSEmail->Name = L"tbSEmail";
			this->tbSEmail->Size = System::Drawing::Size(100, 20);
			this->tbSEmail->TabIndex = 5;
			this->tbSEmail->TextChanged += gcnew System::EventHandler(this, &Program::tbSEmail_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(24, 260);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Building number:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(24, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Email:";
			// 
			// tbSSurname
			// 
			this->tbSSurname->Enabled = false;
			this->tbSSurname->Location = System::Drawing::Point(124, 121);
			this->tbSSurname->Name = L"tbSSurname";
			this->tbSSurname->Size = System::Drawing::Size(100, 20);
			this->tbSSurname->TabIndex = 2;
			this->tbSSurname->TextChanged += gcnew System::EventHandler(this, &Program::tbSSurname_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Surname:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Name:";
			// 
			// tbSName
			// 
			this->tbSName->Enabled = false;
			this->tbSName->Location = System::Drawing::Point(124, 93);
			this->tbSName->Name = L"tbSName";
			this->tbSName->Size = System::Drawing::Size(100, 20);
			this->tbSName->TabIndex = 1;
			this->tbSName->TextChanged += gcnew System::EventHandler(this, &Program::tbSName_TextChanged);
			// 
			// bSChange1
			// 
			this->bSChange1->Enabled = false;
			this->bSChange1->Location = System::Drawing::Point(27, 344);
			this->bSChange1->Name = L"bSChange1";
			this->bSChange1->Size = System::Drawing::Size(197, 23);
			this->bSChange1->TabIndex = 5;
			this->bSChange1->Text = L"Change";
			this->bSChange1->UseVisualStyleBackColor = true;
			this->bSChange1->Click += gcnew System::EventHandler(this, &Program::bSChange1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->bSChange2);
			this->groupBox1->Controls->Add(this->tbSNew2);
			this->groupBox1->Controls->Add(this->tbSNew1);
			this->groupBox1->Controls->Add(this->tbSOld);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(24, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(244, 262);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Password";
			// 
			// bSChange2
			// 
			this->bSChange2->Enabled = false;
			this->bSChange2->Location = System::Drawing::Point(18, 142);
			this->bSChange2->Name = L"bSChange2";
			this->bSChange2->Size = System::Drawing::Size(196, 23);
			this->bSChange2->TabIndex = 7;
			this->bSChange2->Text = L"Change";
			this->bSChange2->UseVisualStyleBackColor = true;
			this->bSChange2->Click += gcnew System::EventHandler(this, &Program::bSChange2_Click);
			// 
			// tbSNew2
			// 
			this->tbSNew2->Location = System::Drawing::Point(114, 99);
			this->tbSNew2->Name = L"tbSNew2";
			this->tbSNew2->PasswordChar = '*';
			this->tbSNew2->Size = System::Drawing::Size(100, 20);
			this->tbSNew2->TabIndex = 3;
			this->tbSNew2->TextChanged += gcnew System::EventHandler(this, &Program::tbSNew2_TextChanged);
			// 
			// tbSNew1
			// 
			this->tbSNew1->Location = System::Drawing::Point(114, 70);
			this->tbSNew1->Name = L"tbSNew1";
			this->tbSNew1->PasswordChar = '*';
			this->tbSNew1->Size = System::Drawing::Size(100, 20);
			this->tbSNew1->TabIndex = 2;
			this->tbSNew1->TextChanged += gcnew System::EventHandler(this, &Program::tbSNew1_TextChanged);
			// 
			// tbSOld
			// 
			this->tbSOld->Location = System::Drawing::Point(114, 40);
			this->tbSOld->Name = L"tbSOld";
			this->tbSOld->PasswordChar = '*';
			this->tbSOld->Size = System::Drawing::Size(100, 20);
			this->tbSOld->TabIndex = 1;
			this->tbSOld->TextChanged += gcnew System::EventHandler(this, &Program::tbSOld_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Repeat password:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"New password:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Old password:";
			// 
			// tpAdmin
			// 
			this->tpAdmin->Controls->Add(this->groupBox2);
			this->tpAdmin->Location = System::Drawing::Point(4, 22);
			this->tpAdmin->Name = L"tpAdmin";
			this->tpAdmin->Size = System::Drawing::Size(977, 505);
			this->tpAdmin->TabIndex = 2;
			this->tpAdmin->Text = L"Admin Panel";
			this->tpAdmin->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->gbAPPersonal);
			this->groupBox2->Controls->Add(this->bAPNormalUser);
			this->groupBox2->Controls->Add(this->bAPAdmin);
			this->groupBox2->Controls->Add(this->tbAPSearch);
			this->groupBox2->Controls->Add(this->bAPUnlock);
			this->groupBox2->Controls->Add(this->bAPLock);
			this->groupBox2->Controls->Add(this->bAPSearch);
			this->groupBox2->Controls->Add(this->dgAPUsers);
			this->groupBox2->Location = System::Drawing::Point(3, 17);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(971, 485);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Users";
			// 
			// gbAPPersonal
			// 
			this->gbAPPersonal->Controls->Add(this->bAPChangeP);
			this->gbAPPersonal->Controls->Add(this->cbNewPassword);
			this->gbAPPersonal->Controls->Add(this->tbAPNewP);
			this->gbAPPersonal->Controls->Add(this->lAPType);
			this->gbAPPersonal->Controls->Add(this->label26);
			this->gbAPPersonal->Controls->Add(this->lAPstatus);
			this->gbAPPersonal->Controls->Add(this->label24);
			this->gbAPPersonal->Controls->Add(this->tbAPPNumber);
			this->gbAPPersonal->Controls->Add(this->label15);
			this->gbAPPersonal->Controls->Add(this->tbAPANumber);
			this->gbAPPersonal->Controls->Add(this->label16);
			this->gbAPPersonal->Controls->Add(this->tbAPBNumber);
			this->gbAPPersonal->Controls->Add(this->label17);
			this->gbAPPersonal->Controls->Add(this->tbAPEmail);
			this->gbAPPersonal->Controls->Add(this->label20);
			this->gbAPPersonal->Controls->Add(this->label21);
			this->gbAPPersonal->Controls->Add(this->tbAPSurname);
			this->gbAPPersonal->Controls->Add(this->tbAPCity);
			this->gbAPPersonal->Controls->Add(this->label22);
			this->gbAPPersonal->Controls->Add(this->label18);
			this->gbAPPersonal->Controls->Add(this->tbAPStreet);
			this->gbAPPersonal->Controls->Add(this->tbAPLogin);
			this->gbAPPersonal->Controls->Add(this->label19);
			this->gbAPPersonal->Controls->Add(this->label23);
			this->gbAPPersonal->Controls->Add(this->tbAPName);
			this->gbAPPersonal->Controls->Add(this->bAPChange);
			this->gbAPPersonal->Location = System::Drawing::Point(344, 19);
			this->gbAPPersonal->Name = L"gbAPPersonal";
			this->gbAPPersonal->Size = System::Drawing::Size(621, 242);
			this->gbAPPersonal->TabIndex = 10;
			this->gbAPPersonal->TabStop = false;
			this->gbAPPersonal->Text = L"Personal";
			this->gbAPPersonal->Enter += gcnew System::EventHandler(this, &Program::gbAPPersonal_Enter);
			// 
			// bAPChangeP
			// 
			this->bAPChangeP->Enabled = false;
			this->bAPChangeP->Location = System::Drawing::Point(240, 192);
			this->bAPChangeP->Name = L"bAPChangeP";
			this->bAPChangeP->Size = System::Drawing::Size(197, 23);
			this->bAPChangeP->TabIndex = 22;
			this->bAPChangeP->Text = L"Change password";
			this->bAPChangeP->UseVisualStyleBackColor = true;
			this->bAPChangeP->Click += gcnew System::EventHandler(this, &Program::bAPChangeP_Click);
			// 
			// cbNewPassword
			// 
			this->cbNewPassword->AutoSize = true;
			this->cbNewPassword->Location = System::Drawing::Point(19, 196);
			this->cbNewPassword->Name = L"cbNewPassword";
			this->cbNewPassword->Size = System::Drawing::Size(99, 17);
			this->cbNewPassword->TabIndex = 20;
			this->cbNewPassword->Text = L"New password:";
			this->cbNewPassword->UseVisualStyleBackColor = true;
			this->cbNewPassword->CheckedChanged += gcnew System::EventHandler(this, &Program::cbNewPassword_CheckedChanged);
			// 
			// tbAPNewP
			// 
			this->tbAPNewP->Enabled = false;
			this->tbAPNewP->Location = System::Drawing::Point(124, 193);
			this->tbAPNewP->Name = L"tbAPNewP";
			this->tbAPNewP->Size = System::Drawing::Size(100, 20);
			this->tbAPNewP->TabIndex = 21;
			this->tbAPNewP->TextChanged += gcnew System::EventHandler(this, &Program::tbAPNewP_TextChanged);
			// 
			// lAPType
			// 
			this->lAPType->AutoSize = true;
			this->lAPType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lAPType->Location = System::Drawing::Point(479, 62);
			this->lAPType->Name = L"lAPType";
			this->lAPType->Size = System::Drawing::Size(0, 25);
			this->lAPType->TabIndex = 31;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(481, 39);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(73, 13);
			this->label26->TabIndex = 30;
			this->label26->Text = L"Account type:";
			// 
			// lAPstatus
			// 
			this->lAPstatus->AutoSize = true;
			this->lAPstatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lAPstatus->Location = System::Drawing::Point(479, 145);
			this->lAPstatus->Name = L"lAPstatus";
			this->lAPstatus->Size = System::Drawing::Size(0, 25);
			this->lAPstatus->TabIndex = 29;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(481, 123);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(81, 13);
			this->label24->TabIndex = 28;
			this->label24->Text = L"Account status:";
			// 
			// tbAPPNumber
			// 
			this->tbAPPNumber->Location = System::Drawing::Point(337, 118);
			this->tbAPPNumber->Mask = L"000-000-000";
			this->tbAPPNumber->Name = L"tbAPPNumber";
			this->tbAPPNumber->Size = System::Drawing::Size(100, 20);
			this->tbAPPNumber->TabIndex = 18;
			this->tbAPPNumber->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Program::tbAPPNumber_MaskInputRejected);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(237, 126);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(79, 13);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Phone number:";
			// 
			// tbAPANumber
			// 
			this->tbAPANumber->Location = System::Drawing::Point(337, 92);
			this->tbAPANumber->Name = L"tbAPANumber";
			this->tbAPANumber->Size = System::Drawing::Size(100, 20);
			this->tbAPANumber->TabIndex = 17;
			this->tbAPANumber->TextChanged += gcnew System::EventHandler(this, &Program::tbAPANumber_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(237, 96);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Apartment number:";
			// 
			// tbAPBNumber
			// 
			this->tbAPBNumber->Location = System::Drawing::Point(337, 66);
			this->tbAPBNumber->Name = L"tbAPBNumber";
			this->tbAPBNumber->Size = System::Drawing::Size(100, 20);
			this->tbAPBNumber->TabIndex = 16;
			this->tbAPBNumber->TextChanged += gcnew System::EventHandler(this, &Program::tbAPBNumber_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(237, 70);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(85, 13);
			this->label17->TabIndex = 22;
			this->label17->Text = L"Building number:";
			// 
			// tbAPEmail
			// 
			this->tbAPEmail->Location = System::Drawing::Point(124, 120);
			this->tbAPEmail->Name = L"tbAPEmail";
			this->tbAPEmail->Size = System::Drawing::Size(100, 20);
			this->tbAPEmail->TabIndex = 13;
			this->tbAPEmail->TextChanged += gcnew System::EventHandler(this, &Program::tbAPEmail_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(24, 124);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(35, 13);
			this->label20->TabIndex = 12;
			this->label20->Text = L"Email:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(24, 154);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(27, 13);
			this->label21->TabIndex = 10;
			this->label21->Text = L"City:";
			// 
			// tbAPSurname
			// 
			this->tbAPSurname->Location = System::Drawing::Point(124, 94);
			this->tbAPSurname->Name = L"tbAPSurname";
			this->tbAPSurname->Size = System::Drawing::Size(100, 20);
			this->tbAPSurname->TabIndex = 12;
			this->tbAPSurname->TextChanged += gcnew System::EventHandler(this, &Program::tbAPSurname_TextChanged);
			// 
			// tbAPCity
			// 
			this->tbAPCity->Location = System::Drawing::Point(124, 150);
			this->tbAPCity->Name = L"tbAPCity";
			this->tbAPCity->Size = System::Drawing::Size(100, 20);
			this->tbAPCity->TabIndex = 14;
			this->tbAPCity->TextChanged += gcnew System::EventHandler(this, &Program::tbAPCity_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(24, 99);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(52, 13);
			this->label22->TabIndex = 6;
			this->label22->Text = L"Surname:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(237, 43);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(38, 13);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Street:";
			// 
			// tbAPStreet
			// 
			this->tbAPStreet->Location = System::Drawing::Point(337, 40);
			this->tbAPStreet->Name = L"tbAPStreet";
			this->tbAPStreet->Size = System::Drawing::Size(100, 20);
			this->tbAPStreet->TabIndex = 15;
			this->tbAPStreet->TextChanged += gcnew System::EventHandler(this, &Program::tbAPStreet_TextChanged);
			// 
			// tbAPLogin
			// 
			this->tbAPLogin->Location = System::Drawing::Point(124, 40);
			this->tbAPLogin->Name = L"tbAPLogin";
			this->tbAPLogin->Size = System::Drawing::Size(100, 20);
			this->tbAPLogin->TabIndex = 10;
			this->tbAPLogin->TextChanged += gcnew System::EventHandler(this, &Program::tbAPLogin_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(24, 44);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(36, 13);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Login:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(24, 71);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(38, 13);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Name:";
			// 
			// tbAPName
			// 
			this->tbAPName->Location = System::Drawing::Point(124, 68);
			this->tbAPName->Name = L"tbAPName";
			this->tbAPName->Size = System::Drawing::Size(100, 20);
			this->tbAPName->TabIndex = 11;
			this->tbAPName->TextChanged += gcnew System::EventHandler(this, &Program::tbAPName_TextChanged);
			// 
			// bAPChange
			// 
			this->bAPChange->Enabled = false;
			this->bAPChange->Location = System::Drawing::Point(240, 154);
			this->bAPChange->Name = L"bAPChange";
			this->bAPChange->Size = System::Drawing::Size(197, 23);
			this->bAPChange->TabIndex = 19;
			this->bAPChange->Text = L"Change personal";
			this->bAPChange->UseVisualStyleBackColor = true;
			this->bAPChange->Click += gcnew System::EventHandler(this, &Program::bAPChange_Click);
			// 
			// bAPNormalUser
			// 
			this->bAPNormalUser->Location = System::Drawing::Point(82, 132);
			this->bAPNormalUser->Name = L"bAPNormalUser";
			this->bAPNormalUser->Size = System::Drawing::Size(75, 23);
			this->bAPNormalUser->TabIndex = 6;
			this->bAPNormalUser->Text = L"Normal user";
			this->bAPNormalUser->UseVisualStyleBackColor = true;
			this->bAPNormalUser->Click += gcnew System::EventHandler(this, &Program::bAPNormalUser_Click);
			// 
			// bAPAdmin
			// 
			this->bAPAdmin->Location = System::Drawing::Point(6, 132);
			this->bAPAdmin->Name = L"bAPAdmin";
			this->bAPAdmin->Size = System::Drawing::Size(75, 23);
			this->bAPAdmin->TabIndex = 5;
			this->bAPAdmin->Text = L"Admin";
			this->bAPAdmin->UseVisualStyleBackColor = true;
			this->bAPAdmin->Click += gcnew System::EventHandler(this, &Program::bAPAdmin_Click);
			// 
			// tbAPSearch
			// 
			this->tbAPSearch->Location = System::Drawing::Point(6, 55);
			this->tbAPSearch->Name = L"tbAPSearch";
			this->tbAPSearch->Size = System::Drawing::Size(251, 20);
			this->tbAPSearch->TabIndex = 1;
			// 
			// bAPUnlock
			// 
			this->bAPUnlock->Location = System::Drawing::Point(82, 103);
			this->bAPUnlock->Name = L"bAPUnlock";
			this->bAPUnlock->Size = System::Drawing::Size(75, 23);
			this->bAPUnlock->TabIndex = 4;
			this->bAPUnlock->Text = L"Unlock";
			this->bAPUnlock->UseVisualStyleBackColor = true;
			this->bAPUnlock->Click += gcnew System::EventHandler(this, &Program::bAPUnlock_Click);
			// 
			// bAPLock
			// 
			this->bAPLock->Location = System::Drawing::Point(6, 103);
			this->bAPLock->Name = L"bAPLock";
			this->bAPLock->Size = System::Drawing::Size(75, 23);
			this->bAPLock->TabIndex = 3;
			this->bAPLock->Text = L"Lock";
			this->bAPLock->UseVisualStyleBackColor = true;
			this->bAPLock->Click += gcnew System::EventHandler(this, &Program::bAPLock_Click);
			// 
			// bAPSearch
			// 
			this->bAPSearch->Location = System::Drawing::Point(263, 53);
			this->bAPSearch->Name = L"bAPSearch";
			this->bAPSearch->Size = System::Drawing::Size(75, 23);
			this->bAPSearch->TabIndex = 2;
			this->bAPSearch->Text = L"Search";
			this->bAPSearch->UseVisualStyleBackColor = true;
			this->bAPSearch->Click += gcnew System::EventHandler(this, &Program::bAPSearch_Click);
			// 
			// dgAPUsers
			// 
			this->dgAPUsers->AllowUserToAddRows = false;
			this->dgAPUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgAPUsers->Location = System::Drawing::Point(6, 267);
			this->dgAPUsers->Name = L"dgAPUsers";
			this->dgAPUsers->ReadOnly = true;
			this->dgAPUsers->Size = System::Drawing::Size(959, 212);
			this->dgAPUsers->TabIndex = 7;
			this->dgAPUsers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgAPUsers_CellClick);
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1009, 555);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Program";
			this->Text = L"Biblioteka - Pawe³ Idziak";
			this->Load += gcnew System::EventHandler(this, &Program::Program_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgBBooks))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->gbLSignin->ResumeLayout(false);
			this->gbLSignin->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tpAdmin->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->gbAPPersonal->ResumeLayout(false);
			this->gbAPPersonal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgAPUsers))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////
	//////////////////////////////////////////			START
	//////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	int id_rekordu = 0; //wybranie rekordu (czyli id uzytkownika) na ktorym pracuje - zmienna dla wszystkich siatek
	int rekord; // numer rekordu

	private: System::Void Program_Load(System::Object^  sender, System::EventArgs^  e) {
		downloadPersonal(); // pobiera dane personale do Settings - personal
		tabControl1->TabPages->Remove(tpAdmin);	//usuwam karte admina
		if (czyAdmin == true) {
			tabControl1->TabPages->Add(tpAdmin); // jesli admin to dodaje karte admina
			//pokaz_siatke("SELECT imie, nazwisko, login, email, pesel, czy_admin, czy_blokada FROM uzytkownik ORDER BY nazwisko;", dgAPUsers);

		}
	}

	// funkcja szukajaca i odswiezajaca jednoczesnie!
	// polecenie SQL, pole z ktorego odczytujemy nazwe szukania, siatka gdzie wyswietlic
	private: Void pokaz_siatke(String^ polecenie, System::Windows::Forms::DataGridView^ siatka) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand(polecenie, laczBaze);
		try {
			laczBaze->Open(); //otwieramy baze

			// pobieramy zapytanie
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;

			//tworzymy tabele
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);

			//pobieramy zrodlo (wpelniamy tabele)
			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			siatka->DataSource = zrodlo;

			laczBaze->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////
	//////////////////////////////////////////			TAB CONTROL - Settings
	//////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// funkcja pobiera dane zalogowanego uzytkownika do Personal
	private: void downloadPersonal() {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik.idUzytkownika, uzytkownik.login, uzytkownik.czy_pracownik, uzytkownik.czy_zablokowane,dane.imie, dane.nazwisko, dane.miasto, dane.ulica, dane.nr_budynku, dane.nr_lokalu, nr_tel, dane.email FROM uzytkownik, dane WHERE uzytkownik.idUzytkownika = dane.idUzytkownika AND uzytkownik.idUzytkownika = " + id_uzytkownika + ";", laczBaze);
		MySqlDataReader^ dane;

		try {
			laczBaze->Open(); //otwieramy baze
			dane = zapytanie->ExecuteReader();
			while (dane->Read()) {
				tbSLogin->Text = dane->GetString("login");
				tbSName->Text = dane->GetString("imie");
				tbSSurname->Text = dane->GetString("nazwisko");
				tbSCity->Text = dane->GetString("miasto");
				//if (!(dane->IsDBNull(7))) 
				tbSStreet->Text = dane->GetString("ulica");
				//if (!(dane->IsDBNull(8)))
					tbSBNumber->Text = dane->GetString("nr_budynku");
				//if (!(dane->IsDBNull(9))) 
					tbSANumber->Text = dane->GetString("nr_lokalu");
				//if (!(dane->IsDBNull(10))) 
					tbSPNumber->Text = dane->GetString("nr_tel");
				//if (!(dane->IsDBNull(11))) 
					tbSEmail->Text = dane->GetString("email");
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		if (czyAdmin == true) tbSAType->Text = "Administrator";
		else tbSAType->Text = "Normal user";
		cbSPersonal->Checked = false;
	}
	
	//checkBox - jesli zaznaczony mozna edytowac, jesli nie - nie mozna
	private: System::Void cbSName_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		//personalTextBox();
		if (cbSPersonal->Checked) {
			tbSName->Enabled = true;
			tbSSurname->Enabled = true;
			tbSCity->Enabled = true;
			tbSStreet->Enabled = true;
			tbSBNumber->Enabled = true;
			tbSANumber->Enabled = true;
			tbSPNumber->Enabled = true;
			tbSEmail->Enabled = true;
		}
		else {
			tbSName->Enabled = false;
			tbSSurname->Enabled = false;
			tbSCity->Enabled = false;
			tbSStreet->Enabled = false;
			tbSBNumber->Enabled = false;
			tbSANumber->Enabled = false;
			tbSPNumber->Enabled = false;
			tbSEmail->Enabled = false;
		}
	}

	//funkcja do sprawdzania pol Personal (minimalna ilosc znakow)
	private: void personalTextBox() {
		if (tbSName->Text->Length >= 3 && tbSName->Text->Length <= 15 && 
			tbSSurname->Text->Length >= 3 && tbSSurname->Text->Length <= 40 && 
			tbSEmail->Text->Length >= 6 && tbSEmail->Text->Length <= 40 &&
			tbSCity->Text->Length <= 40 &&
			tbSStreet->Text->Length <= 40 &&
			tbSBNumber->Text->Length <= 4 &&
			tbSANumber->Text->Length <= 3 &&
			tbSPNumber->Text->Length <= 11 &&
			cbSPersonal->Checked == true) bSChange1->Enabled = true;
		else bSChange1->Enabled = false;
	}
	// to samo tylko do hasla
	private: void passwordTextBox() {
		if (tbSOld->Text != "" && tbSNew1->Text != "" && 
			tbSNew1->Text->Length >= 5 &&  tbSNew1->Text->Length <=20 &&
			tbSNew1->Text == tbSNew2->Text) bSChange2->Enabled = true;
		else bSChange2->Enabled = false;
	}

	

	// pola danych personalnych (Personal) - nastawaimy do kazdego z pol warunki
	private: System::Void tbSName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBox();
	}
	private: System::Void tbSSurname_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBox();
	}
	private: System::Void tbSCity_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBox();
	}
	private: System::Void tbSStreet_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBox();
	}
	private: System::Void tbSBNumber_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBox();
	}
	private: System::Void tbSANumber_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBox();
	}
	private: System::Void tbSPNumber_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBox();
	}
	private: System::Void tbSEmail_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBox();
	}


	// pole hasla (Password)
	private: System::Void tbSNew2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		passwordTextBox();
	}
	private: System::Void tbSNew1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		passwordTextBox();
	}
	private: System::Void tbSOld_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		passwordTextBox();
	}



	// przycisk Change1 - do zmiany danych personalnych
	private: System::Void bSChange1_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE dane SET imie = '" + tbSName->Text + "', nazwisko = '" + tbSSurname->Text + "', miasto = '" + tbSCity->Text + "', ulica = '" + tbSStreet->Text + "', nr_budynku = '" + tbSBNumber->Text + "', nr_lokalu = '" + tbSANumber->Text + "', nr_tel = '" + tbSPNumber->Text + "', email = '" + tbSEmail->Text + "' WHERE idUzytkownika = '" + id_uzytkownika + "'; ", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to change the data?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("Personal changed!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					downloadPersonal();
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	// przycisk Change2 - haslo
	private: System::Void bSChange2_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE uzytkownik SET haslo = PASSWORD('" + tbSNew1->Text + "') WHERE idUzytkownika = " + id_uzytkownika + " AND haslo = PASSWORD('" + tbSOld->Text + "');", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze


			if (MessageBox::Show("Are you sure to change the password?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("Password changed!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else MessageBox::Show("Wrong old password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////
	//////////////////////////////////////////			TAB CONTROL - Admin Panel
	//////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int wierszEdit = -1;
	int kolumnaEdit = -1;
	// funkcja pobiera wartosci przekazane do siatki i wyswietla w textBoxach
	private: Void downloadPersonalAP(int id) {
		bool pomocAdmin = Convert::ToBoolean(dgAPUsers->Rows[id]->Cells["czy_pracownik"]->Value);
		bool pomocBlokada = Convert::ToBoolean(dgAPUsers->Rows[id]->Cells["czy_zablokowane"]->Value);

		if (pomocAdmin) {
			lAPType->Text = "Admin";
		}
		else {
			lAPType->Text = "Normal User";
		}

		if (pomocBlokada) {
			lAPstatus->ForeColor = System::Drawing::Color::Red;
			lAPstatus->Text = "BLOCKED";
		}
		else {
			lAPstatus->ForeColor = System::Drawing::Color::Green;
			lAPstatus->Text = "ACTIVE";
		}

		tbAPLogin->Text = dgAPUsers->Rows[id]->Cells["login"]->Value->ToString();
		tbAPName->Text = dgAPUsers->Rows[id]->Cells["imie"]->Value->ToString();
		tbAPSurname->Text = dgAPUsers->Rows[id]->Cells["nazwisko"]->Value->ToString();
		tbAPEmail->Text = dgAPUsers->Rows[id]->Cells["email"]->Value->ToString();
		tbAPCity->Text = dgAPUsers->Rows[id]->Cells["miasto"]->Value->ToString();
		tbAPStreet->Text = dgAPUsers->Rows[id]->Cells["ulica"]->Value->ToString();
		tbAPBNumber->Text = dgAPUsers->Rows[id]->Cells["nr_budynku"]->Value->ToString();
		tbAPANumber->Text = dgAPUsers->Rows[id]->Cells["nr_lokalu"]->Value->ToString();
		tbAPPNumber->Text = dgAPUsers->Rows[id]->Cells["nr_tel"]->Value->ToString();
	}

	// funkcja odswieza siatke
	private: Void odswiez() {
		//odwiezam siatke - pobieram dane ponownie
		pokaz_siatke("SELECT uzytkownik.idUzytkownika, uzytkownik.login, uzytkownik.czy_pracownik, uzytkownik.czy_zablokowane, dane.imie, dane.nazwisko, dane.email, nr_tel, dane.miasto, dane.ulica, dane.nr_budynku, dane.nr_lokalu FROM uzytkownik, dane WHERE uzytkownik.idUzytkownika = dane.idUzytkownika AND CONCAT_WS(login, ' ', imie, ' ', nazwisko, ' ', miasto, ' ', ulica, ' ', nr_budynku, ' ', nr_lokalu, ' ', nr_tel, ' ', email) LIKE '%" + tbAPSearch->Text + "%' ORDER BY idUzytkownika; ", dgAPUsers);
		// po odswiezeniu indeks autmatycznie ustawia sie na poczatek, wiec ustawiam go to wczesniej  edytowanego pola
		dgAPUsers->CurrentCell = dgAPUsers[kolumnaEdit, wierszEdit];

		// ponownie pobieram dane z tabeli - juz te nowe
		downloadPersonalAP(wierszEdit);
	}

	// funkcja czyszczaca pola
	private: Void czyscPola(Control^ zbior) {
		for each(Control^ element in zbior->Controls) {
			if (element->GetType() == TextBox::typeid || element->GetType() == MaskedTextBox::typeid || element->GetType() == ComboBox::typeid) {
				element->Text = "";
			}
		}
	}

	//funkcja do sprawdzania pol Personal (minimalna ilosc znakow)
	private: void personalTextBoxAP() {
		if (tbAPLogin->Text->Length >= 3 && tbAPLogin->Text->Length <= 15 &&
			tbAPName->Text->Length >= 3 && tbAPName->Text->Length <= 15 &&
			tbAPSurname->Text->Length >= 3 && tbAPSurname->Text->Length <= 40 &&
			tbAPEmail->Text->Length >= 6 && tbAPEmail->Text->Length <= 40 &&
			tbAPCity->Text->Length <= 40 &&
			tbAPStreet->Text->Length <= 40 &&
			tbAPBNumber->Text->Length <= 4 &&
			tbAPANumber->Text->Length <= 3 &&
			tbAPPNumber->Text->Length <= 11) bAPChange->Enabled = true;
		else bAPChange->Enabled = false;
	}

	// szukaj uzytkownikow
	private: System::Void bAPSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		pokaz_siatke("SELECT uzytkownik.idUzytkownika, uzytkownik.login, uzytkownik.czy_pracownik, uzytkownik.czy_zablokowane, dane.imie, dane.nazwisko, dane.email, nr_tel, dane.miasto, dane.ulica, dane.nr_budynku, dane.nr_lokalu FROM uzytkownik, dane WHERE uzytkownik.idUzytkownika = dane.idUzytkownika AND CONCAT_WS(login, ' ', imie, ' ', nazwisko, ' ', miasto, ' ', ulica, ' ', nr_budynku, ' ', nr_lokalu, ' ', nr_tel, ' ', email) LIKE '%" + tbAPSearch->Text + "%' ORDER BY idUzytkownika; ", dgAPUsers);

		//czyscPola(gbAPPersonal);

		//po wyszukaniu uzytkownika automatycznie wybieramy pierwsza z pozycji
		wierszEdit = dgAPUsers->CurrentCell->RowIndex; 
		kolumnaEdit = dgAPUsers->CurrentCell->ColumnIndex;
		id_rekordu = Convert::ToInt32(dgAPUsers->Rows[wierszEdit]->Cells["idUzytkownika"]->Value);	//pobieramy id wybranego uzytkownika
		downloadPersonalAP(wierszEdit);
	}


	// cellClick
	private: System::Void dgAPUsers_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		if (e->RowIndex >= 0) {
			id_rekordu = Convert::ToInt32(dgAPUsers->Rows[e->RowIndex]->Cells["idUzytkownika"]->Value);	//pobieramy id wybranego uzytkownika

			wierszEdit = dgAPUsers->CurrentCell->RowIndex;		//pobieram wiersz zaznaczonego pola siatki
			kolumnaEdit = dgAPUsers->CurrentCell->ColumnIndex;	//pobieram kolumne zaznaczonego pola siatki

			downloadPersonalAP(e->RowIndex);

			//bAPChange->Enabled = true;
		}
	}

	// zablokuj konto
	private: System::Void bAPLock_Click(System::Object^  sender, System::EventArgs^  e) {
	
		if (id_rekordu > 0) {
			MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
			MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE uzytkownik SET czy_zablokowane = 1 WHERE idUzytkownika = " + id_rekordu + ";", laczBaze);

			try {
				laczBaze->Open(); //otwieramy baze

				if (MessageBox::Show("Are you sure to block the account?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					if (zapytanie->ExecuteNonQuery()) {
						MessageBox::Show("Account blocked!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
						odswiez();
					}
					else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				laczBaze->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}else MessageBox::Show("First, select the user!");

	}


	//odblokuj konto
	private: System::Void bAPUnlock_Click(System::Object^  sender, System::EventArgs^  e) {
		if (id_rekordu > 0 && wierszEdit >= 0) {
			MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
			MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE uzytkownik SET czy_zablokowane = 0 WHERE idUzytkownika = " + id_rekordu + ";", laczBaze);

			try {
				laczBaze->Open(); //otwieramy baze

				if (MessageBox::Show("Are you sure to unblock the account?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					if (zapytanie->ExecuteNonQuery()) {
						MessageBox::Show("Account unblocked!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);

						odswiez();
					}
					else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				laczBaze->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}else MessageBox::Show("First, select the user!");
	}

	private: System::Void tbAPLogin_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBoxAP();
	}
	private: System::Void tbAPName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBoxAP();
	}
	private: System::Void tbAPSurname_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBoxAP();
	}
	private: System::Void tbAPEmail_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBoxAP();
	}
	private: System::Void tbAPPNumber_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
		personalTextBoxAP();
	}
	private: System::Void gbAPPersonal_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tbAPANumber_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBoxAP();
	}
	private: System::Void tbAPBNumber_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBoxAP();
	}
	private: System::Void tbAPCity_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBoxAP();
	}
	private: System::Void tbAPStreet_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		personalTextBoxAP();
	}

	// przycisk Change
	private: System::Void bAPChange_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("BEGIN; UPDATE uzytkownik SET login = '" + tbAPLogin->Text + "' WHERE idUzytkownika = " + id_rekordu + "; UPDATE dane SET imie = '" + tbAPName->Text + "', nazwisko ='" + tbAPSurname->Text + "', email = '" + tbAPEmail->Text + "', nr_tel = '" + tbAPPNumber->Text + "', miasto = '" + tbAPCity->Text + "', ulica = '" + tbAPStreet->Text + "', nr_budynku = '" + tbAPBNumber->Text + "', nr_lokalu = '" + tbAPANumber->Text + "' WHERE idUzytkownika = " + id_rekordu + "; COMMIT; ", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to change the data?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The data has been changed!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					odswiez();
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	// przycisk Normal user
	private: System::Void bAPNormalUser_Click(System::Object^  sender, System::EventArgs^  e) {
		if (id_rekordu > 0 && wierszEdit >= 0) {
			MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
			MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE uzytkownik SET czy_pracownik = 0 WHERE idUzytkownika = " + id_rekordu + ";", laczBaze);

			try {
				laczBaze->Open(); //otwieramy baze

				if (MessageBox::Show("Are you sure to change the account type?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					if (zapytanie->ExecuteNonQuery()) {
						MessageBox::Show("Set account type: normal user!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);

						odswiez();
					}
					else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				laczBaze->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}else MessageBox::Show("First, select the user!");
	}
	
	// przycisk Admin
	private: System::Void bAPAdmin_Click(System::Object^  sender, System::EventArgs^  e) {
		if (id_rekordu > 0 && wierszEdit >= 0) {
			MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
			MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE uzytkownik SET czy_pracownik = 1 WHERE idUzytkownika = " + id_rekordu + ";", laczBaze);

			try {
				laczBaze->Open(); //otwieramy baze

				if (MessageBox::Show("Are you sure to change the account type?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					if (zapytanie->ExecuteNonQuery()) {
						MessageBox::Show("Set account type: admin!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);

						odswiez();
					}
					else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				laczBaze->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}else MessageBox::Show("First, select the user!");
	}

	//checkBox - New Password
	private: System::Void cbNewPassword_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cbNewPassword->Checked) tbAPNewP->Enabled = true;
		else tbAPNewP->Enabled = false;
	}


	// textBox - NewPassword - warunek
	private: System::Void tbAPNewP_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (tbAPNewP->Text->Length >= 5 && tbAPNewP->Text->Length <= 15) bAPChangeP->Enabled = true;
		else bAPChangeP->Enabled = false ;
	}

	// przycisk Change Password
	private: System::Void bAPChangeP_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE uzytkownik SET haslo = PASSWORD('" + tbAPNewP->Text + "') WHERE idUzytkownika = " + id_rekordu + ";", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to change the password?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The password has been changed!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					odswiez();
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}

