#pragma once
#include "GestionCommande.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm_Commande
	/// </summary>
	public ref class MyForm_Commande : public System::Windows::Forms::Form
	{
	public:
		MyForm_Commande(void)
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
		~MyForm_Commande()
		{
			if (components)
			{
				delete components;
			}
		}

	private: GestionCommande^ commande;
	private: System::Data::DataSet^ table;
	
	private: System::Windows::Forms::Button^ header;
	private: System::Windows::Forms::Button^ btn_Add;
	private: System::Windows::Forms::Button^ btn_del;
	private: System::Windows::Forms::Button^ btn_showall;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_Chercher;
	private: System::Windows::Forms::Button^ btn_Update;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ text_ID;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ IDClient;
	private: System::Windows::Forms::TextBox^ Payment;
	private: System::Windows::Forms::TextBox^ REF;
	private: System::Windows::Forms::TextBox^ DATEE;
	private: System::Windows::Forms::TextBox^ DATEL;
	private: System::Windows::Forms::TextBox^ DATEP;
	private: System::Windows::Forms::TextBox^ Article;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ quantite;






	protected:

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
			this->header = (gcnew System::Windows::Forms::Button());
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->btn_showall = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Chercher = (gcnew System::Windows::Forms::Button());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text_ID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->IDClient = (gcnew System::Windows::Forms::TextBox());
			this->Payment = (gcnew System::Windows::Forms::TextBox());
			this->REF = (gcnew System::Windows::Forms::TextBox());
			this->DATEE = (gcnew System::Windows::Forms::TextBox());
			this->DATEL = (gcnew System::Windows::Forms::TextBox());
			this->DATEP = (gcnew System::Windows::Forms::TextBox());
			this->Article = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->quantite = (gcnew System::Windows::Forms::TextBox());
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
			this->header->TabIndex = 1;
			this->header->Text = L"Commande";
			this->header->UseVisualStyleBackColor = false;
			this->header->Click += gcnew System::EventHandler(this, &MyForm_Commande::header_Click);
			// 
			// btn_Add
			// 
			this->btn_Add->BackColor = System::Drawing::Color::Silver;
			this->btn_Add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Add->Location = System::Drawing::Point(65, 235);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(174, 63);
			this->btn_Add->TabIndex = 57;
			this->btn_Add->Text = L"Ajouter";
			this->btn_Add->UseVisualStyleBackColor = false;
			this->btn_Add->Click += gcnew System::EventHandler(this, &MyForm_Commande::btn_Add_Click);
			// 
			// btn_del
			// 
			this->btn_del->BackColor = System::Drawing::Color::Silver;
			this->btn_del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_del->Location = System::Drawing::Point(65, 158);
			this->btn_del->Name = L"btn_del";
			this->btn_del->Size = System::Drawing::Size(174, 63);
			this->btn_del->TabIndex = 56;
			this->btn_del->Text = L"Supprimer";
			this->btn_del->UseVisualStyleBackColor = false;
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm_Commande::btn_del_Click);
			// 
			// btn_showall
			// 
			this->btn_showall->BackColor = System::Drawing::Color::Silver;
			this->btn_showall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_showall->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_showall->Location = System::Drawing::Point(65, 388);
			this->btn_showall->Name = L"btn_showall";
			this->btn_showall->Size = System::Drawing::Size(174, 63);
			this->btn_showall->TabIndex = 55;
			this->btn_showall->Text = L"Afficher tout les Articles";
			this->btn_showall->UseVisualStyleBackColor = false;
			this->btn_showall->Click += gcnew System::EventHandler(this, &MyForm_Commande::btn_showall_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 475);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1093, 267);
			this->dataGridView1->TabIndex = 54;
			// 
			// btn_Chercher
			// 
			this->btn_Chercher->BackColor = System::Drawing::Color::Silver;
			this->btn_Chercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Chercher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Chercher->Location = System::Drawing::Point(65, 82);
			this->btn_Chercher->Name = L"btn_Chercher";
			this->btn_Chercher->Size = System::Drawing::Size(174, 63);
			this->btn_Chercher->TabIndex = 53;
			this->btn_Chercher->Text = L"Afficher";
			this->btn_Chercher->UseVisualStyleBackColor = false;
			this->btn_Chercher->Click += gcnew System::EventHandler(this, &MyForm_Commande::btn_Chercher_Click);
			// 
			// btn_Update
			// 
			this->btn_Update->BackColor = System::Drawing::Color::Silver;
			this->btn_Update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Update->Location = System::Drawing::Point(65, 311);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(174, 63);
			this->btn_Update->TabIndex = 52;
			this->btn_Update->Text = L"Modifier";
			this->btn_Update->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(374, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 25);
			this->label1->TabIndex = 51;
			this->label1->Text = L"ID";
			// 
			// text_ID
			// 
			this->text_ID->Location = System::Drawing::Point(578, 130);
			this->text_ID->Name = L"text_ID";
			this->text_ID->Size = System::Drawing::Size(100, 22);
			this->text_ID->TabIndex = 50;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(374, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 25);
			this->label2->TabIndex = 58;
			this->label2->Text = L"Moyen Paiement";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm_Commande::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(374, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 25);
			this->label3->TabIndex = 59;
			this->label3->Text = L"Référence";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(374, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 25);
			this->label4->TabIndex = 60;
			this->label4->Text = L"Date émission";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(374, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 25);
			this->label5->TabIndex = 61;
			this->label5->Text = L"Date livraison";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(374, 313);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(180, 25);
			this->label6->TabIndex = 62;
			this->label6->Text = L"Date fin paiement";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(374, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 25);
			this->label7->TabIndex = 63;
			this->label7->Text = L"Client";
			// 
			// IDClient
			// 
			this->IDClient->Location = System::Drawing::Point(578, 158);
			this->IDClient->Name = L"IDClient";
			this->IDClient->Size = System::Drawing::Size(100, 22);
			this->IDClient->TabIndex = 64;
			// 
			// Payment
			// 
			this->Payment->Location = System::Drawing::Point(578, 188);
			this->Payment->Name = L"Payment";
			this->Payment->Size = System::Drawing::Size(100, 22);
			this->Payment->TabIndex = 65;
			// 
			// REF
			// 
			this->REF->Location = System::Drawing::Point(578, 220);
			this->REF->Name = L"REF";
			this->REF->Size = System::Drawing::Size(100, 22);
			this->REF->TabIndex = 66;
			// 
			// DATEE
			// 
			this->DATEE->Location = System::Drawing::Point(578, 251);
			this->DATEE->Name = L"DATEE";
			this->DATEE->Size = System::Drawing::Size(100, 22);
			this->DATEE->TabIndex = 67;
			// 
			// DATEL
			// 
			this->DATEL->Location = System::Drawing::Point(578, 283);
			this->DATEL->Name = L"DATEL";
			this->DATEL->Size = System::Drawing::Size(100, 22);
			this->DATEL->TabIndex = 68;
			// 
			// DATEP
			// 
			this->DATEP->Location = System::Drawing::Point(578, 317);
			this->DATEP->Name = L"DATEP";
			this->DATEP->Size = System::Drawing::Size(100, 22);
			this->DATEP->TabIndex = 69;
			// 
			// Article
			// 
			this->Article->Location = System::Drawing::Point(578, 352);
			this->Article->Name = L"Article";
			this->Article->Size = System::Drawing::Size(100, 22);
			this->Article->TabIndex = 70;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(374, 349);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 25);
			this->label8->TabIndex = 71;
			this->label8->Text = L"Article";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(374, 388);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 25);
			this->label9->TabIndex = 72;
			this->label9->Text = L"Quantite";
			// 
			// quantite
			// 
			this->quantite->Location = System::Drawing::Point(578, 392);
			this->quantite->Name = L"quantite";
			this->quantite->Size = System::Drawing::Size(100, 22);
			this->quantite->TabIndex = 73;
			// 
			// MyForm_Commande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 754);
			this->Controls->Add(this->quantite);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Article);
			this->Controls->Add(this->DATEP);
			this->Controls->Add(this->DATEL);
			this->Controls->Add(this->DATEE);
			this->Controls->Add(this->REF);
			this->Controls->Add(this->Payment);
			this->Controls->Add(this->IDClient);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_Add);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->btn_showall);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_Chercher);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_ID);
			this->Controls->Add(this->header);
			this->Name = L"MyForm_Commande";
			this->Text = L"MyForm_Commande";
			this->Load += gcnew System::EventHandler(this, &MyForm_Commande::MyForm_Commande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void header_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Chercher_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView1->Refresh();

		commande = gcnew GestionCommande();

		table = commande->show("Article", int::Parse(text_ID->Text));
		dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Article";
	}

	private: System::Void btn_Update_Click(System::Object^ sender, System::EventArgs^)
	{
		commande = gcnew GestionCommande();
		commande->update("Commande", int::Parse(text_ID->Text),REF->Text, DATEP->Text, DATEE->Text, DATEL->Text,  int::Parse(IDClient->Text), int::Parse(Article->Text), int::Parse(quantite->Text));
	}
		
	private: System::Void btn_showall_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	
		dataGridView1->Refresh();

		commande = gcnew GestionCommande();

		table = commande->showAll("Commande");
		dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Commande";
	
	}
		  
	private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		commande = gcnew GestionCommande();
		commande->del("Commande", int::Parse(text_ID->Text));
	}
		   
	private: System::Void MyForm_Commande_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void btn_Add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		commande = gcnew GestionCommande();
		commande->add("Commande", REF->Text, DATEP->Text, DATEE->Text, DATEL->Text, int::Parse(IDClient->Text), int::Parse(Article->Text), int::Parse(quantite->Text));
	}
};
}