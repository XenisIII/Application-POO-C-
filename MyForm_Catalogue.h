#pragma once
#include "GestionCatalogue.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm_Catalogue
	/// </summary>
	public ref class MyForm_Catalogue : public System::Windows::Forms::Form
	{
	public:
		MyForm_Catalogue(void)
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
		~MyForm_Catalogue()
		{
			if (components)
			{
				delete components;
			}
		}

	private: GestionCatalogue^ catalogue;
	private: System::Data::DataSet^ table;

	private: System::Windows::Forms::Button^ btn_Add;
	protected:
	private: System::Windows::Forms::Button^ btn_del;
	private: System::Windows::Forms::Button^ btn_showall;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_Chercher;
	private: System::Windows::Forms::Button^ btn_Update;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ text_Nature;

	private: System::Windows::Forms::Button^ header;
	private: System::Windows::Forms::TextBox^ text_PrixHT;

	private: System::Windows::Forms::TextBox^ text_Nom;
	private: System::Windows::Forms::TextBox^ text_Quantite;
	private: System::Windows::Forms::TextBox^ text_Couleur;



	private: System::Windows::Forms::TextBox^ text_Seuil;

	private: System::Windows::Forms::TextBox^ text_ID;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ text_TVA;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->btn_showall = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Chercher = (gcnew System::Windows::Forms::Button());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text_Nature = (gcnew System::Windows::Forms::TextBox());
			this->header = (gcnew System::Windows::Forms::Button());
			this->text_PrixHT = (gcnew System::Windows::Forms::TextBox());
			this->text_Nom = (gcnew System::Windows::Forms::TextBox());
			this->text_Quantite = (gcnew System::Windows::Forms::TextBox());
			this->text_Couleur = (gcnew System::Windows::Forms::TextBox());
			this->text_Seuil = (gcnew System::Windows::Forms::TextBox());
			this->text_ID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->text_TVA = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_Add
			// 
			this->btn_Add->BackColor = System::Drawing::Color::Silver;
			this->btn_Add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Add->Location = System::Drawing::Point(74, 237);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(174, 63);
			this->btn_Add->TabIndex = 58;
			this->btn_Add->Text = L"Ajouter";
			this->btn_Add->UseVisualStyleBackColor = false;
			this->btn_Add->Click += gcnew System::EventHandler(this, &MyForm_Catalogue::btn_Add_Click);
			// 
			// btn_del
			// 
			this->btn_del->BackColor = System::Drawing::Color::Silver;
			this->btn_del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_del->Location = System::Drawing::Point(74, 159);
			this->btn_del->Name = L"btn_del";
			this->btn_del->Size = System::Drawing::Size(174, 63);
			this->btn_del->TabIndex = 57;
			this->btn_del->Text = L"Supprimer";
			this->btn_del->UseVisualStyleBackColor = false;
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm_Catalogue::btn_del_Click);
			// 
			// btn_showall
			// 
			this->btn_showall->BackColor = System::Drawing::Color::Silver;
			this->btn_showall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_showall->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_showall->Location = System::Drawing::Point(74, 393);
			this->btn_showall->Name = L"btn_showall";
			this->btn_showall->Size = System::Drawing::Size(174, 63);
			this->btn_showall->TabIndex = 56;
			this->btn_showall->Text = L"Afficher tout le catalogue";
			this->btn_showall->UseVisualStyleBackColor = false;
			this->btn_showall->Click += gcnew System::EventHandler(this, &MyForm_Catalogue::btn_showall_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 489);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1093, 259);
			this->dataGridView1->TabIndex = 55;
			// 
			// btn_Chercher
			// 
			this->btn_Chercher->BackColor = System::Drawing::Color::Silver;
			this->btn_Chercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Chercher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Chercher->Location = System::Drawing::Point(74, 81);
			this->btn_Chercher->Name = L"btn_Chercher";
			this->btn_Chercher->Size = System::Drawing::Size(174, 63);
			this->btn_Chercher->TabIndex = 54;
			this->btn_Chercher->Text = L"Afficher";
			this->btn_Chercher->UseVisualStyleBackColor = false;
			this->btn_Chercher->Click += gcnew System::EventHandler(this, &MyForm_Catalogue::btn_Chercher_Click);
			// 
			// btn_Update
			// 
			this->btn_Update->BackColor = System::Drawing::Color::Silver;
			this->btn_Update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Update->Location = System::Drawing::Point(74, 315);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(174, 63);
			this->btn_Update->TabIndex = 53;
			this->btn_Update->Text = L"Modifier";
			this->btn_Update->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(367, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 25);
			this->label1->TabIndex = 52;
			this->label1->Text = L"ID";
			// 
			// text_Nature
			// 
			this->text_Nature->Location = System::Drawing::Point(654, 193);
			this->text_Nature->Name = L"text_Nature";
			this->text_Nature->Size = System::Drawing::Size(100, 22);
			this->text_Nature->TabIndex = 51;
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
			this->header->TabIndex = 50;
			this->header->Text = L"Catalogue";
			this->header->UseVisualStyleBackColor = false;
			this->header->Click += gcnew System::EventHandler(this, &MyForm_Catalogue::header_Click);
			// 
			// text_PrixHT
			// 
			this->text_PrixHT->Location = System::Drawing::Point(654, 332);
			this->text_PrixHT->Name = L"text_PrixHT";
			this->text_PrixHT->Size = System::Drawing::Size(100, 22);
			this->text_PrixHT->TabIndex = 59;
			this->text_PrixHT->TextChanged += gcnew System::EventHandler(this, &MyForm_Catalogue::textBox2_TextChanged);
			// 
			// text_Nom
			// 
			this->text_Nom->Location = System::Drawing::Point(654, 159);
			this->text_Nom->Name = L"text_Nom";
			this->text_Nom->Size = System::Drawing::Size(100, 22);
			this->text_Nom->TabIndex = 60;
			// 
			// text_Quantite
			// 
			this->text_Quantite->Location = System::Drawing::Point(654, 229);
			this->text_Quantite->Name = L"text_Quantite";
			this->text_Quantite->Size = System::Drawing::Size(100, 22);
			this->text_Quantite->TabIndex = 61;
			// 
			// text_Couleur
			// 
			this->text_Couleur->Location = System::Drawing::Point(654, 299);
			this->text_Couleur->Name = L"text_Couleur";
			this->text_Couleur->Size = System::Drawing::Size(100, 22);
			this->text_Couleur->TabIndex = 62;
			// 
			// text_Seuil
			// 
			this->text_Seuil->Location = System::Drawing::Point(654, 264);
			this->text_Seuil->Name = L"text_Seuil";
			this->text_Seuil->Size = System::Drawing::Size(100, 22);
			this->text_Seuil->TabIndex = 63;
			// 
			// text_ID
			// 
			this->text_ID->Location = System::Drawing::Point(654, 127);
			this->text_ID->Name = L"text_ID";
			this->text_ID->Size = System::Drawing::Size(100, 22);
			this->text_ID->TabIndex = 64;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(367, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 25);
			this->label2->TabIndex = 65;
			this->label2->Text = L"Nature";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(367, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 25);
			this->label3->TabIndex = 66;
			this->label3->Text = L"Quantité stock";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(367, 265);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(256, 25);
			this->label4->TabIndex = 67;
			this->label4->Text = L"Seuil réaprovisionnement";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(367, 300);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 25);
			this->label5->TabIndex = 68;
			this->label5->Text = L"Couleur";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(367, 333);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 25);
			this->label6->TabIndex = 69;
			this->label6->Text = L"Prix HT";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm_Catalogue::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(367, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 25);
			this->label7->TabIndex = 70;
			this->label7->Text = L"Nom";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(367, 365);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 25);
			this->label8->TabIndex = 72;
			this->label8->Text = L"TVA";
			// 
			// text_TVA
			// 
			this->text_TVA->Location = System::Drawing::Point(654, 364);
			this->text_TVA->Name = L"text_TVA";
			this->text_TVA->Size = System::Drawing::Size(100, 22);
			this->text_TVA->TabIndex = 71;
			// 
			// MyForm_Catalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 754);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->text_TVA);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text_ID);
			this->Controls->Add(this->text_Seuil);
			this->Controls->Add(this->text_Couleur);
			this->Controls->Add(this->text_Quantite);
			this->Controls->Add(this->text_Nom);
			this->Controls->Add(this->text_PrixHT);
			this->Controls->Add(this->btn_Add);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->btn_showall);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_Chercher);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_Nature);
			this->Controls->Add(this->header);
			this->Name = L"MyForm_Catalogue";
			this->Text = L"MyForm_Catalogue";
			this->Load += gcnew System::EventHandler(this, &MyForm_Catalogue::MyForm_Catalogue_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Chercher_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Refresh();

		catalogue = gcnew GestionCatalogue();

		table = catalogue->show("Article", int::Parse(text_ID->Text));
		dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Article";
	}
	private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Refresh();

		catalogue = gcnew GestionCatalogue();

		table = catalogue->del("Article", int::Parse(text_ID->Text));
		dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Article";
	}


	private: System::Void btn_Add_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void btn_showall_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Refresh();

		catalogue = gcnew GestionCatalogue();

		table = catalogue->showAll("Article");
		dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Article";
	}
	private: System::Void MyForm_Catalogue_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void header_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}