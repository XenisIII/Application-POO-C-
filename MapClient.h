#pragma once


ref class MapClient
{
	private: 
	
		int ID;
		int IDname;
		System::String^ prenom;
		System::String^ nom;
		
		int adresseLivraison;
		
		System::String^ batimentLiv;
		int NumAppLiv;
		int EtageLiv;
		System::String^ RueLiv;
		int NumRueLiv;
		int villeLivraison;
			
		int adresseFacturation;
		
		System::String^ batimentFact;
		int NumAppFact;
		int EtageFact;
		System::String^ RueFact;
		int NumRueFact;
		int villeFacturation;
		
		System::String^ dateAnniv;
		System::String^ date1erAchat;

		System::String^ ville;
		int codePostal;
		
	public: 
		
		MapClient();
		MapClient(int ID);
		MapClient(int ID, System::String^ prenom, System::String^ nom, System::String^ dateAnniv, int adresseLivraison, System::String^ batimentLiv, int NumAppLiv, int EtageLiv, System::String^ RueLiv, int NumRueLiv, int villeLivraison, int adresseFacturation, System::String^ batimentFact, int NumAppFact, int EtageFact, System::String^ RueFact, int NumRueFact, int villeFacturation, System::String^ date1erAchat, System::String^, int);

		System::String^ add();
		System::String^ del();
		System::String^ show();
		System::String^ update();
		System::String^ showAll();
		
		void setID(int);
		void setNomID(int);
		void setPrenom(System::String^);
		void setNom(System::String^);
		
		void setAdresseLivraison(int);
		
		void setBatimentLiv(System::String^);
		void setNumAppLiv(int);
		void setEtageLiv(int);
		void setRueLiv(System::String^);
		void setNumRueLiv(int);
		void setVilleLivraison(int);
		
		void setAdresseFacturation(int);
		
		void setBatimentFact(System::String^);
		void setNumAppFact(int);
		void setEtageFact(int);
		void setRueFact(System::String^);
		void setNumRueFact(int);
		void setVilleFacturation(int);
		void setDateAnniv(System::String^);
		void setDate1erAchat(System::String^);
		
			
		int getId();
		int getNomID();
		System::String^ getPrenom();
		System::String^ getNom();
		
		int getAdresseLivraison();
		
		System::String^ getBatimentLiv();
		int getNumAppLiv();
		int getEtageLiv();
		System::String^ getRueLiv();
		int getNumRueLiv();
		int getVilleLivraison();
		
		int getAdresseFacturation();
		
		System::String^ getBatimentFact();
		int getNumAppFact();
		int getEtageFact();
		System::String^ getRueFact();
		int getNumRueFact();
		int getVilleFacturation();
		System::String^ getDateAnniv();
		System::String^ getDate1erAchat();
		
		
};

