#pragma once
#include "ServGestionPersonnel.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm_personnel
	/// </summary>
	public ref class MyForm_personnel : public System::Windows::Forms::Form
	{
	public:
		MyForm_personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm_personnel()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Svc::GestionPersonnel^ personnel;
	private: System::Data::DataSet^ table;

	private: System::Windows::Forms::Button^ header;
	private: System::Windows::Forms::TextBox^ text_ID;

	protected:


	private: int compteur = 0;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::TextBox^ text_Prenom;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ text_Nom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ text_Batiment;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ text_NumAppart;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ text_etage;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ text_NomRue;
	private: System::Windows::Forms::TextBox^ text_NumRue;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ text_Ville;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ text_CP;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ text_DateEmbauche;
	private: System::Windows::Forms::Label^ label20;


	private: System::Windows::Forms::Button^ btn_Update;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_showall;
	private: System::Windows::Forms::Button^ btn_Chercher;
	private: System::Windows::Forms::Button^ btn_del;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ text_Manager;


	private: System::ComponentModel::IContainer^ components;
	private: NS_Comp_Svc::GestionPersonnel^ Personnels;
	private: System::Data::DataSet^ oDs;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->header = (gcnew System::Windows::Forms::Button());
			this->text_ID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->text_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_Nom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_Batiment = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->text_NumAppart = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->text_etage = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->text_NomRue = (gcnew System::Windows::Forms::TextBox());
			this->text_NumRue = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->text_Ville = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->text_CP = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->text_DateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_showall = (gcnew System::Windows::Forms::Button());
			this->btn_Chercher = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->text_Manager = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// header
			// 
			this->header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->header->Dock = System::Windows::Forms::DockStyle::Top;
			this->header->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->header->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->header->Location = System::Drawing::Point(0, 0);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(1117, 47);
			this->header->TabIndex = 0;
			this->header->Text = L"Personnel";
			this->header->UseVisualStyleBackColor = false;
			this->header->Click += gcnew System::EventHandler(this, &MyForm_personnel::header_Click);
			// 
			// text_ID
			// 
			this->text_ID->Location = System::Drawing::Point(396, 78);
			this->text_ID->Name = L"text_ID";
			this->text_ID->Size = System::Drawing::Size(100, 22);
			this->text_ID->TabIndex = 1;
			this->text_ID->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(431, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm_personnel::label1_Click);
			// 
			// Ajouter
			// 
			this->Ajouter->BackColor = System::Drawing::Color::Silver;
			this->Ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter->Location = System::Drawing::Point(80, 235);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(174, 63);
			this->Ajouter->TabIndex = 5;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &MyForm_personnel::Ajouter_Click);
			// 
			// text_Prenom
			// 
			this->text_Prenom->Location = System::Drawing::Point(511, 78);
			this->text_Prenom->Name = L"text_Prenom";
			this->text_Prenom->Size = System::Drawing::Size(100, 22);
			this->text_Prenom->TabIndex = 6;
			this->text_Prenom->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::text_Prenom_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(516, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Prenom";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm_personnel::label2_Click);
			// 
			// text_Nom
			// 
			this->text_Nom->Location = System::Drawing::Point(624, 78);
			this->text_Nom->Name = L"text_Nom";
			this->text_Nom->Size = System::Drawing::Size(100, 22);
			this->text_Nom->TabIndex = 8;
			this->text_Nom->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::btn_Nom_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(648, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Nom";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm_personnel::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(484, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Adresse";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm_personnel::label4_Click);
			// 
			// text_Batiment
			// 
			this->text_Batiment->Location = System::Drawing::Point(569, 143);
			this->text_Batiment->Name = L"text_Batiment";
			this->text_Batiment->Size = System::Drawing::Size(100, 22);
			this->text_Batiment->TabIndex = 12;
			this->text_Batiment->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::btn_Batiment_Fact_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(396, 140);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Batiment";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm_personnel::label6_Click);
			// 
			// text_NumAppart
			// 
			this->text_NumAppart->Location = System::Drawing::Point(569, 180);
			this->text_NumAppart->Name = L"text_NumAppart";
			this->text_NumAppart->Size = System::Drawing::Size(100, 22);
			this->text_NumAppart->TabIndex = 14;
			this->text_NumAppart->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::textBox2_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(396, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 25);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Numero Appart";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm_personnel::label7_Click);
			// 
			// text_etage
			// 
			this->text_etage->Location = System::Drawing::Point(569, 213);
			this->text_etage->Name = L"text_etage";
			this->text_etage->Size = System::Drawing::Size(63, 22);
			this->text_etage->TabIndex = 16;
			this->text_etage->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::textBox3_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(396, 209);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 25);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Etage";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm_personnel::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(396, 243);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 25);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Rue";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm_personnel::label9_Click);
			// 
			// text_NomRue
			// 
			this->text_NomRue->Location = System::Drawing::Point(569, 247);
			this->text_NomRue->Name = L"text_NomRue";
			this->text_NomRue->Size = System::Drawing::Size(100, 22);
			this->text_NomRue->TabIndex = 19;
			this->text_NomRue->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::textBox4_TextChanged);
			// 
			// text_NumRue
			// 
			this->text_NumRue->Location = System::Drawing::Point(569, 281);
			this->text_NumRue->Name = L"text_NumRue";
			this->text_NumRue->Size = System::Drawing::Size(91, 22);
			this->text_NumRue->TabIndex = 20;
			this->text_NumRue->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::textBox5_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(396, 277);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(131, 25);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Numero Rue";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm_personnel::label10_Click);
			// 
			// text_Ville
			// 
			this->text_Ville->Location = System::Drawing::Point(569, 320);
			this->text_Ville->Name = L"text_Ville";
			this->text_Ville->Size = System::Drawing::Size(115, 22);
			this->text_Ville->TabIndex = 22;
			this->text_Ville->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::textBox6_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(396, 316);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 25);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Ville";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm_personnel::label11_Click);
			// 
			// text_CP
			// 
			this->text_CP->Location = System::Drawing::Point(569, 355);
			this->text_CP->Name = L"text_CP";
			this->text_CP->Size = System::Drawing::Size(81, 22);
			this->text_CP->TabIndex = 24;
			this->text_CP->TextChanged += gcnew System::EventHandler(this, &MyForm_personnel::textBox7_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(396, 350);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 25);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Code Postal";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm_personnel::label12_Click);
			// 
			// text_DateEmbauche
			// 
			this->text_DateEmbauche->Location = System::Drawing::Point(569, 391);
			this->text_DateEmbauche->Name = L"text_DateEmbauche";
			this->text_DateEmbauche->Size = System::Drawing::Size(115, 22);
			this->text_DateEmbauche->TabIndex = 40;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(396, 387);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(165, 25);
			this->label20->TabIndex = 41;
			this->label20->Text = L"Date Embauche";
			// 
			// btn_Update
			// 
			this->btn_Update->BackColor = System::Drawing::Color::Silver;
			this->btn_Update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Update->Location = System::Drawing::Point(80, 313);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(174, 63);
			this->btn_Update->TabIndex = 44;
			this->btn_Update->Text = L"Modifier";
			this->btn_Update->UseVisualStyleBackColor = false;
			this->btn_Update->Click += gcnew System::EventHandler(this, &MyForm_personnel::btn_Update_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 482);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1093, 260);
			this->dataGridView1->TabIndex = 46;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm_personnel::dataGridView1_CellContentClick);
			// 
			// btn_showall
			// 
			this->btn_showall->BackColor = System::Drawing::Color::Silver;
			this->btn_showall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_showall->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_showall->Location = System::Drawing::Point(80, 392);
			this->btn_showall->Name = L"btn_showall";
			this->btn_showall->Size = System::Drawing::Size(174, 63);
			this->btn_showall->TabIndex = 47;
			this->btn_showall->Text = L"Afficher tout les personnels";
			this->btn_showall->UseVisualStyleBackColor = false;
			this->btn_showall->Click += gcnew System::EventHandler(this, &MyForm_personnel::btn_showall_Click);
			// 
			// btn_Chercher
			// 
			this->btn_Chercher->BackColor = System::Drawing::Color::Silver;
			this->btn_Chercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Chercher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Chercher->Location = System::Drawing::Point(80, 75);
			this->btn_Chercher->Name = L"btn_Chercher";
			this->btn_Chercher->Size = System::Drawing::Size(174, 63);
			this->btn_Chercher->TabIndex = 45;
			this->btn_Chercher->Text = L"Afficher";
			this->btn_Chercher->UseVisualStyleBackColor = false;
			this->btn_Chercher->Click += gcnew System::EventHandler(this, &MyForm_personnel::btn_Chercher_Click_1);
			// 
			// btn_del
			// 
			this->btn_del->BackColor = System::Drawing::Color::Silver;
			this->btn_del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_del->Location = System::Drawing::Point(80, 153);
			this->btn_del->Name = L"btn_del";
			this->btn_del->Size = System::Drawing::Size(174, 63);
			this->btn_del->TabIndex = 48;
			this->btn_del->Text = L"Supprimer";
			this->btn_del->UseVisualStyleBackColor = false;
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm_personnel::btn_del_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(396, 421);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 25);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Manager";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm_personnel::label5_Click_1);
			// 
			// text_Manager
			// 
			this->text_Manager->Location = System::Drawing::Point(569, 425);
			this->text_Manager->Name = L"text_Manager";
			this->text_Manager->Size = System::Drawing::Size(115, 22);
			this->text_Manager->TabIndex = 50;
			// 
			// MyForm_personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 754);
			this->Controls->Add(this->text_Manager);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->btn_showall);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_Chercher);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->text_DateEmbauche);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->text_CP);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->text_Ville);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->text_NumRue);
			this->Controls->Add(this->text_NomRue);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->text_etage);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->text_NumAppart);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->text_Batiment);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->text_Nom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text_Prenom);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_ID);
			this->Controls->Add(this->header);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm_personnel";
			this->Text = L"MyForm_personnel";
			this->Load += gcnew System::EventHandler(this, &MyForm_personnel::MyForm_personnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_personnel_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Personnels = gcnew NS_Comp_Svc::GestionPersonnel();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Batiment_Fact_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Chercher_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_Prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{

		if (compteur < 36)
		{
			this->Width += 20;
			compteur++;
		}

	}
	private: System::Void btn_Chercher_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Refresh();

		personnel = gcnew NS_Comp_Svc::GestionPersonnel();

		table = personnel->showPersonnel("Personnel", int::Parse(text_ID->Text));
		dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Personnel";
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{

	}
	private: System::Void btn_showall_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Refresh();

		/*personnel = gcnew NS_Comp_Svc::GestionPersonnel();

		table = personnel->showAll("Personnel");*/
		this->oDs = this->Personnels->showAll("Personnel");
		/*dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Personnel";*/
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Personnel";
	}
	private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Refresh();

		//personnel = gcnew NS_Comp_Svc::GestionPersonnel();

		Personnels->deletePersonnel(int::Parse(text_ID->Text));
	}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Refresh();

		//personnel = gcnew NS_Comp_Svc::GestionPersonnel();
		if (text_Batiment->Text == "") {
			text_Batiment->Text = "NULL";
		}
		if (text_NumAppart->Text == "") {
			text_NumAppart->Text = "0";
		}
		if (text_etage->Text == "") {
			text_etage->Text = "0";
		}

		this->Personnels->addPersonnel(text_Ville->Text, int::Parse(text_CP->Text), text_Batiment->Text, int::Parse(text_NumAppart->Text), int::Parse(text_etage->Text), text_NomRue->Text, int::Parse(text_NumRue->Text), text_DateEmbauche->Text, text_Manager->Text, text_Prenom->Text, text_Nom->Text);

	}
	private: System::Void btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Refresh();

		//personnel = gcnew NS_Comp_Svc::GestionPersonnel();

		this->Personnels->updatePersonnel(int::Parse(text_ID->Text), text_Ville->Text, int::Parse(text_CP->Text), text_Batiment->Text, int::Parse(text_NumAppart->Text), int::Parse(text_etage->Text), text_NomRue->Text, int::Parse(text_NumRue->Text), text_DateEmbauche->Text, text_Prenom->Text, text_Nom->Text, text_Manager->Text);
	}
	private: System::Void header_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};

}