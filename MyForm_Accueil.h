#pragma once
#include "MyForm_Client.h"
#include "MyForm_Personnel.h"
#include "MyForm_Commande.h"
#include "MyForm_Catalogue.h"
#include "MyForm_Statistiques.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm_Accueil
	/// </summary>
	public ref class MyForm_Accueil : public System::Windows::Forms::Form
	{
	public:
		MyForm_Accueil(void)
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
		~MyForm_Accueil()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:









	private: System::Windows::Forms::Button^ btn_Statistiques;
	private: System::Windows::Forms::Button^ btn_Close;
	private: System::Windows::Forms::Button^ btn_Client;

	private: MyForm_Client^ client;
	private: MyForm_personnel^ personnel;
	private: MyForm_Commande^ Commande;
	private: MyForm_Catalogue^ catalogue;
	private: MyForm_Statistiques^ statistiques;
	private: System::Windows::Forms::Button^ btn_Personnel;
	private: System::Windows::Forms::Button^ btn_Commande;
	private: System::Windows::Forms::Button^ btn_Catalogue;






	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_Statistiques = (gcnew System::Windows::Forms::Button());
			this->btn_Close = (gcnew System::Windows::Forms::Button());
			this->btn_Client = (gcnew System::Windows::Forms::Button());
			this->btn_Personnel = (gcnew System::Windows::Forms::Button());
			this->btn_Commande = (gcnew System::Windows::Forms::Button());
			this->btn_Catalogue = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_Statistiques
			// 
			this->btn_Statistiques->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_Statistiques->Location = System::Drawing::Point(69, 300);
			this->btn_Statistiques->MaximumSize = System::Drawing::Size(250, 52);
			this->btn_Statistiques->MinimumSize = System::Drawing::Size(250, 52);
			this->btn_Statistiques->Name = L"btn_Statistiques";
			this->btn_Statistiques->Size = System::Drawing::Size(250, 52);
			this->btn_Statistiques->TabIndex = 9;
			this->btn_Statistiques->Text = L"Statistiques";
			this->btn_Statistiques->UseVisualStyleBackColor = true;
			this->btn_Statistiques->Click += gcnew System::EventHandler(this, &MyForm_Accueil::btn_Statistiques_Click);
			// 
			// btn_Close
			// 
			this->btn_Close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_Close->BackColor = System::Drawing::Color::Red;
			this->btn_Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Close->Location = System::Drawing::Point(345, -4);
			this->btn_Close->Name = L"btn_Close";
			this->btn_Close->Size = System::Drawing::Size(47, 47);
			this->btn_Close->TabIndex = 10;
			this->btn_Close->Text = L"X";
			this->btn_Close->UseVisualStyleBackColor = false;
			this->btn_Close->Click += gcnew System::EventHandler(this, &MyForm_Accueil::btn_Close_Click);
			// 
			// btn_Client
			// 
			this->btn_Client->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_Client->Location = System::Drawing::Point(69, 68);
			this->btn_Client->MaximumSize = System::Drawing::Size(250, 52);
			this->btn_Client->MinimumSize = System::Drawing::Size(250, 52);
			this->btn_Client->Name = L"btn_Client";
			this->btn_Client->Size = System::Drawing::Size(250, 52);
			this->btn_Client->TabIndex = 13;
			this->btn_Client->Text = L"Gestion Client";
			this->btn_Client->UseVisualStyleBackColor = true;
			this->btn_Client->Click += gcnew System::EventHandler(this, &MyForm_Accueil::btn_Client_Click);
			// 
			// btn_Personnel
			// 
			this->btn_Personnel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_Personnel->Location = System::Drawing::Point(69, 126);
			this->btn_Personnel->MaximumSize = System::Drawing::Size(250, 52);
			this->btn_Personnel->MinimumSize = System::Drawing::Size(250, 52);
			this->btn_Personnel->Name = L"btn_Personnel";
			this->btn_Personnel->Size = System::Drawing::Size(250, 52);
			this->btn_Personnel->TabIndex = 14;
			this->btn_Personnel->Text = L"Gestion Personnel";
			this->btn_Personnel->UseVisualStyleBackColor = true;
			this->btn_Personnel->Click += gcnew System::EventHandler(this, &MyForm_Accueil::btn_Personnel_Click);
			// 
			// btn_Commande
			// 
			this->btn_Commande->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_Commande->Location = System::Drawing::Point(69, 184);
			this->btn_Commande->MaximumSize = System::Drawing::Size(250, 52);
			this->btn_Commande->MinimumSize = System::Drawing::Size(250, 52);
			this->btn_Commande->Name = L"btn_Commande";
			this->btn_Commande->Size = System::Drawing::Size(250, 52);
			this->btn_Commande->TabIndex = 15;
			this->btn_Commande->Text = L"Gestion Catalogue";
			this->btn_Commande->UseVisualStyleBackColor = true;
			this->btn_Commande->Click += gcnew System::EventHandler(this, &MyForm_Accueil::btn_Commande_Click);
			// 
			// btn_Catalogue
			// 
			this->btn_Catalogue->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_Catalogue->Location = System::Drawing::Point(69, 242);
			this->btn_Catalogue->MaximumSize = System::Drawing::Size(250, 52);
			this->btn_Catalogue->MinimumSize = System::Drawing::Size(250, 52);
			this->btn_Catalogue->Name = L"btn_Catalogue";
			this->btn_Catalogue->Size = System::Drawing::Size(250, 52);
			this->btn_Catalogue->TabIndex = 16;
			this->btn_Catalogue->Text = L"Gestion Commande";
			this->btn_Catalogue->UseVisualStyleBackColor = true;
			this->btn_Catalogue->Click += gcnew System::EventHandler(this, &MyForm_Accueil::btn_Catalogue_Click);
			// 
			// MyForm_Accueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(388, 449);
			this->Controls->Add(this->btn_Catalogue);
			this->Controls->Add(this->btn_Commande);
			this->Controls->Add(this->btn_Personnel);
			this->Controls->Add(this->btn_Client);
			this->Controls->Add(this->btn_Close);
			this->Controls->Add(this->btn_Statistiques);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm_Accueil";
			this->Text = L"MyForm_Accueil";
			this->Load += gcnew System::EventHandler(this, &MyForm_Accueil::MyForm_Accueil_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Accueil_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	
	private: System::Void btn_Close_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
	
	private: System::Void btn_Client_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
			client = gcnew MyForm_Client();
			client->Show();
		
	
	}		
	private: System::Void btn_Statistiques_Click(System::Object^ sender, System::EventArgs^ e)
	{
		statistiques = gcnew MyForm_Statistiques();
		statistiques->Show();
	}
	private: System::Void btn_Personnel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		personnel = gcnew MyForm_personnel();
		personnel->Show();
	}
	private: System::Void btn_Commande_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		catalogue = gcnew MyForm_Catalogue();
		catalogue->Show();
	}
	private: System::Void btn_Catalogue_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Commande = gcnew MyForm_Commande();
		Commande->Show();
	}
};
};

