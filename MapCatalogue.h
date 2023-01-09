#pragma once


ref class MapCatalogue
{
private: 
	int ID;
	
	System::String^ nom;
	System::String^ nature;
	int quantite;
	int seuil;
	System::String^ couleur;
	float prixHT;
	float prixTVA;

public:
	
	MapCatalogue();
	MapCatalogue(int ID, System::String^ nom, System::String^ nature, int quantite, int seuil, System::String^ couleur, float prixHT, float prixTTC);

	System::String^ add();
	System::String^ del();
	System::String^ update();
	System::String^ show();
	System::String^ showAll();
	

	int getID();
	System::String^ getNom();
	System::String^ getNature();
	int getQuantite();
	int getSeuil();
	System::String^ getCouleur();
	float getPrixHT();
	float getPrixTVA();
	
	
	void setID(int ID);
	void setNom(System::String^ nom);
	void setNature(System::String^ nature);
	void setQuantite(int quantite);
	void setSeuil(int seuil);
	void setCouleur(System::String^ couleur);
	void setPrixHT(float prixHT);
	void setPrixTVA(float prixTVA);
};
