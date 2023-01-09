#pragma once
#include "Gestion_Client.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm_Client
	/// </summary>
	public ref class MyForm_Client : public System::Windows::Forms::Form
	{
	public:
		MyForm_Client(void)
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
		~MyForm_Client()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Gestion_Client^ client;
	private: System::Data::DataSet^ table;

	private: System::Windows::Forms::Button^ header;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private: int compteur = 0;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ btn_Prenom;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ btn_Nom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ btn_Batiment_Fact;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ btn_Numero_Batiment_Fact;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ btn_Etage_Fact;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ btn_Rue_Fact;
	private: System::Windows::Forms::TextBox^ btn_num_rue_Fact;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ btn_Ville_Fact;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ btn_Code_Postal_Fact;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ btn_Code_Postal_liv;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ btn_Ville_liv;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ btn_Num_rue_Liv;

	private: System::Windows::Forms::TextBox^ btn_Rue_Liv;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ btn_etage_liv;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ btn_num_bat_liv;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ btn_Batiment_Liv;

	private: System::Windows::Forms::TextBox^ btn_Date_Naissance;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ btn_Date1erAchat;
	private: System::Windows::Forms::Button^ btn_Update;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_showall;
	private: System::Windows::Forms::Button^ btn_Chercher;
	private: System::Windows::Forms::Button^ btn_del;
	private: System::Windows::Forms::Button^ btn_ajoute;




	private: System::ComponentModel::IContainer^ components;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_Nom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_Batiment_Fact = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_Numero_Batiment_Fact = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_Etage_Fact = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btn_Rue_Fact = (gcnew System::Windows::Forms::TextBox());
			this->btn_num_rue_Fact = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_Ville_Fact = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btn_Code_Postal_Fact = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btn_Code_Postal_liv = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btn_Ville_liv = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btn_Num_rue_Liv = (gcnew System::Windows::Forms::TextBox());
			this->btn_Rue_Liv = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btn_etage_liv = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btn_num_bat_liv = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->btn_Batiment_Liv = (gcnew System::Windows::Forms::TextBox());
			this->btn_Date_Naissance = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btn_Date1erAchat = (gcnew System::Windows::Forms::TextBox());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_showall = (gcnew System::Windows::Forms::Button());
			this->btn_Chercher = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->btn_ajoute = (gcnew System::Windows::Forms::Button());
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
			this->header->Text = L"Client";
			this->header->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(396, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::textBox1_TextChanged);
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
			this->label1->Click += gcnew System::EventHandler(this, &MyForm_Client::label1_Click);
			// 
			// btn_Prenom
			// 
			this->btn_Prenom->Location = System::Drawing::Point(511, 78);
			this->btn_Prenom->Name = L"btn_Prenom";
			this->btn_Prenom->Size = System::Drawing::Size(100, 22);
			this->btn_Prenom->TabIndex = 6;
			this->btn_Prenom->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::btn_Prenom_TextChanged);
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
			this->label2->Click += gcnew System::EventHandler(this, &MyForm_Client::label2_Click);
			// 
			// btn_Nom
			// 
			this->btn_Nom->Location = System::Drawing::Point(624, 78);
			this->btn_Nom->Name = L"btn_Nom";
			this->btn_Nom->Size = System::Drawing::Size(100, 22);
			this->btn_Nom->TabIndex = 8;
			this->btn_Nom->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::btn_Nom_TextChanged);
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
			this->label3->Click += gcnew System::EventHandler(this, &MyForm_Client::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(396, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(236, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Adresse de Facturation";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm_Client::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(770, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(215, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Adresse de Livraison";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm_Client::label5_Click);
			// 
			// btn_Batiment_Fact
			// 
			this->btn_Batiment_Fact->Location = System::Drawing::Point(569, 143);
			this->btn_Batiment_Fact->Name = L"btn_Batiment_Fact";
			this->btn_Batiment_Fact->Size = System::Drawing::Size(100, 22);
			this->btn_Batiment_Fact->TabIndex = 12;
			this->btn_Batiment_Fact->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::btn_Batiment_Fact_TextChanged);
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
			this->label6->Click += gcnew System::EventHandler(this, &MyForm_Client::label6_Click);
			// 
			// btn_Numero_Batiment_Fact
			// 
			this->btn_Numero_Batiment_Fact->Location = System::Drawing::Point(569, 180);
			this->btn_Numero_Batiment_Fact->Name = L"btn_Numero_Batiment_Fact";
			this->btn_Numero_Batiment_Fact->Size = System::Drawing::Size(100, 22);
			this->btn_Numero_Batiment_Fact->TabIndex = 14;
			this->btn_Numero_Batiment_Fact->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::textBox2_TextChanged);
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
			this->label7->Click += gcnew System::EventHandler(this, &MyForm_Client::label7_Click);
			// 
			// btn_Etage_Fact
			// 
			this->btn_Etage_Fact->Location = System::Drawing::Point(569, 213);
			this->btn_Etage_Fact->Name = L"btn_Etage_Fact";
			this->btn_Etage_Fact->Size = System::Drawing::Size(63, 22);
			this->btn_Etage_Fact->TabIndex = 16;
			this->btn_Etage_Fact->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::textBox3_TextChanged);
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
			this->label8->Click += gcnew System::EventHandler(this, &MyForm_Client::label8_Click);
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
			this->label9->Click += gcnew System::EventHandler(this, &MyForm_Client::label9_Click);
			// 
			// btn_Rue_Fact
			// 
			this->btn_Rue_Fact->Location = System::Drawing::Point(569, 247);
			this->btn_Rue_Fact->Name = L"btn_Rue_Fact";
			this->btn_Rue_Fact->Size = System::Drawing::Size(100, 22);
			this->btn_Rue_Fact->TabIndex = 19;
			this->btn_Rue_Fact->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::textBox4_TextChanged);
			// 
			// btn_num_rue_Fact
			// 
			this->btn_num_rue_Fact->Location = System::Drawing::Point(569, 281);
			this->btn_num_rue_Fact->Name = L"btn_num_rue_Fact";
			this->btn_num_rue_Fact->Size = System::Drawing::Size(91, 22);
			this->btn_num_rue_Fact->TabIndex = 20;
			this->btn_num_rue_Fact->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::textBox5_TextChanged);
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
			this->label10->Click += gcnew System::EventHandler(this, &MyForm_Client::label10_Click);
			// 
			// btn_Ville_Fact
			// 
			this->btn_Ville_Fact->Location = System::Drawing::Point(569, 320);
			this->btn_Ville_Fact->Name = L"btn_Ville_Fact";
			this->btn_Ville_Fact->Size = System::Drawing::Size(115, 22);
			this->btn_Ville_Fact->TabIndex = 22;
			this->btn_Ville_Fact->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::textBox6_TextChanged);
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
			this->label11->Click += gcnew System::EventHandler(this, &MyForm_Client::label11_Click);
			// 
			// btn_Code_Postal_Fact
			// 
			this->btn_Code_Postal_Fact->Location = System::Drawing::Point(569, 355);
			this->btn_Code_Postal_Fact->Name = L"btn_Code_Postal_Fact";
			this->btn_Code_Postal_Fact->Size = System::Drawing::Size(81, 22);
			this->btn_Code_Postal_Fact->TabIndex = 24;
			this->btn_Code_Postal_Fact->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::textBox7_TextChanged);
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
			this->label12->Click += gcnew System::EventHandler(this, &MyForm_Client::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(770, 350);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 25);
			this->label13->TabIndex = 39;
			this->label13->Text = L"Code Postal";
			// 
			// btn_Code_Postal_liv
			// 
			this->btn_Code_Postal_liv->Location = System::Drawing::Point(939, 355);
			this->btn_Code_Postal_liv->Name = L"btn_Code_Postal_liv";
			this->btn_Code_Postal_liv->Size = System::Drawing::Size(81, 22);
			this->btn_Code_Postal_liv->TabIndex = 38;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(770, 316);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 25);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Ville";
			// 
			// btn_Ville_liv
			// 
			this->btn_Ville_liv->Location = System::Drawing::Point(939, 320);
			this->btn_Ville_liv->Name = L"btn_Ville_liv";
			this->btn_Ville_liv->Size = System::Drawing::Size(115, 22);
			this->btn_Ville_liv->TabIndex = 36;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(770, 277);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(131, 25);
			this->label15->TabIndex = 35;
			this->label15->Text = L"Numero Rue";
			// 
			// btn_Num_rue_Liv
			// 
			this->btn_Num_rue_Liv->Location = System::Drawing::Point(939, 281);
			this->btn_Num_rue_Liv->Name = L"btn_Num_rue_Liv";
			this->btn_Num_rue_Liv->Size = System::Drawing::Size(91, 22);
			this->btn_Num_rue_Liv->TabIndex = 34;
			// 
			// btn_Rue_Liv
			// 
			this->btn_Rue_Liv->Location = System::Drawing::Point(939, 247);
			this->btn_Rue_Liv->Name = L"btn_Rue_Liv";
			this->btn_Rue_Liv->Size = System::Drawing::Size(100, 22);
			this->btn_Rue_Liv->TabIndex = 33;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(770, 243);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 25);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Rue";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(770, 209);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(68, 25);
			this->label17->TabIndex = 31;
			this->label17->Text = L"Etage";
			// 
			// btn_etage_liv
			// 
			this->btn_etage_liv->Location = System::Drawing::Point(939, 213);
			this->btn_etage_liv->Name = L"btn_etage_liv";
			this->btn_etage_liv->Size = System::Drawing::Size(63, 22);
			this->btn_etage_liv->TabIndex = 30;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(770, 176);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(157, 25);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Numero Appart";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm_Client::label18_Click);
			// 
			// btn_num_bat_liv
			// 
			this->btn_num_bat_liv->Location = System::Drawing::Point(939, 180);
			this->btn_num_bat_liv->Name = L"btn_num_bat_liv";
			this->btn_num_bat_liv->Size = System::Drawing::Size(100, 22);
			this->btn_num_bat_liv->TabIndex = 28;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(770, 144);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(96, 25);
			this->label19->TabIndex = 27;
			this->label19->Text = L"Batiment";
			// 
			// btn_Batiment_Liv
			// 
			this->btn_Batiment_Liv->Location = System::Drawing::Point(939, 143);
			this->btn_Batiment_Liv->Name = L"btn_Batiment_Liv";
			this->btn_Batiment_Liv->Size = System::Drawing::Size(100, 22);
			this->btn_Batiment_Liv->TabIndex = 26;
			// 
			// btn_Date_Naissance
			// 
			this->btn_Date_Naissance->Location = System::Drawing::Point(569, 391);
			this->btn_Date_Naissance->Name = L"btn_Date_Naissance";
			this->btn_Date_Naissance->Size = System::Drawing::Size(115, 22);
			this->btn_Date_Naissance->TabIndex = 40;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(396, 387);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(164, 25);
			this->label20->TabIndex = 41;
			this->label20->Text = L"Date Naissance";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(396, 423);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(156, 25);
			this->label21->TabIndex = 43;
			this->label21->Text = L"Date 1er Achat";
			// 
			// btn_Date1erAchat
			// 
			this->btn_Date1erAchat->Location = System::Drawing::Point(569, 427);
			this->btn_Date1erAchat->Name = L"btn_Date1erAchat";
			this->btn_Date1erAchat->Size = System::Drawing::Size(115, 22);
			this->btn_Date1erAchat->TabIndex = 42;
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
			this->btn_Update->Click += gcnew System::EventHandler(this, &MyForm_Client::btn_Update_Click);
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
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm_Client::dataGridView1_CellContentClick);
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
			this->btn_showall->Text = L"Afficher tout les clients";
			this->btn_showall->UseVisualStyleBackColor = false;
			this->btn_showall->Click += gcnew System::EventHandler(this, &MyForm_Client::btn_showall_Click);
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
			this->btn_Chercher->Click += gcnew System::EventHandler(this, &MyForm_Client::btn_Chercher_Click_1);
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
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm_Client::btn_del_Click);
			// 
			// btn_ajoute
			// 
			this->btn_ajoute->BackColor = System::Drawing::Color::Silver;
			this->btn_ajoute->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ajoute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ajoute->Location = System::Drawing::Point(80, 239);
			this->btn_ajoute->Name = L"btn_ajoute";
			this->btn_ajoute->Size = System::Drawing::Size(174, 63);
			this->btn_ajoute->TabIndex = 49;
			this->btn_ajoute->Text = L"Ajouter";
			this->btn_ajoute->UseVisualStyleBackColor = false;
			this->btn_ajoute->Click += gcnew System::EventHandler(this, &MyForm_Client::btn_ajoute_Click);
			// 
			// MyForm_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 754);
			this->Controls->Add(this->btn_ajoute);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->btn_showall);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_Chercher);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->btn_Date1erAchat);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->btn_Date_Naissance);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->btn_Code_Postal_liv);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->btn_Ville_liv);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->btn_Num_rue_Liv);
			this->Controls->Add(this->btn_Rue_Liv);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->btn_etage_liv);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->btn_num_bat_liv);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->btn_Batiment_Liv);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btn_Code_Postal_Fact);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btn_Ville_Fact);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_num_rue_Fact);
			this->Controls->Add(this->btn_Rue_Fact);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btn_Etage_Fact);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btn_Numero_Batiment_Fact);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_Batiment_Fact);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_Nom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_Prenom);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->header);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm_Client";
			this->Text = L"MyForm_Client";
			this->Load += gcnew System::EventHandler(this, &MyForm_Client::MyForm_Client_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Client_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Batiment_Fact_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Chercher_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void btn_Prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
		

	}
	private: System::Void btn_Chercher_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Refresh();

		client = gcnew Gestion_Client();

		table = client->show("Client", int::Parse(textBox1->Text));
		dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Client";
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{

	}
	private: System::Void btn_showall_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Refresh();

		client = gcnew Gestion_Client();

		table = client->showAll("Client");
		dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Client";
	}
	private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Refresh();

		client = gcnew Gestion_Client();

		client->del("Client", int::Parse(textBox1->Text));
	}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chercher_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void btn_ajoute_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView1->Refresh();

		client = gcnew Gestion_Client();

		client->add("Client", btn_Prenom->Text, btn_Nom->Text, btn_Date_Naissance->Text, btn_Batiment_Liv->Text, int::Parse(btn_num_bat_liv->Text), int::Parse(btn_etage_liv->Text), btn_Rue_Liv->Text, int::Parse(btn_Num_rue_Liv->Text), btn_Batiment_Fact->Text, int::Parse(btn_Numero_Batiment_Fact->Text), int::Parse(btn_Etage_Fact->Text), btn_Rue_Fact->Text, int::Parse(btn_num_rue_Fact->Text), btn_Date1erAchat->Text, btn_Ville_liv->Text, int::Parse(btn_Code_Postal_liv->Text), btn_Ville_Fact->Text, int::Parse(btn_Code_Postal_Fact->Text));

	}
};
}