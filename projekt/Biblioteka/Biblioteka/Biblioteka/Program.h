#pragma once
#include <iostream>
#include <time.h>
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
private: System::Windows::Forms::Button^  bBRezervation;

private: System::Windows::Forms::DataGridView^  dgBRent;
private: System::Windows::Forms::GroupBox^  gbBRent;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::DataGridView^  dgBBorrowed;
private: System::Windows::Forms::Button^  bBDelete;



private: System::Windows::Forms::GroupBox^  gbSHistory;
private: System::Windows::Forms::DataGridView^  dgSHistory;


private: System::Windows::Forms::TabPage^  tpStatistics;
private: System::Windows::Forms::Button^  bStBasc;




private: System::Windows::Forms::DataGridView^  dgStStatistics;
private: System::Windows::Forms::TabPage^  tpLibrarian;
private: System::Windows::Forms::TextBox^  tbLReturn;
private: System::Windows::Forms::Button^  bLReturn;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::GroupBox^  gbLReturn;









private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::GroupBox^  gbLaddBook;

private: System::Windows::Forms::TextBox^  tbLTitle;



private: System::Windows::Forms::ComboBox^  cbLType;

private: System::Windows::Forms::ComboBox^  cbLWydawnictwo;
private: System::Windows::Forms::ComboBox^  cbLAuthor;


private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label25;









private: System::Windows::Forms::TextBox^  tbLWydawnictwo;
private: System::Windows::Forms::TextBox^  tbLSurname;


private: System::Windows::Forms::Button^  bLSetWydawnictwo;
private: System::Windows::Forms::Button^  bLSetAuthor;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  tbSSetLogin;
private: System::Windows::Forms::Button^  bStUser;

private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::GroupBox^  gbLWydawnictwo;
private: System::Windows::Forms::GroupBox^  gbLType;


private: System::Windows::Forms::GroupBox^  gbLAuthor;









private: System::Windows::Forms::Label^  label36;


private: System::Windows::Forms::Button^  bLAdd;
private: System::Windows::Forms::ComboBox^  cbLWydawnictwo1;
private: System::Windows::Forms::TextBox^  tbLType;

private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Button^  bLSetType;

private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Button^  bLDeleteWydawnictwo;

private: System::Windows::Forms::ComboBox^  cbLType1;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Button^  bLDeleteType;

private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::TextBox^  tbLCountry;

private: System::Windows::Forms::ComboBox^  cbLAuthor1;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Button^  bLDeleteAuthor;


private: System::Windows::Forms::GroupBox^  groupBox12;

private: System::Windows::Forms::TextBox^  tbLSearch;
private: System::Windows::Forms::Button^  bLSearch;
private: System::Windows::Forms::MaskedTextBox^  tbLISBN;
private: System::Windows::Forms::MaskedTextBox^  tbLDate;
private: System::Windows::Forms::DataGridView^  dgLBooks;



private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::Button^  bStUasc;

private: System::Windows::Forms::Button^  bStBdesc;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::TextBox^  tbStAsurname;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  tbStAname;
private: System::Windows::Forms::Button^  bStAcheck1;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::GroupBox^  groupBox8;

private: System::Windows::Forms::TextBox^  tbStBook;


private: System::Windows::Forms::Button^  bStBook;

private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Button^  bStAdesc;
private: System::Windows::Forms::Button^  bStAasc;
private: System::Windows::Forms::Button^  bStUdesc;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::TextBox^  tbStTime;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::TextBox^  tbLName;













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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dgBBorrowed = (gcnew System::Windows::Forms::DataGridView());
			this->gbBRent = (gcnew System::Windows::Forms::GroupBox());
			this->bBDelete = (gcnew System::Windows::Forms::Button());
			this->dgBRent = (gcnew System::Windows::Forms::DataGridView());
			this->bBRent = (gcnew System::Windows::Forms::Button());
			this->dgBBooks = (gcnew System::Windows::Forms::DataGridView());
			this->bBRezervation = (gcnew System::Windows::Forms::Button());
			this->tbBSearch = (gcnew System::Windows::Forms::TextBox());
			this->bBSearch = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->gbSHistory = (gcnew System::Windows::Forms::GroupBox());
			this->dgSHistory = (gcnew System::Windows::Forms::DataGridView());
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
			this->tpStatistics = (gcnew System::Windows::Forms::TabPage());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->tbStTime = (gcnew System::Windows::Forms::TextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->tbStAsurname = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->tbStAname = (gcnew System::Windows::Forms::TextBox());
			this->bStAcheck1 = (gcnew System::Windows::Forms::Button());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->tbStBook = (gcnew System::Windows::Forms::TextBox());
			this->bStBook = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->bStAdesc = (gcnew System::Windows::Forms::Button());
			this->bStAasc = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->bStUdesc = (gcnew System::Windows::Forms::Button());
			this->bStUasc = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tbSSetLogin = (gcnew System::Windows::Forms::TextBox());
			this->bStUser = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->bStBdesc = (gcnew System::Windows::Forms::Button());
			this->bStBasc = (gcnew System::Windows::Forms::Button());
			this->dgStStatistics = (gcnew System::Windows::Forms::DataGridView());
			this->tpLibrarian = (gcnew System::Windows::Forms::TabPage());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->dgLBooks = (gcnew System::Windows::Forms::DataGridView());
			this->tbLSearch = (gcnew System::Windows::Forms::TextBox());
			this->bLSearch = (gcnew System::Windows::Forms::Button());
			this->gbLWydawnictwo = (gcnew System::Windows::Forms::GroupBox());
			this->cbLWydawnictwo1 = (gcnew System::Windows::Forms::ComboBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->bLDeleteWydawnictwo = (gcnew System::Windows::Forms::Button());
			this->bLSetWydawnictwo = (gcnew System::Windows::Forms::Button());
			this->tbLWydawnictwo = (gcnew System::Windows::Forms::TextBox());
			this->gbLType = (gcnew System::Windows::Forms::GroupBox());
			this->cbLType1 = (gcnew System::Windows::Forms::ComboBox());
			this->tbLType = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->bLSetType = (gcnew System::Windows::Forms::Button());
			this->bLDeleteType = (gcnew System::Windows::Forms::Button());
			this->gbLReturn = (gcnew System::Windows::Forms::GroupBox());
			this->bLReturn = (gcnew System::Windows::Forms::Button());
			this->tbLReturn = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->gbLAuthor = (gcnew System::Windows::Forms::GroupBox());
			this->tbLName = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->tbLCountry = (gcnew System::Windows::Forms::TextBox());
			this->cbLAuthor1 = (gcnew System::Windows::Forms::ComboBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->bLDeleteAuthor = (gcnew System::Windows::Forms::Button());
			this->bLSetAuthor = (gcnew System::Windows::Forms::Button());
			this->tbLSurname = (gcnew System::Windows::Forms::TextBox());
			this->gbLaddBook = (gcnew System::Windows::Forms::GroupBox());
			this->tbLISBN = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbLDate = (gcnew System::Windows::Forms::MaskedTextBox());
			this->bLAdd = (gcnew System::Windows::Forms::Button());
			this->tbLTitle = (gcnew System::Windows::Forms::TextBox());
			this->cbLType = (gcnew System::Windows::Forms::ComboBox());
			this->cbLWydawnictwo = (gcnew System::Windows::Forms::ComboBox());
			this->cbLAuthor = (gcnew System::Windows::Forms::ComboBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgBBorrowed))->BeginInit();
			this->gbBRent->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgBRent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgBBooks))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->gbSHistory->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgSHistory))->BeginInit();
			this->gbLSignin->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tpStatistics->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgStStatistics))->BeginInit();
			this->tpLibrarian->SuspendLayout();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgLBooks))->BeginInit();
			this->gbLWydawnictwo->SuspendLayout();
			this->gbLType->SuspendLayout();
			this->gbLReturn->SuspendLayout();
			this->gbLAuthor->SuspendLayout();
			this->gbLaddBook->SuspendLayout();
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
			this->tabControl1->Controls->Add(this->tpStatistics);
			this->tabControl1->Controls->Add(this->tpLibrarian);
			this->tabControl1->Controls->Add(this->tpAdmin);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(985, 531);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Click += gcnew System::EventHandler(this, &Program::tabControl1_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->gbBRent);
			this->tabPage1->Controls->Add(this->dgBBooks);
			this->tabPage1->Controls->Add(this->bBRezervation);
			this->tabPage1->Controls->Add(this->tbBSearch);
			this->tabPage1->Controls->Add(this->bBSearch);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(977, 505);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Books";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dgBBorrowed);
			this->groupBox3->Location = System::Drawing::Point(9, 343);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(471, 156);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"List of borrowed books";
			// 
			// dgBBorrowed
			// 
			this->dgBBorrowed->AllowUserToAddRows = false;
			this->dgBBorrowed->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgBBorrowed->Location = System::Drawing::Point(16, 23);
			this->dgBBorrowed->Name = L"dgBBorrowed";
			this->dgBBorrowed->ReadOnly = true;
			this->dgBBorrowed->Size = System::Drawing::Size(435, 121);
			this->dgBBorrowed->TabIndex = 13;
			// 
			// gbBRent
			// 
			this->gbBRent->Controls->Add(this->bBDelete);
			this->gbBRent->Controls->Add(this->dgBRent);
			this->gbBRent->Controls->Add(this->bBRent);
			this->gbBRent->Location = System::Drawing::Point(497, 343);
			this->gbBRent->Name = L"gbBRent";
			this->gbBRent->Size = System::Drawing::Size(471, 156);
			this->gbBRent->TabIndex = 14;
			this->gbBRent->TabStop = false;
			this->gbBRent->Text = L"List of reserved books";
			// 
			// bBDelete
			// 
			this->bBDelete->Enabled = false;
			this->bBDelete->Location = System::Drawing::Point(390, 52);
			this->bBDelete->Name = L"bBDelete";
			this->bBDelete->Size = System::Drawing::Size(75, 23);
			this->bBDelete->TabIndex = 14;
			this->bBDelete->Text = L"Delete";
			this->bBDelete->UseVisualStyleBackColor = true;
			this->bBDelete->Click += gcnew System::EventHandler(this, &Program::bBDelete_Click);
			// 
			// dgBRent
			// 
			this->dgBRent->AllowUserToAddRows = false;
			this->dgBRent->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgBRent->Location = System::Drawing::Point(16, 23);
			this->dgBRent->Name = L"dgBRent";
			this->dgBRent->ReadOnly = true;
			this->dgBRent->Size = System::Drawing::Size(368, 121);
			this->dgBRent->TabIndex = 13;
			this->dgBRent->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgBRent_CellClick);
			// 
			// bBRent
			// 
			this->bBRent->Enabled = false;
			this->bBRent->Location = System::Drawing::Point(390, 23);
			this->bBRent->Name = L"bBRent";
			this->bBRent->Size = System::Drawing::Size(75, 23);
			this->bBRent->TabIndex = 12;
			this->bBRent->Text = L"Rent";
			this->bBRent->UseVisualStyleBackColor = true;
			this->bBRent->Click += gcnew System::EventHandler(this, &Program::bBRent_Click);
			// 
			// dgBBooks
			// 
			this->dgBBooks->AllowUserToAddRows = false;
			this->dgBBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgBBooks->Location = System::Drawing::Point(6, 69);
			this->dgBBooks->Name = L"dgBBooks";
			this->dgBBooks->ReadOnly = true;
			this->dgBBooks->Size = System::Drawing::Size(962, 251);
			this->dgBBooks->TabIndex = 10;
			this->dgBBooks->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgBBooks_CellClick);
			// 
			// bBRezervation
			// 
			this->bBRezervation->Enabled = false;
			this->bBRezervation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bBRezervation->Location = System::Drawing::Point(847, 17);
			this->bBRezervation->Name = L"bBRezervation";
			this->bBRezervation->Size = System::Drawing::Size(121, 41);
			this->bBRezervation->TabIndex = 11;
			this->bBRezervation->Text = L"Reservation";
			this->bBRezervation->UseVisualStyleBackColor = true;
			this->bBRezervation->Click += gcnew System::EventHandler(this, &Program::bBRezervation_Click);
			// 
			// tbBSearch
			// 
			this->tbBSearch->Location = System::Drawing::Point(6, 19);
			this->tbBSearch->Name = L"tbBSearch";
			this->tbBSearch->Size = System::Drawing::Size(251, 20);
			this->tbBSearch->TabIndex = 8;
			// 
			// bBSearch
			// 
			this->bBSearch->Location = System::Drawing::Point(263, 17);
			this->bBSearch->Name = L"bBSearch";
			this->bBSearch->Size = System::Drawing::Size(75, 23);
			this->bBSearch->TabIndex = 9;
			this->bBSearch->Text = L"Search";
			this->bBSearch->UseVisualStyleBackColor = true;
			this->bBSearch->Click += gcnew System::EventHandler(this, &Program::bBSearch_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->gbSHistory);
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
			// gbSHistory
			// 
			this->gbSHistory->Controls->Add(this->dgSHistory);
			this->gbSHistory->Location = System::Drawing::Point(602, 28);
			this->gbSHistory->Name = L"gbSHistory";
			this->gbSHistory->Size = System::Drawing::Size(360, 390);
			this->gbSHistory->TabIndex = 3;
			this->gbSHistory->TabStop = false;
			this->gbSHistory->Text = L"History";
			// 
			// dgSHistory
			// 
			this->dgSHistory->AllowUserToAddRows = false;
			this->dgSHistory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgSHistory->Location = System::Drawing::Point(8, 20);
			this->dgSHistory->Name = L"dgSHistory";
			this->dgSHistory->ReadOnly = true;
			this->dgSHistory->Size = System::Drawing::Size(346, 364);
			this->dgSHistory->TabIndex = 0;
			this->dgSHistory->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView1_CellClick);
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
			// tpStatistics
			// 
			this->tpStatistics->Controls->Add(this->label51);
			this->tpStatistics->Controls->Add(this->label50);
			this->tpStatistics->Controls->Add(this->tbStTime);
			this->tpStatistics->Controls->Add(this->groupBox9);
			this->tpStatistics->Controls->Add(this->groupBox8);
			this->tpStatistics->Controls->Add(this->groupBox4);
			this->tpStatistics->Controls->Add(this->groupBox7);
			this->tpStatistics->Controls->Add(this->groupBox5);
			this->tpStatistics->Controls->Add(this->groupBox6);
			this->tpStatistics->Controls->Add(this->dgStStatistics);
			this->tpStatistics->Location = System::Drawing::Point(4, 22);
			this->tpStatistics->Name = L"tpStatistics";
			this->tpStatistics->Size = System::Drawing::Size(977, 505);
			this->tpStatistics->TabIndex = 3;
			this->tpStatistics->Text = L"Statistics";
			this->tpStatistics->UseVisualStyleBackColor = true;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label51->Location = System::Drawing::Point(353, 155);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(42, 20);
			this->label51->TabIndex = 13;
			this->label51->Text = L"[ms]";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label50->Location = System::Drawing::Point(35, 155);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(142, 20);
			this->label50->TabIndex = 12;
			this->label50->Text = L"Czas wykonania:";
			// 
			// tbStTime
			// 
			this->tbStTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbStTime->Location = System::Drawing::Point(183, 152);
			this->tbStTime->Name = L"tbStTime";
			this->tbStTime->Size = System::Drawing::Size(164, 26);
			this->tbStTime->TabIndex = 11;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label47);
			this->groupBox9->Controls->Add(this->label49);
			this->groupBox9->Controls->Add(this->tbStAsurname);
			this->groupBox9->Controls->Add(this->label46);
			this->groupBox9->Controls->Add(this->tbStAname);
			this->groupBox9->Controls->Add(this->bStAcheck1);
			this->groupBox9->Controls->Add(this->label48);
			this->groupBox9->Location = System::Drawing::Point(13, 249);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(254, 130);
			this->groupBox9->TabIndex = 8;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Check the popularity of the author";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label47->Location = System::Drawing::Point(6, 104);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(203, 13);
			this->label47->TabIndex = 9;
			this->label47->Text = L"it means that you typed the wrong values.";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label49->Location = System::Drawing::Point(6, 91);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(227, 13);
			this->label49->TabIndex = 8;
			this->label49->Text = L"If the name or surname field (in table) is empty, ";
			// 
			// tbStAsurname
			// 
			this->tbStAsurname->Location = System::Drawing::Point(64, 56);
			this->tbStAsurname->Name = L"tbStAsurname";
			this->tbStAsurname->Size = System::Drawing::Size(100, 20);
			this->tbStAsurname->TabIndex = 4;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(6, 59);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(52, 13);
			this->label46->TabIndex = 3;
			this->label46->Text = L"Surname:";
			// 
			// tbStAname
			// 
			this->tbStAname->Location = System::Drawing::Point(64, 35);
			this->tbStAname->Name = L"tbStAname";
			this->tbStAname->Size = System::Drawing::Size(100, 20);
			this->tbStAname->TabIndex = 2;
			// 
			// bStAcheck1
			// 
			this->bStAcheck1->Location = System::Drawing::Point(169, 32);
			this->bStAcheck1->Name = L"bStAcheck1";
			this->bStAcheck1->Size = System::Drawing::Size(75, 23);
			this->bStAcheck1->TabIndex = 1;
			this->bStAcheck1->Text = L"Check";
			this->bStAcheck1->UseVisualStyleBackColor = true;
			this->bStAcheck1->Click += gcnew System::EventHandler(this, &Program::bStAcheck1_Click);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(6, 35);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(38, 13);
			this->label48->TabIndex = 0;
			this->label48->Text = L"Name:";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label35);
			this->groupBox8->Controls->Add(this->label44);
			this->groupBox8->Controls->Add(this->tbStBook);
			this->groupBox8->Controls->Add(this->bStBook);
			this->groupBox8->Controls->Add(this->label45);
			this->groupBox8->Location = System::Drawing::Point(13, 385);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(254, 106);
			this->groupBox8->TabIndex = 8;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Check the popularity of the book";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label35->Location = System::Drawing::Point(6, 77);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(188, 13);
			this->label35->TabIndex = 9;
			this->label35->Text = L"it means that you typed the wrong title.";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label44->Location = System::Drawing::Point(6, 64);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(162, 13);
			this->label44->TabIndex = 8;
			this->label44->Text = L"If the title field (in table) is empty, ";
			// 
			// tbStBook
			// 
			this->tbStBook->Location = System::Drawing::Point(42, 32);
			this->tbStBook->Name = L"tbStBook";
			this->tbStBook->Size = System::Drawing::Size(100, 20);
			this->tbStBook->TabIndex = 2;
			// 
			// bStBook
			// 
			this->bStBook->Location = System::Drawing::Point(148, 32);
			this->bStBook->Name = L"bStBook";
			this->bStBook->Size = System::Drawing::Size(75, 23);
			this->bStBook->TabIndex = 1;
			this->bStBook->Text = L"Check";
			this->bStBook->UseVisualStyleBackColor = true;
			this->bStBook->Click += gcnew System::EventHandler(this, &Program::bStBook_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(6, 35);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(30, 13);
			this->label45->TabIndex = 0;
			this->label45->Text = L"Title:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->bStAdesc);
			this->groupBox4->Controls->Add(this->bStAasc);
			this->groupBox4->Location = System::Drawing::Point(353, 13);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(164, 68);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Check the most popular author";
			// 
			// bStAdesc
			// 
			this->bStAdesc->Location = System::Drawing::Point(2, 39);
			this->bStAdesc->Name = L"bStAdesc";
			this->bStAdesc->Size = System::Drawing::Size(75, 23);
			this->bStAdesc->TabIndex = 2;
			this->bStAdesc->Text = L"DESC";
			this->bStAdesc->UseVisualStyleBackColor = true;
			this->bStAdesc->Click += gcnew System::EventHandler(this, &Program::bStAdesc_Click);
			// 
			// bStAasc
			// 
			this->bStAasc->Location = System::Drawing::Point(83, 39);
			this->bStAasc->Name = L"bStAasc";
			this->bStAasc->Size = System::Drawing::Size(75, 23);
			this->bStAasc->TabIndex = 1;
			this->bStAasc->Text = L"ASC";
			this->bStAasc->UseVisualStyleBackColor = true;
			this->bStAasc->Click += gcnew System::EventHandler(this, &Program::bStAasc_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->bStUdesc);
			this->groupBox7->Controls->Add(this->bStUasc);
			this->groupBox7->Location = System::Drawing::Point(13, 13);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(164, 68);
			this->groupBox7->TabIndex = 9;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Check the most active user";
			// 
			// bStUdesc
			// 
			this->bStUdesc->Location = System::Drawing::Point(2, 39);
			this->bStUdesc->Name = L"bStUdesc";
			this->bStUdesc->Size = System::Drawing::Size(75, 23);
			this->bStUdesc->TabIndex = 2;
			this->bStUdesc->Text = L"DESC";
			this->bStUdesc->UseVisualStyleBackColor = true;
			this->bStUdesc->Click += gcnew System::EventHandler(this, &Program::bStUdesc_Click);
			// 
			// bStUasc
			// 
			this->bStUasc->Location = System::Drawing::Point(83, 39);
			this->bStUasc->Name = L"bStUasc";
			this->bStUasc->Size = System::Drawing::Size(75, 23);
			this->bStUasc->TabIndex = 1;
			this->bStUasc->Text = L"ASC";
			this->bStUasc->UseVisualStyleBackColor = true;
			this->bStUasc->Click += gcnew System::EventHandler(this, &Program::bSUsers2_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->tbSSetLogin);
			this->groupBox5->Controls->Add(this->bStUser);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Location = System::Drawing::Point(273, 385);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(254, 106);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Check how many times user borrowed the books";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label29->Location = System::Drawing::Point(6, 76);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(191, 13);
			this->label29->TabIndex = 7;
			this->label29->Text = L"it means that you typed the wrong login";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label28->Location = System::Drawing::Point(6, 63);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(168, 13);
			this->label28->TabIndex = 6;
			this->label28->Text = L"If the login field (in table) is empty, ";
			// 
			// tbSSetLogin
			// 
			this->tbSSetLogin->Location = System::Drawing::Point(48, 32);
			this->tbSSetLogin->Name = L"tbSSetLogin";
			this->tbSSetLogin->Size = System::Drawing::Size(100, 20);
			this->tbSSetLogin->TabIndex = 2;
			// 
			// bStUser
			// 
			this->bStUser->Location = System::Drawing::Point(154, 30);
			this->bStUser->Name = L"bStUser";
			this->bStUser->Size = System::Drawing::Size(75, 23);
			this->bStUser->TabIndex = 1;
			this->bStUser->Text = L"Check";
			this->bStUser->UseVisualStyleBackColor = true;
			this->bStUser->Click += gcnew System::EventHandler(this, &Program::bStUser_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(6, 35);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(36, 13);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Login:";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->bStBdesc);
			this->groupBox6->Controls->Add(this->bStBasc);
			this->groupBox6->Location = System::Drawing::Point(183, 13);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(164, 68);
			this->groupBox6->TabIndex = 3;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Check the most frequently borrowed books";
			// 
			// bStBdesc
			// 
			this->bStBdesc->Location = System::Drawing::Point(6, 39);
			this->bStBdesc->Name = L"bStBdesc";
			this->bStBdesc->Size = System::Drawing::Size(75, 23);
			this->bStBdesc->TabIndex = 10;
			this->bStBdesc->Text = L"DESC";
			this->bStBdesc->UseVisualStyleBackColor = true;
			this->bStBdesc->Click += gcnew System::EventHandler(this, &Program::bStBdesc_Click);
			// 
			// bStBasc
			// 
			this->bStBasc->Location = System::Drawing::Point(83, 39);
			this->bStBasc->Name = L"bStBasc";
			this->bStBasc->Size = System::Drawing::Size(75, 23);
			this->bStBasc->TabIndex = 1;
			this->bStBasc->Text = L"ASC";
			this->bStBasc->UseVisualStyleBackColor = true;
			this->bStBasc->Click += gcnew System::EventHandler(this, &Program::bStBasc_Click);
			// 
			// dgStStatistics
			// 
			this->dgStStatistics->AllowUserToAddRows = false;
			this->dgStStatistics->AllowUserToDeleteRows = false;
			this->dgStStatistics->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgStStatistics->Location = System::Drawing::Point(533, 13);
			this->dgStStatistics->Name = L"dgStStatistics";
			this->dgStStatistics->ReadOnly = true;
			this->dgStStatistics->Size = System::Drawing::Size(430, 478);
			this->dgStStatistics->TabIndex = 0;
			// 
			// tpLibrarian
			// 
			this->tpLibrarian->Controls->Add(this->groupBox12);
			this->tpLibrarian->Controls->Add(this->gbLWydawnictwo);
			this->tpLibrarian->Controls->Add(this->gbLType);
			this->tpLibrarian->Controls->Add(this->gbLReturn);
			this->tpLibrarian->Controls->Add(this->gbLAuthor);
			this->tpLibrarian->Controls->Add(this->gbLaddBook);
			this->tpLibrarian->Location = System::Drawing::Point(4, 22);
			this->tpLibrarian->Name = L"tpLibrarian";
			this->tpLibrarian->Size = System::Drawing::Size(977, 505);
			this->tpLibrarian->TabIndex = 4;
			this->tpLibrarian->Text = L"Librarian";
			this->tpLibrarian->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->dgLBooks);
			this->groupBox12->Controls->Add(this->tbLSearch);
			this->groupBox12->Controls->Add(this->bLSearch);
			this->groupBox12->Location = System::Drawing::Point(3, 210);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(971, 292);
			this->groupBox12->TabIndex = 12;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Delete the book";
			// 
			// dgLBooks
			// 
			this->dgLBooks->AllowUserToAddRows = false;
			this->dgLBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgLBooks->Location = System::Drawing::Point(4, 49);
			this->dgLBooks->Name = L"dgLBooks";
			this->dgLBooks->ReadOnly = true;
			this->dgLBooks->Size = System::Drawing::Size(961, 237);
			this->dgLBooks->TabIndex = 13;
			this->dgLBooks->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgLBooks_CellClick);
			// 
			// tbLSearch
			// 
			this->tbLSearch->Location = System::Drawing::Point(6, 19);
			this->tbLSearch->Name = L"tbLSearch";
			this->tbLSearch->Size = System::Drawing::Size(251, 20);
			this->tbLSearch->TabIndex = 12;
			// 
			// bLSearch
			// 
			this->bLSearch->Location = System::Drawing::Point(263, 17);
			this->bLSearch->Name = L"bLSearch";
			this->bLSearch->Size = System::Drawing::Size(75, 23);
			this->bLSearch->TabIndex = 13;
			this->bLSearch->Text = L"Search";
			this->bLSearch->UseVisualStyleBackColor = true;
			this->bLSearch->Click += gcnew System::EventHandler(this, &Program::bLSearch_Click);
			// 
			// gbLWydawnictwo
			// 
			this->gbLWydawnictwo->Controls->Add(this->cbLWydawnictwo1);
			this->gbLWydawnictwo->Controls->Add(this->label38);
			this->gbLWydawnictwo->Controls->Add(this->label39);
			this->gbLWydawnictwo->Controls->Add(this->bLDeleteWydawnictwo);
			this->gbLWydawnictwo->Controls->Add(this->bLSetWydawnictwo);
			this->gbLWydawnictwo->Controls->Add(this->tbLWydawnictwo);
			this->gbLWydawnictwo->Location = System::Drawing::Point(725, 11);
			this->gbLWydawnictwo->Name = L"gbLWydawnictwo";
			this->gbLWydawnictwo->Size = System::Drawing::Size(249, 81);
			this->gbLWydawnictwo->TabIndex = 10;
			this->gbLWydawnictwo->TabStop = false;
			this->gbLWydawnictwo->Text = L"Add/delete publishing house";
			// 
			// cbLWydawnictwo1
			// 
			this->cbLWydawnictwo1->FormattingEnabled = true;
			this->cbLWydawnictwo1->Location = System::Drawing::Point(52, 51);
			this->cbLWydawnictwo1->Name = L"cbLWydawnictwo1";
			this->cbLWydawnictwo1->Size = System::Drawing::Size(121, 21);
			this->cbLWydawnictwo1->TabIndex = 23;
			this->cbLWydawnictwo1->SelectedIndexChanged += gcnew System::EventHandler(this, &Program::cbLWydawnictwo1_SelectedIndexChanged);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(6, 54);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(40, 13);
			this->label38->TabIndex = 24;
			this->label38->Text = L"Select:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(8, 28);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(38, 13);
			this->label39->TabIndex = 25;
			this->label39->Text = L"Name:";
			// 
			// bLDeleteWydawnictwo
			// 
			this->bLDeleteWydawnictwo->Enabled = false;
			this->bLDeleteWydawnictwo->Location = System::Drawing::Point(179, 49);
			this->bLDeleteWydawnictwo->Name = L"bLDeleteWydawnictwo";
			this->bLDeleteWydawnictwo->Size = System::Drawing::Size(48, 23);
			this->bLDeleteWydawnictwo->TabIndex = 28;
			this->bLDeleteWydawnictwo->Text = L"Delete";
			this->bLDeleteWydawnictwo->UseVisualStyleBackColor = true;
			this->bLDeleteWydawnictwo->Click += gcnew System::EventHandler(this, &Program::bLDeleteWydawnictwo_Click);
			// 
			// bLSetWydawnictwo
			// 
			this->bLSetWydawnictwo->Enabled = false;
			this->bLSetWydawnictwo->Location = System::Drawing::Point(179, 23);
			this->bLSetWydawnictwo->Name = L"bLSetWydawnictwo";
			this->bLSetWydawnictwo->Size = System::Drawing::Size(48, 23);
			this->bLSetWydawnictwo->TabIndex = 20;
			this->bLSetWydawnictwo->Text = L"Set";
			this->bLSetWydawnictwo->UseVisualStyleBackColor = true;
			this->bLSetWydawnictwo->Click += gcnew System::EventHandler(this, &Program::bLSetWydawnictwo_Click);
			// 
			// tbLWydawnictwo
			// 
			this->tbLWydawnictwo->Location = System::Drawing::Point(52, 25);
			this->tbLWydawnictwo->Name = L"tbLWydawnictwo";
			this->tbLWydawnictwo->Size = System::Drawing::Size(121, 20);
			this->tbLWydawnictwo->TabIndex = 17;
			this->tbLWydawnictwo->TextChanged += gcnew System::EventHandler(this, &Program::tbLWydawnictwo_TextChanged);
			// 
			// gbLType
			// 
			this->gbLType->Controls->Add(this->cbLType1);
			this->gbLType->Controls->Add(this->tbLType);
			this->gbLType->Controls->Add(this->label37);
			this->gbLType->Controls->Add(this->label36);
			this->gbLType->Controls->Add(this->bLSetType);
			this->gbLType->Controls->Add(this->bLDeleteType);
			this->gbLType->Location = System::Drawing::Point(725, 98);
			this->gbLType->Name = L"gbLType";
			this->gbLType->Size = System::Drawing::Size(249, 81);
			this->gbLType->TabIndex = 9;
			this->gbLType->TabStop = false;
			this->gbLType->Text = L"Add/delete type";
			// 
			// cbLType1
			// 
			this->cbLType1->FormattingEnabled = true;
			this->cbLType1->Location = System::Drawing::Point(52, 51);
			this->cbLType1->Name = L"cbLType1";
			this->cbLType1->Size = System::Drawing::Size(121, 21);
			this->cbLType1->TabIndex = 11;
			this->cbLType1->SelectedIndexChanged += gcnew System::EventHandler(this, &Program::cbLType1_SelectedIndexChanged);
			// 
			// tbLType
			// 
			this->tbLType->Location = System::Drawing::Point(52, 25);
			this->tbLType->Name = L"tbLType";
			this->tbLType->Size = System::Drawing::Size(121, 20);
			this->tbLType->TabIndex = 26;
			this->tbLType->TextChanged += gcnew System::EventHandler(this, &Program::tbLType_TextChanged);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(6, 54);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(40, 13);
			this->label37->TabIndex = 11;
			this->label37->Text = L"Select:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(8, 28);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(38, 13);
			this->label36->TabIndex = 11;
			this->label36->Text = L"Name:";
			// 
			// bLSetType
			// 
			this->bLSetType->Enabled = false;
			this->bLSetType->Location = System::Drawing::Point(179, 23);
			this->bLSetType->Name = L"bLSetType";
			this->bLSetType->Size = System::Drawing::Size(48, 23);
			this->bLSetType->TabIndex = 27;
			this->bLSetType->Text = L"Set";
			this->bLSetType->UseVisualStyleBackColor = true;
			this->bLSetType->Click += gcnew System::EventHandler(this, &Program::bLSetType_Click);
			// 
			// bLDeleteType
			// 
			this->bLDeleteType->Enabled = false;
			this->bLDeleteType->Location = System::Drawing::Point(179, 49);
			this->bLDeleteType->Name = L"bLDeleteType";
			this->bLDeleteType->Size = System::Drawing::Size(48, 23);
			this->bLDeleteType->TabIndex = 22;
			this->bLDeleteType->Text = L"Delete";
			this->bLDeleteType->UseVisualStyleBackColor = true;
			this->bLDeleteType->Click += gcnew System::EventHandler(this, &Program::bLDeleteType_Click);
			// 
			// gbLReturn
			// 
			this->gbLReturn->Controls->Add(this->bLReturn);
			this->gbLReturn->Controls->Add(this->tbLReturn);
			this->gbLReturn->Controls->Add(this->label14);
			this->gbLReturn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->gbLReturn->Location = System::Drawing::Point(252, 11);
			this->gbLReturn->Name = L"gbLReturn";
			this->gbLReturn->Size = System::Drawing::Size(212, 111);
			this->gbLReturn->TabIndex = 3;
			this->gbLReturn->TabStop = false;
			this->gbLReturn->Text = L"Return the book";
			// 
			// bLReturn
			// 
			this->bLReturn->Enabled = false;
			this->bLReturn->Location = System::Drawing::Point(68, 73);
			this->bLReturn->Name = L"bLReturn";
			this->bLReturn->Size = System::Drawing::Size(75, 23);
			this->bLReturn->TabIndex = 1;
			this->bLReturn->Text = L"Return";
			this->bLReturn->UseVisualStyleBackColor = true;
			this->bLReturn->Click += gcnew System::EventHandler(this, &Program::bLReturn_Click);
			// 
			// tbLReturn
			// 
			this->tbLReturn->Location = System::Drawing::Point(92, 34);
			this->tbLReturn->Name = L"tbLReturn";
			this->tbLReturn->Size = System::Drawing::Size(100, 22);
			this->tbLReturn->TabIndex = 2;
			this->tbLReturn->TextChanged += gcnew System::EventHandler(this, &Program::tbLReturn_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(20, 37);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 16);
			this->label14->TabIndex = 0;
			this->label14->Text = L"ID book:";
			// 
			// gbLAuthor
			// 
			this->gbLAuthor->Controls->Add(this->tbLName);
			this->gbLAuthor->Controls->Add(this->label43);
			this->gbLAuthor->Controls->Add(this->label42);
			this->gbLAuthor->Controls->Add(this->label41);
			this->gbLAuthor->Controls->Add(this->tbLCountry);
			this->gbLAuthor->Controls->Add(this->cbLAuthor1);
			this->gbLAuthor->Controls->Add(this->label40);
			this->gbLAuthor->Controls->Add(this->bLDeleteAuthor);
			this->gbLAuthor->Controls->Add(this->bLSetAuthor);
			this->gbLAuthor->Controls->Add(this->tbLSurname);
			this->gbLAuthor->Location = System::Drawing::Point(470, 11);
			this->gbLAuthor->Name = L"gbLAuthor";
			this->gbLAuthor->Size = System::Drawing::Size(249, 146);
			this->gbLAuthor->TabIndex = 8;
			this->gbLAuthor->TabStop = false;
			this->gbLAuthor->Text = L"Add/delete author";
			// 
			// tbLName
			// 
			this->tbLName->Location = System::Drawing::Point(64, 25);
			this->tbLName->Name = L"tbLName";
			this->tbLName->Size = System::Drawing::Size(121, 20);
			this->tbLName->TabIndex = 13;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(6, 71);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(46, 13);
			this->label43->TabIndex = 34;
			this->label43->Text = L"Country:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(6, 49);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(52, 13);
			this->label42->TabIndex = 33;
			this->label42->Text = L"Surname:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(6, 28);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(38, 13);
			this->label41->TabIndex = 29;
			this->label41->Text = L"Name:";
			// 
			// tbLCountry
			// 
			this->tbLCountry->Location = System::Drawing::Point(64, 68);
			this->tbLCountry->Name = L"tbLCountry";
			this->tbLCountry->Size = System::Drawing::Size(121, 20);
			this->tbLCountry->TabIndex = 32;
			this->tbLCountry->TextChanged += gcnew System::EventHandler(this, &Program::tbLCountry_TextChanged);
			// 
			// cbLAuthor1
			// 
			this->cbLAuthor1->FormattingEnabled = true;
			this->cbLAuthor1->Location = System::Drawing::Point(64, 108);
			this->cbLAuthor1->Name = L"cbLAuthor1";
			this->cbLAuthor1->Size = System::Drawing::Size(121, 21);
			this->cbLAuthor1->TabIndex = 29;
			this->cbLAuthor1->SelectedIndexChanged += gcnew System::EventHandler(this, &Program::cbLAuthor1_SelectedIndexChanged);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(6, 111);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(40, 13);
			this->label40->TabIndex = 30;
			this->label40->Text = L"Select:";
			// 
			// bLDeleteAuthor
			// 
			this->bLDeleteAuthor->Enabled = false;
			this->bLDeleteAuthor->Location = System::Drawing::Point(191, 106);
			this->bLDeleteAuthor->Name = L"bLDeleteAuthor";
			this->bLDeleteAuthor->Size = System::Drawing::Size(48, 23);
			this->bLDeleteAuthor->TabIndex = 31;
			this->bLDeleteAuthor->Text = L"Delete";
			this->bLDeleteAuthor->UseVisualStyleBackColor = true;
			this->bLDeleteAuthor->Click += gcnew System::EventHandler(this, &Program::bLDeleteAuthor_Click);
			// 
			// bLSetAuthor
			// 
			this->bLSetAuthor->Enabled = false;
			this->bLSetAuthor->Location = System::Drawing::Point(191, 44);
			this->bLSetAuthor->Name = L"bLSetAuthor";
			this->bLSetAuthor->Size = System::Drawing::Size(48, 23);
			this->bLSetAuthor->TabIndex = 19;
			this->bLSetAuthor->Text = L"Set";
			this->bLSetAuthor->UseVisualStyleBackColor = true;
			this->bLSetAuthor->Click += gcnew System::EventHandler(this, &Program::bLSetAuthor_Click);
			// 
			// tbLSurname
			// 
			this->tbLSurname->Location = System::Drawing::Point(64, 46);
			this->tbLSurname->Name = L"tbLSurname";
			this->tbLSurname->Size = System::Drawing::Size(121, 20);
			this->tbLSurname->TabIndex = 16;
			this->tbLSurname->TextChanged += gcnew System::EventHandler(this, &Program::tbLSurname_TextChanged);
			// 
			// gbLaddBook
			// 
			this->gbLaddBook->Controls->Add(this->tbLISBN);
			this->gbLaddBook->Controls->Add(this->tbLDate);
			this->gbLaddBook->Controls->Add(this->bLAdd);
			this->gbLaddBook->Controls->Add(this->tbLTitle);
			this->gbLaddBook->Controls->Add(this->cbLType);
			this->gbLaddBook->Controls->Add(this->cbLWydawnictwo);
			this->gbLaddBook->Controls->Add(this->cbLAuthor);
			this->gbLaddBook->Controls->Add(this->label34);
			this->gbLaddBook->Controls->Add(this->label33);
			this->gbLaddBook->Controls->Add(this->label32);
			this->gbLaddBook->Controls->Add(this->label31);
			this->gbLaddBook->Controls->Add(this->label30);
			this->gbLaddBook->Controls->Add(this->label25);
			this->gbLaddBook->Location = System::Drawing::Point(3, 11);
			this->gbLaddBook->Name = L"gbLaddBook";
			this->gbLaddBook->Size = System::Drawing::Size(243, 193);
			this->gbLaddBook->TabIndex = 6;
			this->gbLaddBook->TabStop = false;
			this->gbLaddBook->Text = L"Add the book";
			// 
			// tbLISBN
			// 
			this->tbLISBN->Location = System::Drawing::Point(111, 47);
			this->tbLISBN->Mask = L"0-0000-0000-0";
			this->tbLISBN->Name = L"tbLISBN";
			this->tbLISBN->Size = System::Drawing::Size(100, 20);
			this->tbLISBN->TabIndex = 13;
			this->tbLISBN->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Program::tbLISBN_MaskInputRejected);
			// 
			// tbLDate
			// 
			this->tbLDate->Location = System::Drawing::Point(111, 68);
			this->tbLDate->Mask = L"00/00/0000";
			this->tbLDate->Name = L"tbLDate";
			this->tbLDate->Size = System::Drawing::Size(100, 20);
			this->tbLDate->TabIndex = 14;
			this->tbLDate->ValidatingType = System::DateTime::typeid;
			this->tbLDate->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Program::tbLDate_MaskInputRejected);
			// 
			// bLAdd
			// 
			this->bLAdd->Enabled = false;
			this->bLAdd->Location = System::Drawing::Point(86, 161);
			this->bLAdd->Name = L"bLAdd";
			this->bLAdd->Size = System::Drawing::Size(75, 23);
			this->bLAdd->TabIndex = 12;
			this->bLAdd->Text = L"Add";
			this->bLAdd->UseVisualStyleBackColor = true;
			this->bLAdd->Click += gcnew System::EventHandler(this, &Program::bLAdd_Click);
			// 
			// tbLTitle
			// 
			this->tbLTitle->Location = System::Drawing::Point(111, 26);
			this->tbLTitle->Name = L"tbLTitle";
			this->tbLTitle->Size = System::Drawing::Size(100, 20);
			this->tbLTitle->TabIndex = 11;
			this->tbLTitle->TextChanged += gcnew System::EventHandler(this, &Program::tbLTitle_TextChanged);
			// 
			// cbLType
			// 
			this->cbLType->FormattingEnabled = true;
			this->cbLType->Location = System::Drawing::Point(111, 134);
			this->cbLType->Name = L"cbLType";
			this->cbLType->Size = System::Drawing::Size(121, 21);
			this->cbLType->TabIndex = 9;
			this->cbLType->SelectedIndexChanged += gcnew System::EventHandler(this, &Program::cbLType_SelectedIndexChanged);
			// 
			// cbLWydawnictwo
			// 
			this->cbLWydawnictwo->FormattingEnabled = true;
			this->cbLWydawnictwo->Location = System::Drawing::Point(111, 112);
			this->cbLWydawnictwo->Name = L"cbLWydawnictwo";
			this->cbLWydawnictwo->Size = System::Drawing::Size(121, 21);
			this->cbLWydawnictwo->TabIndex = 8;
			this->cbLWydawnictwo->SelectedIndexChanged += gcnew System::EventHandler(this, &Program::cbLWydawnictwo_SelectedIndexChanged);
			// 
			// cbLAuthor
			// 
			this->cbLAuthor->FormattingEnabled = true;
			this->cbLAuthor->Location = System::Drawing::Point(111, 90);
			this->cbLAuthor->Name = L"cbLAuthor";
			this->cbLAuthor->Size = System::Drawing::Size(121, 21);
			this->cbLAuthor->TabIndex = 7;
			this->cbLAuthor->SelectedIndexChanged += gcnew System::EventHandler(this, &Program::cbLAuthor_SelectedIndexChanged);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(6, 137);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(34, 13);
			this->label34->TabIndex = 6;
			this->label34->Text = L"Type:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(6, 115);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(90, 13);
			this->label33->TabIndex = 5;
			this->label33->Text = L"Publishing house:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(6, 71);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(99, 13);
			this->label32->TabIndex = 4;
			this->label32->Text = L"Date of publication:";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(6, 50);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(35, 13);
			this->label31->TabIndex = 3;
			this->label31->Text = L"ISBN:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(6, 93);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(41, 13);
			this->label30->TabIndex = 2;
			this->label30->Text = L"Author:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 29);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(30, 13);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Title:";
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
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgBBorrowed))->EndInit();
			this->gbBRent->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgBRent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgBBooks))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->gbSHistory->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgSHistory))->EndInit();
			this->gbLSignin->ResumeLayout(false);
			this->gbLSignin->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tpStatistics->ResumeLayout(false);
			this->tpStatistics->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgStStatistics))->EndInit();
			this->tpLibrarian->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgLBooks))->EndInit();
			this->gbLWydawnictwo->ResumeLayout(false);
			this->gbLWydawnictwo->PerformLayout();
			this->gbLType->ResumeLayout(false);
			this->gbLType->PerformLayout();
			this->gbLReturn->ResumeLayout(false);
			this->gbLReturn->PerformLayout();
			this->gbLAuthor->ResumeLayout(false);
			this->gbLAuthor->PerformLayout();
			this->gbLaddBook->ResumeLayout(false);
			this->gbLaddBook->PerformLayout();
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
	int id_ksiazki = 0;
	int dostepnosc_ksiazki = 0;


	private: Void downloadHistory() {
		pokaz_siatke("SELECT idWypozyczenie, tytul, data_wypozyczenia, data_zwrotu FROM wypozyczenie JOIN ksiazka WHERE idUzytkownika = "+ id_uzytkownika +" AND data_zwrotu IS NOT NULL AND ksiazka.idKsiazka = wypozyczenie.idKsiazka;", dgSHistory);
		dgSHistory->Columns[0]->Visible = false;

	}

	private: System::Void Program_Load(System::Object^  sender, System::EventArgs^  e) {
		downloadPersonal(); // pobiera dane personale do Settings - personal
		downloadReservation();	// pobierana zarezerwowane ksiazki zalogowanego uzytkownika
		downloadBorrowed();
		downloadHistory();

		tabControl1->TabPages->Remove(tpAdmin);	//usuwam karte admina
		tabControl1->TabPages->Remove(tpLibrarian);	//usuwam karte admina
		if (czyAdmin == true) {
			tabControl1->TabPages->Add(tpLibrarian);// jesli admin to dodaje karte bilbiotekarza
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

	

	// pola danych personalnych (Personal) - nastawaimy do kazdego z pol warunki opisane w funkcji
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

	// history - cell click
	private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
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
		czyscPola(gbAPPersonal);
		lAPstatus->Text = "";
		lAPType->Text = "";
		pokaz_siatke("CREATE VIEW `dane_konta` AS SELECT uzytkownik.idUzytkownika, login, czy_pracownik, czy_zablokowane, imie, nazwisko, email, nr_tel, miasto, ulica, nr_budynku, nr_lokalu, zadluzenie, calkowita_l_wypozyczen FROM uzytkownik join dane on uzytkownik.idUzytkownika = dane.idUzytkownika; CREATE PROCEDURE wyszukaj_uzytkownika(in tekst VARCHAR(255)) SELECT  * from dane_konta where login like concat('%', tekst, '%') or imie like concat('%', tekst, '%') or nazwisko like concat('%', tekst, '%') or email like concat('%', tekst, '%') or miasto like concat('%', tekst, '%'); CALL wyszukaj_uzytkownika('" + tbAPSearch->Text + "'); DROP VIEW dane_konta; DROP PROCEDURE wyszukaj_uzytkownika; ", dgAPUsers);

		if (dgAPUsers->RowCount == 0) {
			MessageBox::Show("No results.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			
			//po wyszukaniu uzytkownika automatycznie wybieramy pierwsza z pozycji
			wierszEdit = dgAPUsers->CurrentCell->RowIndex;
			kolumnaEdit = dgAPUsers->CurrentCell->ColumnIndex;
			id_rekordu = Convert::ToInt32(dgAPUsers->Rows[wierszEdit]->Cells["idUzytkownika"]->Value);	//pobieramy id wybranego uzytkownika

			downloadPersonalAP(wierszEdit);
		}
		
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
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////
	//////////////////////////////////////////			TAB CONTROL - Books
	//////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	private: Void refreshBooks(System::Windows::Forms::DataGridView^ siatka, System::Windows::Forms::TextBox^ tb) {
		pokaz_siatke("CREATE VIEW `dane_ksiazki` AS SELECT idKsiazka,tytul,dostepnosc,ISBN,data_wydania,imie AS imie_autora,nazwisko AS nazwisko_autora,kraj_pochodzenia AS kraj_pochodzenia_autora,wydawnictwo.nazwa AS wydawnictwo,gatunek.nazwa AS gatunek FROM ksiazka join gatunek on ksiazka.idGatunek = gatunek.idGatunek join wydawnictwo on ksiazka.idWydawnictwo = wydawnictwo.idWydawnictwo join autor on autor.idAutor = ksiazka.idAutor; Select * FROM dane_ksiazki WHERE CONCAT_WS(tytul, ' ',ISBN, ' ',data_wydania,' ',imie_autora,' ',nazwisko_autora, ' ', kraj_pochodzenia_autora, ' ', wydawnictwo, ' ', gatunek) LIKE '%" + tb->Text + "%' AND dostepnosc = 1 ORDER BY idKsiazka; DROP VIEW dane_ksiazki;", siatka);
		
		if (siatka->RowCount == 0) {
			MessageBox::Show("No results.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}else siatka->CurrentCell = siatka[kolumnaEdit, wierszEdit];
	}

	private: System::Void bBSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		wierszEdit = 0;
		kolumnaEdit = 1;
		refreshBooks(dgBBooks, tbBSearch);
		//dgBBooks->Columns[0]->Visible = false;

	}

	// Cell click - ksiazki
	private: System::Void dgBBooks_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->RowIndex >= 0) {
			id_ksiazki = Convert::ToInt32(dgBBooks->Rows[e->RowIndex]->Cells["idKsiazka"]->Value);	//pobieramy id wybranej ksiazki
			dostepnosc_ksiazki = Convert::ToInt32(dgBBooks->Rows[e->RowIndex]->Cells["dostepnosc"]->Value);	//pobieramy dostepnosc wybranej ksiazki

			wierszEdit = dgBBooks->CurrentCell->RowIndex;		//pobieram wiersz zaznaczonego pola siatki
			kolumnaEdit = dgBBooks->CurrentCell->ColumnIndex;	//pobieram kolumne zaznaczonego pola siatki

			bBRezervation->Enabled = true;
		}
	}

	// przycisk Book (rezerwuj)
	private: System::Void bBRezervation_Click(System::Object^  sender, System::EventArgs^  e) {

		if (dostepnosc_ksiazki) {
			DateTime thisDay = DateTime::Now;

			MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
			MySqlCommand^ zapytanie = gcnew MySqlCommand("BEGIN;INSERT INTO rezerwacja(data_rezerwacji, idUzytkownika, idKsiazka) VALUES(STR_TO_DATE('" + thisDay + "', '%d.%m.%Y %H:%i:%s'), " + id_uzytkownika + ", " + id_ksiazki + "); UPDATE ksiazka SET dostepnosc = 0 WHERE idKsiazka = " + id_ksiazki + ";COMMIT;", laczBaze);

			try {
				laczBaze->Open(); //otwieramy baze

				if (MessageBox::Show("Are you sure to book this book?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					if (zapytanie->ExecuteNonQuery()) {
						MessageBox::Show("The book has been reserved!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
						downloadReservation();
						refreshBooks(dgBBooks, tbBSearch);
						bBRezervation->Enabled = false;
					}
					else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				laczBaze->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		else {
			MessageBox::Show("Book is not available", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	// funkcja pobieraj¹ca zarezerowwane ksiazki przez zalogowanego uzytkownika
	private: Void downloadReservation() {
		pokaz_siatke("SELECT rezerwacja.idKsiazka, tytul, data_rezerwacji FROM rezerwacja join ksiazka WHERE rezerwacja.idUzytkownika = "+ id_uzytkownika +" AND ksiazka.idKsiazka = rezerwacja.idKsiazka;", dgBRent);

		dgBRent->Columns[0]->Visible = false;
	}

	private: Void downloadBorrowed() {
		pokaz_siatke("SELECT wypozyczenie.idKsiazka, tytul, data_wypozyczenia, przewidywana_data_zwrotu FROM wypozyczenie join ksiazka WHERE wypozyczenie.idUzytkownika = " + id_uzytkownika + " AND ksiazka.idKsiazka = wypozyczenie.idKsiazka AND data_zwrotu IS NULL;", dgBBorrowed);


		dgBBorrowed->Columns[0]->Visible = false;
	}

	// przycisk Delete reservation
	private: System::Void bBDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("BEGIN;DELETE FROM rezerwacja WHERE idKsiazka = " + id_ksiazki + ";UPDATE ksiazka SET dostepnosc = 1 WHERE idKsiazka = " + id_ksiazki + ";COMMIT;", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to delete this reervation?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("Reservation has been delete!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					downloadReservation();
					refreshBooks(dgBBooks, tbBSearch);
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	
	// Cell click - Rezerwacje
	private: System::Void dgBRent_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->RowIndex >= 0) {
			id_ksiazki = Convert::ToInt32(dgBRent->Rows[e->RowIndex]->Cells["idKsiazka"]->Value);	//pobieramy id wybranej ksiazki
			bBRent->Enabled = true;
			bBDelete->Enabled = true;

		}
	}

	// Przycisk Rent (wypozycz)
	private: System::Void bBRent_Click(System::Object^  sender, System::EventArgs^  e) {
		
		DateTime thisDay = DateTime::Now;
		int month = 3;

		String^ dateOfReturn = thisDay.AddMonths(month).ToString();
		
		DateTime thisDay1 = DateTime::Now;

		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("BEGIN;INSERT INTO wypozyczenie(data_wypozyczenia, przewidywana_data_zwrotu, idUzytkownika, idKsiazka) VALUES(STR_TO_DATE('" + thisDay1 + "', '%d.%m.%Y %H:%i:%s'), STR_TO_DATE('" + dateOfReturn + "', '%d.%m.%Y %H:%i:%s'), " + id_uzytkownika + ", " + id_ksiazki + ");DELETE FROM rezerwacja WHERE idKsiazka = " + id_ksiazki + "; UPDATE ksiazka SET l_wypozyczen = l_wypozyczen+1 WHERE idKsiazka = " + id_ksiazki + ";UPDATE uzytkownik SET calkowita_l_wypozyczen = calkowita_l_wypozyczen+1 WHERE idUzytkownika = " + id_uzytkownika + "; COMMIT;", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to borrow this book?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The book has been borrowed!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					downloadReservation();
					downloadBorrowed();
					bBRent->Enabled = false;
					bBDelete->Enabled = false;
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////
	//////////////////////////////////////////			TAB CONTROL - Statistics
	//////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	// uzytkownicy po ilosci wypozyczen ASC
	private: System::Void bSUsers2_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime startTime = DateTime::Now;
		pokaz_siatke("CREATE PROCEDURE uzytkownicy_stat() SELECT dane.imie, dane.nazwisko, uzytkownik.login, count(idWypozyczenie) as Ilosc_wypozyczen from wypozyczenie inner join uzytkownik on uzytkownik.idUzytkownika = wypozyczenie.idUzytkownika left join dane on dane.idUzytkownika = uzytkownik.idUzytkownika where uzytkownik.idUzytkownika = wypozyczenie.idUzytkownika group by login order by Ilosc_wypozyczen ASC; CALL uzytkownicy_stat;DROP PROCEDURE uzytkownicy_stat; ", dgStStatistics);

		DateTime stopTime = DateTime::Now;
		TimeSpan roznica = stopTime - startTime;
		tbStTime->Text = (Convert::ToString(roznica.TotalMilliseconds));
	}
	// uzytkownicy po ilosci wypozyczen DESC
	private: System::Void bStUdesc_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime startTime = DateTime::Now;
		pokaz_siatke("CREATE PROCEDURE uzytkownicy_stat() SELECT dane.imie, dane.nazwisko, uzytkownik.login, count(idWypozyczenie) as Ilosc_wypozyczen from wypozyczenie inner join uzytkownik on uzytkownik.idUzytkownika = wypozyczenie.idUzytkownika left join dane on dane.idUzytkownika = uzytkownik.idUzytkownika where uzytkownik.idUzytkownika = wypozyczenie.idUzytkownika group by login order by Ilosc_wypozyczen DESC; CALL uzytkownicy_stat;DROP PROCEDURE uzytkownicy_stat; ", dgStStatistics);

		DateTime stopTime = DateTime::Now;
		TimeSpan roznica = stopTime - startTime;
		tbStTime->Text = (Convert::ToString(roznica.TotalMilliseconds));
	}



	// autorzy DESC
	private: System::Void bStAdesc_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime startTime = DateTime::Now;
		pokaz_siatke("CREATE PROCEDURE autor_stat() SELECT autor.imie, autor.nazwisko, count(idWypozyczenie) as Ilosc_wypozyczen from wypozyczenie inner join ksiazka on ksiazka.idKsiazka = wypozyczenie.idKsiazka left join autor on autor.idAutor = ksiazka.idAutor where ksiazka.idKsiazka = wypozyczenie.idKsiazka group by autor.nazwisko order by Ilosc_wypozyczen DESC; CALL autor_stat; DROP PROCEDURE autor_stat; ", dgStStatistics);

		DateTime stopTime = DateTime::Now;
		TimeSpan roznica = stopTime - startTime;
		tbStTime->Text = (Convert::ToString(roznica.TotalMilliseconds));
	}

	// autorzy ASC
	private: System::Void bStAasc_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime startTime = DateTime::Now;
		pokaz_siatke("CREATE PROCEDURE autor_stat() SELECT autor.imie, autor.nazwisko, count(idWypozyczenie) as Ilosc_wypozyczen from wypozyczenie inner join ksiazka on ksiazka.idKsiazka = wypozyczenie.idKsiazka left join autor on autor.idAutor = ksiazka.idAutor where ksiazka.idKsiazka = wypozyczenie.idKsiazka group by autor.nazwisko order by Ilosc_wypozyczen ASC; CALL autor_stat; DROP PROCEDURE autor_stat; ", dgStStatistics);

		DateTime stopTime = DateTime::Now;
		TimeSpan roznica = stopTime - startTime;
		tbStTime->Text = (Convert::ToString(roznica.TotalMilliseconds));
	}

	// Check the most frequently borrowed books DESC
	private: System::Void bStBdesc_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime startTime = DateTime::Now;
		pokaz_siatke("CREATE PROCEDURE ksiazki_stat() SELECT ksiazka.tytul, autor.imie, autor.nazwisko, count(idWypozyczenie) as Ilosc_wypozyczen from wypozyczenie inner join ksiazka on ksiazka.idKsiazka = wypozyczenie.idKsiazka left join autor on autor.idAutor = ksiazka.idAutor where ksiazka.idKsiazka = wypozyczenie.idKsiazka group by ksiazka.tytul order by Ilosc_wypozyczen DESC; CALL ksiazki_stat; DROP PROCEDURE ksiazki_stat; ", dgStStatistics);

		DateTime stopTime = DateTime::Now;
		TimeSpan roznica = stopTime - startTime;
		tbStTime->Text = (Convert::ToString(roznica.TotalMilliseconds));
	}

	//Check the most frequently borrowed books ASC
	private: System::Void bStBasc_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime startTime = DateTime::Now;
		pokaz_siatke("CREATE PROCEDURE ksiazki_stat() SELECT ksiazka.tytul, autor.imie, autor.nazwisko, count(idWypozyczenie) as Ilosc_wypozyczen from wypozyczenie inner join ksiazka on ksiazka.idKsiazka = wypozyczenie.idKsiazka left join autor on autor.idAutor = ksiazka.idAutor where ksiazka.idKsiazka = wypozyczenie.idKsiazka group by ksiazka.tytul order by Ilosc_wypozyczen ASC; CALL ksiazki_stat; DROP PROCEDURE ksiazki_stat; ", dgStStatistics);

		DateTime stopTime = DateTime::Now;
		TimeSpan roznica = stopTime - startTime;
		tbStTime->Text = (Convert::ToString(roznica.TotalMilliseconds));
	}
	
	// ile razy ksia¿ki danego autora by³a wypo¿yczana
	private: System::Void bStAcheck1_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime startTime = DateTime::Now;
		pokaz_siatke("CREATE PROCEDURE statystyki_autor (in imie VARCHAR(40), nazwisko varchar(40)) SELECT imie, nazwisko, count(idWypozyczenie) as Iloœæ_wypo¿yczeñ from wypozyczenie inner join ksiazka on ksiazka.idKsiazka = wypozyczenie.idKsiazka inner join autor on autor.idAutor = ksiazka.idAutor where imie = autor.imie or nazwisko = autor.nazwisko; CALL statystyki_autor('"+ tbStAname->Text +"','"+ tbStAsurname->Text +"');DROP PROCEDURE statystyki_autor; ", dgStStatistics);

		DateTime stopTime = DateTime::Now;
		TimeSpan roznica = stopTime - startTime;
		tbStTime->Text = (Convert::ToString(roznica.TotalMilliseconds));
	}

	// Check how many times user borrowed the books
	private: System::Void bStUser_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime startTime = DateTime::Now;
		pokaz_siatke("CREATE PROCEDURE statystyki_uzytkownik (in login VARCHAR(40)) SELECT uzytkownik.login, count(idWypozyczenie) as Iloœæ_wypo¿yczeñ from wypozyczenie inner join uzytkownik on uzytkownik.idUzytkownika = wypozyczenie.idUzytkownika where login = uzytkownik.login; CALL statystyki_uzytkownik('" + tbSSetLogin->Text + "');DROP PROCEDURE statystyki_uzytkownik; ", dgStStatistics);

		DateTime stopTime = DateTime::Now;
		TimeSpan roznica = stopTime - startTime;
		tbStTime->Text = (Convert::ToString(roznica.TotalMilliseconds));
	}

	// Ile razy dana ksi¹¿ka by³a wypo¿yczana
	private: System::Void bStBook_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime startTime = DateTime::Now;
		pokaz_siatke("CREATE PROCEDURE statystyki_ksiazka (in tytul VARCHAR(255)) SELECT ksiazka.tytul, count(distinct idWypozyczenie) as Iloœæ_wypo¿yczeñ from wypozyczenie inner join ksiazka on ksiazka.idKsiazka = wypozyczenie.idKsiazka where ksiazka.tytul like concat('%', tytul, '%'); CALL statystyki_ksiazka('" + tbStBook->Text + "');DROP PROCEDURE statystyki_ksiazka; ", dgStStatistics);

		DateTime stopTime = DateTime::Now;
		TimeSpan roznica = stopTime - startTime;
		tbStTime->Text = (Convert::ToString(roznica.TotalMilliseconds));
	}


	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////
	//////////////////////////////////////////			TAB CONTROL - Librarian
	//////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	String^ daneWybrane; //wybranie danych

	// przycisk Return 
	private: System::Void bLReturn_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime thisDay = DateTime::Now;
		String^ dateOfReturn = thisDay.ToString();

		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE wypozyczenie, ksiazka SET wypozyczenie.data_zwrotu = STR_TO_DATE('" + dateOfReturn + "', '%d.%m.%Y %H:%i:%s'), ksiazka.dostepnosc = 1 WHERE wypozyczenie.idKsiazka = " + tbLReturn->Text + " AND ksiazka.idKsiazka = " + tbLReturn->Text + ";", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to return this book?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The book has been returned!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					downloadReservation();
					downloadBorrowed();
					downloadHistory();
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

	private: Void downloadWydawnictwo() {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT idWydawnictwo, nazwa FROM wydawnictwo ORDER BY idWydawnictwo;", laczBaze);
		MySqlDataReader^ dane;

		cbLWydawnictwo->Items->Clear();
		cbLWydawnictwo1->Items->Clear();

		try {
			laczBaze->Open(); //otwieramy baze
			dane = zapytanie->ExecuteReader();
			while (dane->Read()) {
				cbLWydawnictwo->Items->Add("ID: " + dane->GetString("idWydawnictwo") + ". " + dane->GetString("nazwa"));
				cbLWydawnictwo1->Items->Add("ID: " + dane->GetString("idWydawnictwo") + ". " + dane->GetString("nazwa"));
			}
			laczBaze->Close();
		}catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}


	private: Void downloadAuthor() {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT idAutor, imie, nazwisko FROM autor ORDER BY idAutor;", laczBaze);
		MySqlDataReader^ dane;

		cbLAuthor->Items->Clear();
		cbLAuthor1->Items->Clear();

		try {
			laczBaze->Open(); //otwieramy baze
			dane = zapytanie->ExecuteReader();
			while (dane->Read()) {
				cbLAuthor->Items->Add("ID: " + dane->GetString("idAutor") + ". " + dane->GetString("imie") + " " + (dane->GetString("nazwisko")));
				cbLAuthor1->Items->Add("ID: " + dane->GetString("idAutor") + ". " + dane->GetString("imie") + " " + (dane->GetString("nazwisko")));
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	

	private: Void downloadTypeBook() {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT idGatunek, nazwa FROM gatunek ORDER BY idGatunek;", laczBaze);
		MySqlDataReader^ dane;

		cbLType->Items->Clear();
		cbLType1->Items->Clear();

		try {
			laczBaze->Open(); //otwieramy baze
			dane = zapytanie->ExecuteReader();
			while (dane->Read()) {
				cbLType->Items->Add("ID: " + dane->GetString("idGatunek") + ". " + dane->GetString("nazwa"));
				cbLType1->Items->Add("ID: " + dane->GetString("idGatunek") + ". " + dane->GetString("nazwa"));
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	

	private: Void czyscLibrarian() {
		cbLAuthor->Items->Clear();
		cbLAuthor1->Items->Clear();
		cbLType->Items->Clear();
		cbLType1->Items->Clear();;
		cbLWydawnictwo->Items->Clear();
		cbLWydawnictwo1->Items->Clear();

		czyscPola(gbLAuthor);
		czyscPola(gbLWydawnictwo);
		czyscPola(gbLType);
		czyscPola(gbLaddBook);
		czyscPola(gbLReturn);
	}

	
	// akcja klikniecia na zakladke Librarian
	private: System::Void tabControl1_Click(System::Object^  sender, System::EventArgs^  e) {
		czyscLibrarian();
		
		downloadWydawnictwo();
		downloadAuthor();
		downloadTypeBook();
	}

	// przycisk szukaj
	private: System::Void bLSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		wierszEdit = 0;
		kolumnaEdit = 0;
		refreshBooks(dgLBooks, tbLSearch);
		//dgBBooks->Columns[0]->Visible = false;
	}

	private: Void bookConditions() {
		if (tbLTitle->Text->Length >= 1 && tbLTitle->Text->Length <= 45 &&
			tbLISBN->Text->Length == 13 &&
			tbLDate->Text->Length == 10 &&
			cbLAuthor->Text->Length >= 1 &&
			cbLWydawnictwo->Text->Length >= 1 &&
			cbLType->Text->Length >= 1) bLAdd->Enabled = true;
		else bLAdd->Enabled = false;
	}
	private: System::Void tbLTitle_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		bookConditions();
	}
	private: System::Void tbLISBN_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
		bookConditions();
	}
	private: System::Void tbLDate_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
		bookConditions();
	}
	private: System::Void cbLAuthor_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		bookConditions();
	}
	private: System::Void cbLWydawnictwo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		bookConditions();
	}
	private: System::Void cbLType_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		bookConditions();
	}



	int id_autor, id_wydawnictwo, id_gatunek;



	// przycisk add (dodaj ksiazke)
	private: System::Void bLAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		array<String^> ^podzial = gcnew array<String^>(65);

		String^ selectedAuhtor = Convert::ToString(cbLAuthor->SelectedItem);
		podzial = selectedAuhtor->Split('ID:', '.');
		String^ idAutorString = podzial[0]->Substring(3);
		id_autor = Convert::ToInt32(idAutorString);


		String^ selectedWydawnictwo = Convert::ToString(cbLWydawnictwo->SelectedItem);
		podzial = selectedWydawnictwo->Split('ID:', '.');
		String^ idWydatnictwoString = podzial[0]->Substring(3);
		id_wydawnictwo = Convert::ToInt32(idWydatnictwoString);
		

		String^ selectedType = Convert::ToString(cbLType->SelectedItem);
		podzial = selectedType->Split('ID:', '.');
		String^ idTypeString = podzial[0]->Substring(3);
		id_gatunek = Convert::ToInt32(idTypeString);


		
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("INSERT INTO ksiazka(tytul, ISBN, data_wydania, l_wypozyczen, idAutor, idWydawnictwo, idGatunek, dostepnosc) VALUES('"+ tbLTitle->Text +"', '" + tbLISBN->Text + "', STR_TO_DATE('"+ tbLDate->Text +"', '%d.%m.%Y'), 0, '" + id_autor + "', '" + id_wydawnictwo + "', '" + id_gatunek + "', 1);", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to add this book?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The book has been added!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					wierszEdit = 0;
					kolumnaEdit = 0;
					czyscPola(gbLaddBook);
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		
	}


	// warunek dla dodawania autora
	private: Void authorConditions() {
		if (tbLName->Text->Length >= 2 && tbLName->Text->Length <= 15 &&
			tbLSurname->Text->Length >= 2 && tbLSurname->Text->Length <= 40) {
			bLSetAuthor->Enabled = true;
		}
		 else bLSetAuthor->Enabled = false;
	}

	private: System::Void tbLName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		authorConditions();
	}
	private: System::Void tbLSurname_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		authorConditions();
	}
	private: System::Void tbLCountry_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		authorConditions();
	}

	// warunek dla select
	private: Void selectConditions(System::Windows::Forms::ComboBox^ combo, System::Windows::Forms::Button^ button) {
		if (combo->Text->Length >= 4) button->Enabled = true;
		else button->Enabled = false;
	}
	private: System::Void cbLAuthor1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		selectConditions(cbLAuthor1, bLDeleteAuthor);
	}
	private: System::Void cbLWydawnictwo1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		selectConditions(cbLWydawnictwo1, bLDeleteWydawnictwo);
	}
	private: System::Void cbLType1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		selectConditions(cbLType1, bLDeleteType);
	}

	// warunek dla nazwy (wydawnictwo, gatunek)
	private: Void nameConditions(System::Windows::Forms::TextBox^ tb, System::Windows::Forms::Button^ button) {
		if (tb->Text->Length >= 1 && tb->Text->Length <= 45) button->Enabled = true;
		else button->Enabled = false;
	}

	private: System::Void tbLWydawnictwo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		nameConditions(tbLWydawnictwo, bLSetWydawnictwo);
	}
	private: System::Void tbLType_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		nameConditions(tbLType, bLSetType);
	}

	// warunek dla return
	private: Void returnConditions() {
		if (tbLReturn->Text->Length >= 1) {
			bLReturn->Enabled = true;
		}
		else bLReturn->Enabled = false;
	}

	private: System::Void tbLReturn_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		returnConditions();
	}

	// przycisk Set (Author)
	private: System::Void bLSetAuthor_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("INSERT INTO autor(imie, nazwisko, kraj_pochodzenia) VALUES('" + tbLName->Text + "', '" + tbLSurname->Text + "', '" + tbLCountry->Text + "');", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to add this author?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The author has been added!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					czyscPola(gbLAuthor);
					downloadAuthor();
					bLSetAuthor->Enabled = false;
					bLDeleteAuthor->Enabled = false;
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	// przycisk Delete (Author)
	private: System::Void bLDeleteAuthor_Click(System::Object^  sender, System::EventArgs^  e) {
		array<String^> ^podzial = gcnew array<String^>(65);

		String^ selectedAuhtor = Convert::ToString(cbLAuthor1->SelectedItem);
		podzial = selectedAuhtor->Split('ID:', '.');
		String^ idAutorString = podzial[0]->Substring(3);
		id_autor = Convert::ToInt32(idAutorString);

		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("DELETE FROM autor WHERE idAutor = "+ id_autor +";", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to delete this author?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The author has been deleted!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					czyscPola(gbLAuthor);
					downloadAuthor();
					bLSetAuthor->Enabled = false;
					bLDeleteAuthor->Enabled = false;
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
			MessageBox::Show("Probably this author hause is assigned to some book.");
		}
	}

	
	// przycisk Set (Wydawnictwo)
	private: System::Void bLSetWydawnictwo_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("INSERT INTO wydawnictwo(nazwa) VALUES('" + tbLWydawnictwo->Text + "');", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to add this publishing house?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The publishing house has been added!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					czyscPola(gbLWydawnictwo);
					downloadWydawnictwo();
					bLSetWydawnictwo->Enabled = false;
					bLDeleteWydawnictwo->Enabled = false;
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	// przycsk Delete (Wydawnictwo)
	private: System::Void bLDeleteWydawnictwo_Click(System::Object^  sender, System::EventArgs^  e) {
		array<String^> ^podzial = gcnew array<String^>(65);

		String^ selectedWydawnictwo = Convert::ToString(cbLWydawnictwo1->SelectedItem);
		podzial = selectedWydawnictwo->Split('ID:', '.');
		String^ idWydatnictwoString = podzial[0]->Substring(3);
		id_wydawnictwo = Convert::ToInt32(idWydatnictwoString);

		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("DELETE FROM wydawnictwo WHERE idWydawnictwo = " + id_wydawnictwo + ";", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to delete this publishing house?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The publishing house has been deleted!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					czyscPola(gbLWydawnictwo);
					downloadWydawnictwo();
					bLSetWydawnictwo->Enabled = false;
					bLDeleteWydawnictwo->Enabled = false;
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
			MessageBox::Show("Probably this published hause is assigned to some book.");
		}
	}


	// przycisk Set (Gatunek)
	private: System::Void bLSetType_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("INSERT INTO gatunek(nazwa) VALUES('" + tbLType->Text + "');", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to add this type?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The type has been added!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					czyscPola(gbLType);
					downloadTypeBook();
					bLSetType->Enabled = false;
					bLDeleteType->Enabled = false;
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	// przycisk Delete (Gatunek)
	private: System::Void bLDeleteType_Click(System::Object^  sender, System::EventArgs^  e) {
		array<String^> ^podzial = gcnew array<String^>(65);

		String^ selectedType = Convert::ToString(cbLType1->SelectedItem);
		podzial = selectedType->Split('ID:', '.');
		String^ idTypeString = podzial[0]->Substring(3);
		id_gatunek = Convert::ToInt32(idTypeString);

		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("DELETE FROM gatunek WHERE idGatunek = " + id_gatunek + ";", laczBaze);

		try {
			laczBaze->Open(); //otwieramy baze

			if (MessageBox::Show("Are you sure to delete this type?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				if (zapytanie->ExecuteNonQuery()) {
					MessageBox::Show("The type has been deleted!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
					czyscPola(gbLType);
					downloadTypeBook();
					bLSetType->Enabled = false;
					bLDeleteType->Enabled = false;
				}
				else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
			MessageBox::Show("Probably this type is assigned to some book.");
		}
	}

	// cell click - Books
	private: System::Void dgLBooks_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->RowIndex >= 0) {
			id_ksiazki = Convert::ToInt32(dgLBooks->Rows[e->RowIndex]->Cells["idKsiazka"]->Value); //pobieramy id zaznaczonej ksiazki

			MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
			MySqlCommand^ zapytanie = gcnew MySqlCommand("DELETE FROM ksiazka WHERE idKsiazka = " + id_ksiazki + ";", laczBaze);

			try {
				laczBaze->Open(); //otwieramy baze

				if (MessageBox::Show("Are you sure to delete this book?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					if (zapytanie->ExecuteNonQuery()) {
						MessageBox::Show("The book has been delete!", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
						refreshBooks(dgLBooks, tbLSearch);
					}
					else MessageBox::Show("Something went wrong :(", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				laczBaze->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	
	}







};
}

