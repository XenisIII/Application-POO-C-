#pragma once
#include "MapAdresse.h"
namespace NS_Comp_Mappage
{
	ref class Personnel
	{
	private:
		System::String^ dateEmbauche;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ Manager;
		int Id_Nom;
		int Id_Manager;
		int Id_Adresse;
		int Id_Nom_Personnel;
		int id;
	public:
		Personnel();
		System::String^ add();
		System::String^ del();
		System::String^ show();
		System::String^ update();
		System::String^ showAll();
		System::String^ delAdresse();
		System::String^ selectAdresse();
		System::String^ getIDNom();
		System::String^ getIDManager();
		System::String^ getIDPersonnel();
		System::String^ getIDAdresse();
		System::String^ addNom();
		System::String^ IfExistNom();
		/*int getId();
		System::String^ getPrenom();
		System::String^ getNom();
		System::String^ getDateEmbauche();
		int getManager();*/
		void setId(int);
		void setID_Manager(int);
		void setID_Nom(int);
		void setDateEmbauche(System::String^);
		void setID_Adresse(int);
		void setPrenom(System::String^);
		void setNom(System::String^);
		void setManager(System::String^);
		void setId_Nom_Personnel(int);
	};
}

