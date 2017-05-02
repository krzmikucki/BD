#include "Program.h"
#pragma once

namespace Biblioteka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			Logowanie::Width = 321;
			Logowanie::Height = 163;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbLUser;
	private: System::Windows::Forms::TextBox^  tbLPassword;
	private: System::Windows::Forms::Button^  bClose;
	private: System::Windows::Forms::Button^  bLoginInner;

	private: System::Windows::Forms::GroupBox^  gbLLogin;

	private: System::Windows::Forms::GroupBox^  gbLSignin;

	private: System::Windows::Forms::Button^  bSigninInner;














	private: System::Windows::Forms::TextBox^  tbSLogin;


	private: System::Windows::Forms::Button^  bLSignin;
	private: System::Windows::Forms::Button^  bLLogin;


	private: System::Windows::Forms::TextBox^  tbSPassword2;
	private: System::Windows::Forms::TextBox^  tbSPassword1;
	private: System::Windows::Forms::MaskedTextBox^  tbSPNumber;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  tbSANumber;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  tbSBNumber;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  tbSStreet;



	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  tbSEmail;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  tbSCity;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  tbSSurname;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  tbSName;



	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbLUser = (gcnew System::Windows::Forms::TextBox());
			this->tbLPassword = (gcnew System::Windows::Forms::TextBox());
			this->bClose = (gcnew System::Windows::Forms::Button());
			this->bLoginInner = (gcnew System::Windows::Forms::Button());
			this->gbLLogin = (gcnew System::Windows::Forms::GroupBox());
			this->gbLSignin = (gcnew System::Windows::Forms::GroupBox());
			this->tbSPassword2 = (gcnew System::Windows::Forms::TextBox());
			this->bSigninInner = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tbSBNumber = (gcnew System::Windows::Forms::TextBox());
			this->tbSLogin = (gcnew System::Windows::Forms::TextBox());
			this->tbSEmail = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tbSName = (gcnew System::Windows::Forms::TextBox());
			this->tbSPassword1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tbSPNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tbSSurname = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tbSCity = (gcnew System::Windows::Forms::TextBox());
			this->tbSANumber = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbSStreet = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->bLSignin = (gcnew System::Windows::Forms::Button());
			this->bLLogin = (gcnew System::Windows::Forms::Button());
			this->gbLLogin->SuspendLayout();
			this->gbLSignin->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hasło:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Login:";
			// 
			// tbLUser
			// 
			this->tbLUser->Location = System::Drawing::Point(96, 38);
			this->tbLUser->Name = L"tbLUser";
			this->tbLUser->Size = System::Drawing::Size(100, 20);
			this->tbLUser->TabIndex = 4;
			this->tbLUser->Text = L"pawl0";
			// 
			// tbLPassword
			// 
			this->tbLPassword->Location = System::Drawing::Point(96, 63);
			this->tbLPassword->Name = L"tbLPassword";
			this->tbLPassword->PasswordChar = '*';
			this->tbLPassword->Size = System::Drawing::Size(100, 20);
			this->tbLPassword->TabIndex = 5;
			this->tbLPassword->Text = L"12345";
			// 
			// bClose
			// 
			this->bClose->Location = System::Drawing::Point(28, 85);
			this->bClose->Name = L"bClose";
			this->bClose->Size = System::Drawing::Size(253, 23);
			this->bClose->TabIndex = 10;
			this->bClose->Text = L"Close";
			this->bClose->UseVisualStyleBackColor = true;
			this->bClose->Click += gcnew System::EventHandler(this, &Logowanie::bAnuluj_Click);
			// 
			// bLoginInner
			// 
			this->bLoginInner->Location = System::Drawing::Point(94, 101);
			this->bLoginInner->Name = L"bLoginInner";
			this->bLoginInner->Size = System::Drawing::Size(75, 23);
			this->bLoginInner->TabIndex = 6;
			this->bLoginInner->Text = L"Login";
			this->bLoginInner->UseVisualStyleBackColor = true;
			this->bLoginInner->Click += gcnew System::EventHandler(this, &Logowanie::bLogin_Click);
			// 
			// gbLLogin
			// 
			this->gbLLogin->Controls->Add(this->tbLPassword);
			this->gbLLogin->Controls->Add(this->bLoginInner);
			this->gbLLogin->Controls->Add(this->label1);
			this->gbLLogin->Controls->Add(this->label2);
			this->gbLLogin->Controls->Add(this->tbLUser);
			this->gbLLogin->Location = System::Drawing::Point(343, 141);
			this->gbLLogin->Name = L"gbLLogin";
			this->gbLLogin->Size = System::Drawing::Size(253, 147);
			this->gbLLogin->TabIndex = 6;
			this->gbLLogin->TabStop = false;
			this->gbLLogin->Text = L"Login";
			this->gbLLogin->Visible = false;
			// 
			// gbLSignin
			// 
			this->gbLSignin->Controls->Add(this->tbSPassword2);
			this->gbLSignin->Controls->Add(this->bSigninInner);
			this->gbLSignin->Controls->Add(this->label21);
			this->gbLSignin->Controls->Add(this->tbSBNumber);
			this->gbLSignin->Controls->Add(this->tbSLogin);
			this->gbLSignin->Controls->Add(this->tbSEmail);
			this->gbLSignin->Controls->Add(this->label15);
			this->gbLSignin->Controls->Add(this->tbSName);
			this->gbLSignin->Controls->Add(this->tbSPassword1);
			this->gbLSignin->Controls->Add(this->label18);
			this->gbLSignin->Controls->Add(this->label20);
			this->gbLSignin->Controls->Add(this->tbSPNumber);
			this->gbLSignin->Controls->Add(this->label19);
			this->gbLSignin->Controls->Add(this->label17);
			this->gbLSignin->Controls->Add(this->tbSSurname);
			this->gbLSignin->Controls->Add(this->label12);
			this->gbLSignin->Controls->Add(this->label16);
			this->gbLSignin->Controls->Add(this->tbSCity);
			this->gbLSignin->Controls->Add(this->tbSANumber);
			this->gbLSignin->Controls->Add(this->label11);
			this->gbLSignin->Controls->Add(this->label14);
			this->gbLSignin->Controls->Add(this->label10);
			this->gbLSignin->Controls->Add(this->tbSStreet);
			this->gbLSignin->Controls->Add(this->label13);
			this->gbLSignin->Location = System::Drawing::Point(28, 141);
			this->gbLSignin->Name = L"gbLSignin";
			this->gbLSignin->Size = System::Drawing::Size(253, 393);
			this->gbLSignin->TabIndex = 7;
			this->gbLSignin->TabStop = false;
			this->gbLSignin->Text = L"Sign in";
			this->gbLSignin->Visible = false;
			// 
			// tbSPassword2
			// 
			this->tbSPassword2->Location = System::Drawing::Point(125, 72);
			this->tbSPassword2->Name = L"tbSPassword2";
			this->tbSPassword2->Size = System::Drawing::Size(100, 20);
			this->tbSPassword2->TabIndex = 8;
			// 
			// bSigninInner
			// 
			this->bSigninInner->Location = System::Drawing::Point(86, 353);
			this->bSigninInner->Name = L"bSigninInner";
			this->bSigninInner->Size = System::Drawing::Size(75, 23);
			this->bSigninInner->TabIndex = 17;
			this->bSigninInner->Text = L"Sign in";
			this->bSigninInner->UseVisualStyleBackColor = true;
			this->bSigninInner->Click += gcnew System::EventHandler(this, &Logowanie::bSignin_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(81, 179);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(85, 13);
			this->label21->TabIndex = 45;
			this->label21->Text = L"* - required fields";
			// 
			// tbSBNumber
			// 
			this->tbSBNumber->Location = System::Drawing::Point(125, 262);
			this->tbSBNumber->Name = L"tbSBNumber";
			this->tbSBNumber->Size = System::Drawing::Size(100, 20);
			this->tbSBNumber->TabIndex = 14;
			// 
			// tbSLogin
			// 
			this->tbSLogin->Location = System::Drawing::Point(125, 21);
			this->tbSLogin->Name = L"tbSLogin";
			this->tbSLogin->Size = System::Drawing::Size(100, 20);
			this->tbSLogin->TabIndex = 6;
			// 
			// tbSEmail
			// 
			this->tbSEmail->Location = System::Drawing::Point(125, 149);
			this->tbSEmail->Name = L"tbSEmail";
			this->tbSEmail->Size = System::Drawing::Size(100, 20);
			this->tbSEmail->TabIndex = 11;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(25, 153);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(39, 13);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Email*:";
			// 
			// tbSName
			// 
			this->tbSName->Location = System::Drawing::Point(125, 98);
			this->tbSName->Name = L"tbSName";
			this->tbSName->Size = System::Drawing::Size(100, 20);
			this->tbSName->TabIndex = 9;
			// 
			// tbSPassword1
			// 
			this->tbSPassword1->Location = System::Drawing::Point(125, 47);
			this->tbSPassword1->Name = L"tbSPassword1";
			this->tbSPassword1->Size = System::Drawing::Size(100, 20);
			this->tbSPassword1->TabIndex = 7;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(25, 101);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(42, 13);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Name*:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(25, 50);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 13);
			this->label20->TabIndex = 17;
			this->label20->Text = L"Password*:";
			// 
			// tbSPNumber
			// 
			this->tbSPNumber->Location = System::Drawing::Point(125, 315);
			this->tbSPNumber->Mask = L"000-000-000";
			this->tbSPNumber->Name = L"tbSPNumber";
			this->tbSPNumber->Size = System::Drawing::Size(100, 20);
			this->tbSPNumber->TabIndex = 16;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(25, 75);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(97, 13);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Repeat password*:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(25, 128);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(56, 13);
			this->label17->TabIndex = 33;
			this->label17->Text = L"Surname*:";
			// 
			// tbSSurname
			// 
			this->tbSSurname->Location = System::Drawing::Point(125, 124);
			this->tbSSurname->Name = L"tbSSurname";
			this->tbSSurname->Size = System::Drawing::Size(100, 20);
			this->tbSSurname->TabIndex = 10;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(25, 318);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(79, 13);
			this->label12->TabIndex = 44;
			this->label12->Text = L"Phone number:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(25, 214);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 13);
			this->label16->TabIndex = 35;
			this->label16->Text = L"City:";
			// 
			// tbSCity
			// 
			this->tbSCity->Location = System::Drawing::Point(125, 210);
			this->tbSCity->Name = L"tbSCity";
			this->tbSCity->Size = System::Drawing::Size(100, 20);
			this->tbSCity->TabIndex = 12;
			// 
			// tbSANumber
			// 
			this->tbSANumber->Location = System::Drawing::Point(125, 288);
			this->tbSANumber->Name = L"tbSANumber";
			this->tbSANumber->Size = System::Drawing::Size(100, 20);
			this->tbSANumber->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(25, 292);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 13);
			this->label11->TabIndex = 43;
			this->label11->Text = L"Apartment number:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(25, 28);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Login*:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(25, 266);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 13);
			this->label10->TabIndex = 41;
			this->label10->Text = L"Building number:";
			// 
			// tbSStreet
			// 
			this->tbSStreet->Location = System::Drawing::Point(125, 236);
			this->tbSStreet->Name = L"tbSStreet";
			this->tbSStreet->Size = System::Drawing::Size(100, 20);
			this->tbSStreet->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(25, 239);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 13);
			this->label13->TabIndex = 39;
			this->label13->Text = L"Street:";
			// 
			// bLSignin
			// 
			this->bLSignin->Location = System::Drawing::Point(28, 53);
			this->bLSignin->Name = L"bLSignin";
			this->bLSignin->Size = System::Drawing::Size(253, 23);
			this->bLSignin->TabIndex = 1;
			this->bLSignin->Text = L"Sign in";
			this->bLSignin->UseVisualStyleBackColor = true;
			this->bLSignin->Click += gcnew System::EventHandler(this, &Logowanie::bLSignin_Click);
			// 
			// bLLogin
			// 
			this->bLLogin->Location = System::Drawing::Point(28, 19);
			this->bLLogin->Name = L"bLLogin";
			this->bLLogin->Size = System::Drawing::Size(253, 23);
			this->bLLogin->TabIndex = 0;
			this->bLLogin->Text = L"Login";
			this->bLLogin->UseVisualStyleBackColor = true;
			this->bLLogin->Click += gcnew System::EventHandler(this, &Logowanie::bLLogin_Click);
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 543);
			this->Controls->Add(this->bLLogin);
			this->Controls->Add(this->bLSignin);
			this->Controls->Add(this->gbLSignin);
			this->Controls->Add(this->gbLLogin);
			this->Controls->Add(this->bClose);
			this->Name = L"Logowanie";
			this->Text = L"Biblioteka";
			this->Load += gcnew System::EventHandler(this, &Logowanie::Logowanie_Load);
			this->gbLLogin->ResumeLayout(false);
			this->gbLLogin->PerformLayout();
			this->gbLSignin->ResumeLayout(false);
			this->gbLSignin->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		/////////////////////////////////////////////////////////////
		/////////////////////
		/////////////////////		START
		/////////////////////
		/////////////////////////////////////////////////////////////
	private: System::Void Logowanie_Load(System::Object^  sender, System::EventArgs^  e) {
	}


	/////////////////////////////////////////////////////////////
	/////////////////////
	/////////////////////		ZMIENNE
	/////////////////////
	/////////////////////////////////////////////////////////////

	// konfiguracja bazy danych
	String^ config = L"datasource=127.0.0.3; port=3306; username=root; password=root123; database=bibliotekaProjekt";
	bool statusS = true; // potrzebne do widoku panelow
	bool statusL = true; // potrzebne do widoku panelow

	/////////////////////////////////////////////////////////////
	/////////////////////
	/////////////////////		PRZYCISKI
	/////////////////////
	/////////////////////////////////////////////////////////////


	//przycisk Close
	private: System::Void bAnuluj_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}


	// przycisk Sign in - zewnetrzny (otwiera groupBoxa)
	private: System::Void bLSignin_Click(System::Object^  sender, System::EventArgs^  e) {
		statusL = true;
		if (statusS) {
			Logowanie::Text = "Sign in";
			Logowanie::Width = 321;
			Logowanie::Height = 600;

			gbLSignin->Visible = true;
			gbLLogin->Visible = false;

			bClose->Location = System::Drawing::Point(28, 520);

			gbLSignin->Location = System::Drawing::Point(28, 100);


			statusS = false;
		}
		else {
			Logowanie::Text = "Biblioteka";
			Logowanie::Width = 321;
			Logowanie::Height = 163;

			gbLSignin->Visible = false;
			gbLLogin->Visible = false;

			bClose->Location = System::Drawing::Point(28, 87);

			statusS = true;
		}
		//status = false;
	}

	// przycisk Login - zewnetrzny (otwiera groupBoxa)
	private: System::Void bLLogin_Click(System::Object^  sender, System::EventArgs^  e) {
		statusS = true;
		if (statusL) {
			Logowanie::Text = "Login";
			Logowanie::Width = 321;
			Logowanie::Height = 350;

			gbLSignin->Visible = false;
			gbLLogin->Location = System::Drawing::Point(27, 140);
			gbLLogin->Visible = true;

			gbLLogin->Location = System::Drawing::Point(28, 100);
			bClose->Location = System::Drawing::Point(28, 270);



			statusL = false;
		}
		else {
			Logowanie::Text = "Biblioteka";
			Logowanie::Width = 321;
			Logowanie::Height = 163;

			gbLSignin->Visible = false;
			gbLLogin->Visible = false;

			bClose->Location = System::Drawing::Point(28, 87);

			statusL = true;
		}
		//status = true;
	}

	//przycisk Zaloguj
	private: System::Void bLogin_Click(System::Object^  sender, System::EventArgs^  e) {

		// tworzymy polaczenie z baza
		MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
		// tworzymy zapytanie i podajemy nazwe z polaczenia utworzana wczesniej 
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT idUzytkownika, czy_pracownik, czy_zablokowane FROM uzytkownik WHERE login = '" + tbLUser->Text + "' AND haslo = PASSWORD('" + tbLPassword->Text + "');", laczBaze);
		MySqlDataReader^ odczytanie;

		try {
			laczBaze->Open();
			odczytanie = zapytanie->ExecuteReader();

			if (odczytanie->Read()) {
				//pobieramy zalogowanego uzytkownika
				int id_uzytkownik = odczytanie->GetInt32(0);
				bool admin = odczytanie->GetBoolean(1);
				bool blokada = odczytanie->GetBoolean(2);

				if (blokada == 0) {
					this->Hide();
					// otwieramy okno Program
					Program^ program = gcnew Program(id_uzytkownik, admin, blokada);
					program->ShowDialog();
					this->Close(); // a logowanie zamykamy
				}
				else {
					MessageBox::Show("Your account is blocked.\nPlease contact with admin.", "Blocked", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				}
			}
			else {
				MessageBox::Show("Wrong login or password.");
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		laczBaze->Close();
	}

	//przycisk Sign in - wewnetrzny
	private: System::Void bSignin_Click(System::Object^  sender, System::EventArgs^  e) {
		if (tbSLogin->Text->Length <= 3 || tbSLogin->Text->Length > 15 ||
			tbSName->Text->Length < 3 || tbSName->Text->Length > 15 ||
			tbSSurname->Text->Length < 3 || tbSSurname->Text->Length > 40 ||
			tbSEmail->Text->Length < 6 || tbSEmail->Text->Length > 40 ||
			tbSCity->Text->Length > 40 ||
			tbSStreet->Text->Length > 40 ||
			tbSBNumber->Text->Length > 4 ||
			tbSANumber->Text->Length > 3 ||
			tbSPNumber->Text->Length > 11 ||
			tbSEmail->Text == "" ||
			tbSPassword1->Text->Length < 5 ||
			tbSPassword1->Text != tbSPassword2->Text) {
			MessageBox::Show("Uzupełnij dane!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			//laczymy z baza
			MySqlConnection^ laczBaze = gcnew MySqlConnection(config);
			MySqlCommand^ polecenie = laczBaze->CreateCommand();

			//tworze transakcje
			MySqlTransaction^ transakcja;
			laczBaze->Open();
			transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

			//hmmmm dzieki transakcja mozemy cofac cala akcje za pomoca ctrl-z
			polecenie->Connection = laczBaze;
			polecenie->Transaction = transakcja;

			try {

				// dodajemy uzytkownika
				polecenie->CommandText = "BEGIN; INSERT INTO uzytkownik(login, haslo, calkowita_l_wypozyczen) VALUES('"+ tbSLogin->Text +"', PASSWORD('" + tbSPassword1->Text + "'), 0); INSERT INTO dane(imie, nazwisko, email, nr_tel, miasto, ulica, nr_budynku, nr_lokalu, idUzytkownika) VALUES('" + tbSName->Text + "', '" + tbSSurname->Text + "', '" + tbSEmail->Text + "', '" + tbSPNumber->Text + "', '" + tbSCity->Text + "', '" + tbSStreet->Text + "', '" + tbSBNumber->Text + "', '" + tbSANumber->Text + "', LAST_INSERT_ID()); COMMIT;";

				polecenie->ExecuteNonQuery(); // wykonanie polecenia

				transakcja->Commit(); //zatwierdzenie jesli wsio ok
				MessageBox::Show("Dodano użytkownika. Możesz się zalogować.");
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
				transakcja->Rollback(); // jak cos poszlo nie tak to wycofaj all
			}
			laczBaze->Close();
		}
	}

};
}
