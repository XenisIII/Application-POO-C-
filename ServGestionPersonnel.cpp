#include "pch.h"
#include "ServGestionPersonnel.h"

using namespace System;

NS_Comp_Svc::GestionPersonnel::GestionPersonnel() {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->adresse = gcnew NS_Comp_Mappage::MapAdresse();
	this->personnel = gcnew NS_Comp_Mappage::Personnel();
}

void NS_Comp_Svc::GestionPersonnel::addPersonnel(System::String^ ville, int cp, System::String^ Bat, int numA, int numE, System::String^ nomR, int numR, System::String^ DateEmbauche, System::String^ manager, System::String^ nom, System::String^ prenom) {
	System::String^ sql;
	int id_ville;
	int id_adresse;
	int id_nom;
	this->adresse->setVille(ville);
	this->adresse->setCP(cp);
	this->adresse->setNomBatiment(Bat);
	this->adresse->setNappart(numA);
	this->adresse->setNetage(numE);
	this->adresse->setNomRue(nomR);
	this->adresse->setNrue(numR);
	this->personnel->setManager(manager);
	this->personnel->setNom(nom);
	this->personnel->setPrenom(prenom);
	sql = this->adresse->IfExistVille();
	int NB_Ville = this->oCad->actionRows(sql);
	if (NB_Ville == -1) {
		sql = this->adresse->addVille();
		this->oCad->actionRows(sql);
		sql = this->adresse->IfExistVille();
		id_ville = this->oCad->actionRowsScalar(sql);
		adresse->setID_Ville(id_ville);
	}
	else {
		sql = this->adresse->IfExistVille();
		id_ville = this->oCad->actionRowsScalar(sql);
		adresse->setID_Ville(id_ville);
	}
	sql = this->adresse->IfExistAdresse();
	int NB_Adresse = this->oCad->actionRows(sql);
	if (NB_Adresse == -1) {
		sql = this->adresse->add();
		this->oCad->actionRows(sql);
		sql = this->adresse->IfExistAdresse();
		id_adresse = this->oCad->actionRowsScalar(sql);
		adresse->setID_Ville(id_ville);
		personnel->setID_Adresse(id_adresse);
	}
	else {
		sql = this->adresse->IfExistAdresse();
		id_adresse = this->oCad->actionRowsScalar(sql);
		personnel->setID_Adresse(id_adresse);
	}
	sql = this->personnel->IfExistNom();
	int NB_Nom = this->oCad->actionRows(sql);
	if (NB_Nom == -1) {
		sql = this->personnel->addNom();
		this->oCad->actionRows(sql);
		sql = this->personnel->IfExistNom();
		id_nom = this->oCad->actionRowsScalar(sql);
		personnel->setId_Nom_Personnel(id_nom);
	}
	else {
		sql = this->personnel->IfExistNom();
		id_nom = this->oCad->actionRowsScalar(sql);
		personnel->setId_Nom_Personnel(id_nom);
	}
	personnel->setDateEmbauche(DateEmbauche);
	sql = this->personnel->getIDManager();
	this->personnel->setID_Manager(this->oCad->actionRowsScalar(sql));
	sql = this->personnel->add();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::GestionPersonnel::updatePersonnel(int id, System::String^ ville, int cp, System::String^ Bat, int numA, int numE, System::String^ nomR, int numR, System::String^ DateEmbauche, System::String^ prenom, System::String^ nom, System::String^ manager) {
	System::String^ sql;
	personnel->setId(id);
	//R�cup�ration de l'id de la personne renseign�e pour remplacer dans table Personnel
	personnel->setNom(nom);
	personnel->setPrenom(prenom);
	personnel->setDateEmbauche(DateEmbauche);
	sql = this->personnel->getIDNom();
	this->personnel->setID_Nom(this->oCad->actionRowsScalar(sql));
	sql = this->personnel->getIDPersonnel();
	this->personnel->setId_Nom_Personnel(this->oCad->actionRowsScalar(sql));
	//R�cup�ration de l'id du manager pour remplacer dans la table Personnel
	personnel->setManager(manager);
	sql = this->personnel->getIDManager();
	this->personnel->setID_Manager(this->oCad->actionRowsScalar(sql));
	//R�cup�ration de l'id de l'adresse pour remplacer dans la table Personnel
	sql = personnel->getIDAdresse();
	this->personnel->setID_Adresse(this->oCad->actionRowsScalar(sql));
	this->adresse->setID_Adresse(this->oCad->actionRowsScalar(sql));
	//R�cup�ration de l'id vile voulu
	adresse->setVille(ville);
	sql = adresse->getIDVille();
	this->adresse->setID_Ville(this->oCad->actionRowsScalar(sql));
	//Set toutes les modifications
	adresse->setNomBatiment(Bat);
	adresse->setNappart(numA);
	adresse->setNetage(numE);
	adresse->setNomRue(nomR);
	adresse->setNrue(numR);
	//Cr�ation et ex�cution requ�tes
	sql = this->adresse->update();
	this->oCad->actionRows(sql);
	sql = this->personnel->update();
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::GestionPersonnel::showPersonnel(System::String^ dataTableName, int id)
{
	System::String^ sql;
	this->personnel = gcnew NS_Comp_Mappage::Personnel();

	this->personnel->setId(id);
	sql = this->personnel->show();
	return this->oCad->getRows(sql, dataTableName);
}


System::Data::DataSet^ NS_Comp_Svc::GestionPersonnel::showAll(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->personnel->showAll();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::GestionPersonnel::deletePersonnel(int ID_del) {
	System::String^ sql;
	this->adresse = gcnew NS_Comp_Mappage::MapAdresse();
	this->personnel = gcnew NS_Comp_Mappage::Personnel();
	this->personnel->setId(ID_del);
	sql = this->personnel->selectAdresse();
	int Adresse = this->oCad->actionRowsScalar(sql);
	this->personnel->setID_Adresse(Adresse);
	sql = this->personnel->delAdresse();
	int NB_ID = this->oCad->actionRows(sql);
	if (NB_ID > 1) {
		sql = this->adresse->del();
		this->oCad->actionRows(sql);
	}
	sql = this->personnel->del();
	this->oCad->actionRows(sql);
}