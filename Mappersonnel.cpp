#include "pch.h"
#include "MapPersonnel.h"

/*select()
{
	return "Select * from personnel inner join adresse on adressid=adressid"
}*/

System::String^ NS_Comp_Mappage::Personnel::add() {
	return "INSERT INTO Personnel VALUES('" + this->dateEmbauche + "', " + this->Id_Adresse + "," + this->Id_Manager + "," + this->Id_Nom_Personnel + ")";
}

System::String^ NS_Comp_Mappage::Personnel::del() {
	return "DELETE FROM [Personnel] WHERE[Id] = " + this->id + ";";
}

System::String^ NS_Comp_Mappage::Personnel::show() {
	return"SELECT Personnel.ID, Nom.Nom, Nom.Prenom, Adresse.Num_Rue, Adresse.Rue, Adresse.Batiment, Adresse.Num_Appartement, Adresse.Etage, Commune.Ville, Commune.Code_Postale, Manager_Prenom, Manager_Nom FROM [Personnel] INNER JOIN Nom ON Personnel.ID_Nom = Nom.ID INNER JOIN Adresse ON Personnel.ID_Adresse = Adresse.ID INNER JOIN Commune ON Adresse.ID_Ville = Commune.ID INNER JOIN(SELECT * FROM Nom) Manager ON Personnel.ID_Personnel = Manager.ID INNER JOIN(SELECT ID, Nom as Manager_Nom, Prenom as Manager_Prenom FROM Nom) AS T2 on Manager.ID = T2.ID WHERE Personnel.ID = " + this->id + ";";
}

System::String^ NS_Comp_Mappage::Personnel::update() {
	return"UPDATE Personnel SET Date_Embauche = '" + this->dateEmbauche + "', ID_Personnel = " + this->Id_Manager + ", ID_Nom = " + this->Id_Nom_Personnel + " WHERE ID = " + this->id + "";
}


System::String^ NS_Comp_Mappage::Personnel::showAll() {
	return"SELECT Personnel.ID, Nom.Nom, Nom.Prenom, Personnel.Date_Embauche, Adresse.Num_Rue, Adresse.Rue, Adresse.Batiment, Adresse.Num_Appartement, Adresse.Etage, Commune.Ville, Commune.Code_Postale, Manager_Prenom, Manager_Nom FROM [Personnel] INNER JOIN Nom ON Personnel.ID_Nom = Nom.ID INNER JOIN Adresse ON Personnel.ID_Adresse = Adresse.ID INNER JOIN Commune ON Adresse.ID_Ville = Commune.ID INNER JOIN(SELECT * FROM Nom) Manager ON Personnel.ID_Personnel = Manager.ID INNER JOIN(SELECT ID, Nom as Manager_Nom, Prenom as Manager_Prenom FROM Nom) AS T2 on Manager.ID = T2.ID ;";
}

System::String^ NS_Comp_Mappage::Personnel::selectAdresse() {
	return"SELECT ID_Adresse FROM Personnel WHERE ID = " + this->id + "";
}

System::String^ NS_Comp_Mappage::Personnel::delAdresse() {
	return "SELECT ID FROM Personnel WHERE ID_Adresse = " + this->Id_Adresse + "";
}

System::String^ NS_Comp_Mappage::Personnel::getIDPersonnel() {
	return "SELECT ID FROM Nom WHERE Nom = '" + this->Nom + "' AND Prenom = '" + this->Prenom + "'";
}

System::String^ NS_Comp_Mappage::Personnel::getIDManager() {
	return "SELECT ID FROM Nom WHERE Nom = '" + this->Manager + "'";
}

System::String^ NS_Comp_Mappage::Personnel::getIDNom() {
	return "SELECT ID_Nom FROM Personnel WHERE ID = " + this->id + "";
}

System::String^ NS_Comp_Mappage::Personnel::getIDAdresse() {
	return "SELECT ID_Adresse FROM Personnel WHERE ID = " + this->id + "";
}

System::String^ NS_Comp_Mappage::Personnel::addNom() {
	return "INSERT INTO Nom VALUES('" + this->Nom + "' , '" + this->Prenom + "')";
}

System::String^ NS_Comp_Mappage::Personnel::IfExistNom() {
	return "SELECT ID FROM Nom WHERE Nom = '" + this->Nom + "' AND Prenom = '" + this->Prenom + "'";
}

NS_Comp_Mappage::Personnel::Personnel() {

}

void NS_Comp_Mappage::Personnel::setId(int ID) {
	this->id = ID;
}

void NS_Comp_Mappage::Personnel::setPrenom(System::String^ prenom) {
	this->Prenom = prenom;
}

void NS_Comp_Mappage::Personnel::setNom(System::String^ nom) {
	this->Nom = nom;
}

void NS_Comp_Mappage::Personnel::setManager(System::String^ manager) {
	this->Manager = manager;
}


void NS_Comp_Mappage::Personnel::setDateEmbauche(System::String^ DateEmbauche) {
	this->dateEmbauche = DateEmbauche;
}

void NS_Comp_Mappage::Personnel::setID_Manager(int ID_M) {
	this->Id_Manager = ID_M;
}

void NS_Comp_Mappage::Personnel::setID_Nom(int ID_Nom) {
	this->Id_Nom = ID_Nom;
}

void NS_Comp_Mappage::Personnel::setID_Adresse(int ID_A) {
	this->Id_Adresse = ID_A;
}

void NS_Comp_Mappage::Personnel::setId_Nom_Personnel(int idP) {
	this->Id_Nom_Personnel = idP;
}