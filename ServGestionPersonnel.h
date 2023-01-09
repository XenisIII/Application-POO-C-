#pragma once
#include "MapPersonnel.h"
#include "MapAdresse.h"
#include "CLcad.h"
//TEST
namespace NS_Comp_Svc
{
	ref class GestionPersonnel
	{
	private:
		NS_Comp_Mappage::Personnel^ personnel;
		NS_Comp_Mappage::MapAdresse^ adresse;
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::Personnel^ oMappTB;
		int Id_Nom;
		int Id_Manager;
		int Id_Adresse;
		int Id_Ville;
	public:
		GestionPersonnel();
		System::Data::DataSet^ showAll(System::String^);
		void addPersonnel(System::String^ ville, int cp, System::String^ Bat, int numA, int numE, System::String^ nomR, int numR, System::String^ DateEmbauche, System::String^ manager, System::String^ nom, System::String^ prenom);
		void deletePersonnel(int);
		System::Data::DataSet^ showPersonnel(System::String^, int);
		void updatePersonnel(int id, System::String^ ville, int cp, System::String^ Bat, int numA, int numE, System::String^ nomR, int numR, System::String^ DateEmbauche, System::String^ prenom, System::String^ nom, System::String^ manager);
		/*void getPersonnel();
		void setPersonnel();*/
	};
}

