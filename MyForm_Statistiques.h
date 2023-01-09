#pragma once
#include "ServStatistiques.h"
#include <iostream>

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm_Statistiques
	/// </summary>
	public ref class MyForm_Statistiques : public System::Windows::Forms::Form
	{
	public:
		MyForm_Statistiques(void)
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
		~MyForm_Statistiques()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Svc::ServStatistiques^ statistiques;
	private: System::Data::DataSet^ table;


	protected:




	private: System::Windows::Forms::Button^ header;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->header->TabIndex = 50;
			this->header->Text = L"Statistiques";
			this->header->UseVisualStyleBackColor = false;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Top 10 des articles les plus vendus", L"Top 10 des articles les moins vendus",
					L"Montant total des achats pour un client", L"Chiffre d\'affaires sur 1 mois", L"Panier moyen après remise (need Remise)*", L"Valeur d\'achat du stock",
					L"Valeur commerciale du stock (need TVA)*", L"Seuil de réapprovisionnement"
			});
			this->comboBox1->Location = System::Drawing::Point(288, 166);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(672, 24);
			this->comboBox1->TabIndex = 59;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm_Statistiques::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(89, 320);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(933, 321);
			this->dataGridView1->TabIndex = 60;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"5,5%", L"10%", L"20%" });
			this->comboBox2->Location = System::Drawing::Point(148, 166);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(108, 24);
			this->comboBox2->TabIndex = 61;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm_Statistiques::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(184, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 16);
			this->label2->TabIndex = 62;
			this->label2->Text = L"TVA";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"5%", L"6%" });
			this->comboBox3->Location = System::Drawing::Point(148, 249);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(108, 24);
			this->comboBox3->TabIndex = 63;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm_Statistiques::comboBox3_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(177, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 64;
			this->label3->Text = L"Remise";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm_Statistiques::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Location = System::Drawing::Point(288, 249);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(672, 15);
			this->textBox1->TabIndex = 65;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(579, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 16);
			this->label4->TabIndex = 66;
			this->label4->Text = L"Erreur";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm_Statistiques::label4_Click);
			// 
			// MyForm_Statistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 754);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->header);
			this->Name = L"MyForm_Statistiques";
			this->Text = L"MyForm_Statistiques";
			this->Load += gcnew System::EventHandler(this, &MyForm_Statistiques::MyForm_Catalogue_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Chercher_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*dataGridView1->Refresh();

		statistiques = gcnew NS_Comp_Svc::ServStatistiques();

		table = statistiques->show("Article", this->comboBox1->SelectedIndex+1);
		dataGridView1->DataSource = table;
		dataGridView1->DataMember = "Article";*/

	}
	private: System::Void MyForm_Catalogue_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   float TVA;
		   float Remise;
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		statistiques = gcnew NS_Comp_Svc::ServStatistiques();

		if ((int)(this->comboBox1->SelectedIndex == 0)) {
			dataGridView1->DataSource = this->statistiques->showTop10plus();
			dataGridView1->Refresh();
			dataGridView1->DataMember = "stats";
		}
		if ((int)(this->comboBox1->SelectedIndex == 1)) {
			dataGridView1->DataSource = this->statistiques->showTop10moins();
			dataGridView1->Refresh();
			dataGridView1->DataMember = "stats";
		}
		if ((int)(this->comboBox1->SelectedIndex == 2)) {
			dataGridView1->Refresh();
			dataGridView1->DataSource = this->statistiques->showMontantTotal();
			dataGridView1->DataMember = "stats";
		}
		if ((int)(this->comboBox1->SelectedIndex == 3)) {
			dataGridView1->Refresh();
			dataGridView1->DataSource = this->statistiques->showChiffreAffaires();
			dataGridView1->DataMember = "stats";
		}
		if ((int)(this->comboBox1->SelectedIndex == 4)) {
			this->textBox1->Text = "";
			if (this->Remise == 0) {
				this->textBox1->Text = "Erreur, veuillez rentrer une remise";
			}
			else {
				dataGridView1->Refresh();
				dataGridView1->DataSource = this->statistiques->showPanierMoyen(Remise);
				dataGridView1->DataMember = "stats";
			}
		}
		if ((int)(this->comboBox1->SelectedIndex == 5)) {
			dataGridView1->Refresh();
			dataGridView1->DataSource = this->statistiques->showValeurAchatStock();
			dataGridView1->DataMember = "stats";
		}
		if ((int)(this->comboBox1->SelectedIndex == 6)) {
			this->textBox1->Text = "";
			if (TVA == 0) {
				this->textBox1->Text = "Erreur, veuillez rentrer une TVA";
			}
			else {
				dataGridView1->Refresh();
				dataGridView1->DataSource = this->statistiques->showValeurCommercialeStock(TVA);
				dataGridView1->DataMember = "stats";
			}
		}
		if ((int)(this->comboBox1->SelectedIndex == 7)) {
			dataGridView1->Refresh();
			dataGridView1->DataSource = this->statistiques->showSeuilReapprovisionnement();
			dataGridView1->DataMember = "stats";
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((int)(this->comboBox2->SelectedIndex == 0)) {
			TVA = 0;
		}
		if ((int)(this->comboBox2->SelectedIndex == 1)) {
			TVA = 1.055;
		}
		if ((int)(this->comboBox2->SelectedIndex == 2)) {
			TVA = 1.1;
		}
		if ((int)(this->comboBox2->SelectedIndex == 3)) {
			TVA = 1.2;
		}
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((int)(this->comboBox3->SelectedIndex == 0)) {
			Remise = 0;
		}
		if ((int)(this->comboBox3->SelectedIndex == 1)) {
			Remise = 0.95;
		}
		if ((int)(this->comboBox3->SelectedIndex == 2)) {
			Remise = 0.94;
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

