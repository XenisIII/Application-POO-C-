#include "pch.h"
#include "MapAdresse.h"

NS_Comp_Mappage::MapAdresse::MapAdresse() {

}

NS_Comp_Mappage::MapAdresse::MapAdresse(System::String^ Nville, int codeP) {
	this->Ville = Nville;
	this->CP = codeP;
}

NS_Comp_Mappage::MapAdresse::MapAdresse(System::String^ Nbat, int app, int eta, System::String^ NomR, int NumR, int ID_ville) {
	this->NomBatiment = Nbat;
	this->Nappart = app;
	this->Netage = eta;
	this->NomRue = NomR;
	this->Nrue = NumR;
	this->Id_Ville = ID_ville;
}

System::String^ NS_Comp_Mappage::MapAdresse::add() {
	return "INSERT INTO Adresse Values('" + this->NomBatiment + "'," + this->Nappart + "," + this->Netage + ",'" + this->NomRue + "'," + this->Nrue + "," + this->Id_Ville + ")";
}

System::String^ NS_Comp_Mappage::MapAdresse::addVille() {
	return "INSERT INTO Commune VALUES('" + this->Ville + "'," + this->CP + ")";
}

System::String^ NS_Comp_Mappage::MapAdresse::del() {
	return "";
}

System::String^ NS_Comp_Mappage::MapAdresse::update() {
	return "UPDATE Adresse SET Batiment = '" + this->NomBatiment + "', Num_Appartement = " + this->Nappart + ", Etage = " + this->Netage + ", Rue = '" + this->NomRue + "', Num_Rue = " + this->Nrue + ", ID_Ville = " + this->Id_Ville + " WHERE ID = " + this->Id_Adresse + "";
}

System::String^ NS_Comp_Mappage::MapAdresse::show() {
	return "";
}

System::String^ NS_Comp_Mappage::MapAdresse::showAll() {
	return "";
}

System::String^ NS_Comp_Mappage::MapAdresse::IfExistVille() {
	return "SELECT ID FROM Commune WHERE Ville = '" + this->Ville + "'";
}

System::String^ NS_Comp_Mappage::MapAdresse::IfExistAdresse() {
	return "SELECT ID FROM Adresse WHERE Batiment = '" + this->NomBatiment + "' AND Num_Appartement = " + this->Nappart + " AND Etage = " + this->Netage + " AND Rue = '" + this->NomRue + "' AND Num_Rue = " + this->Nrue + " AND ID_Ville = " + this->Id_Ville + "";
}

System::String^ NS_Comp_Mappage::MapAdresse::getIDVille() {
	return "SELECT ID FROM Commune WHERE Ville = '" + this->Ville + "';";
}

void NS_Comp_Mappage::MapAdresse::setID_Adresse(int id_adresse) {
	this->Id_Adresse = id_adresse;
}

int NS_Comp_Mappage::MapAdresse::getNrue() {
	return Nrue;
}

int NS_Comp_Mappage::MapAdresse::getCP() {
	return CP;
}

int NS_Comp_Mappage::MapAdresse::getNappart() {
	return Nappart;
}

int NS_Comp_Mappage::MapAdresse::getNetage() {
	return Netage;
}

System::String^ NS_Comp_Mappage::MapAdresse::getNomRue() {
	return NomRue;
}

System::String^ NS_Comp_Mappage::MapAdresse::getVille() {
	return Ville;
}

System::String^ NS_Comp_Mappage::MapAdresse::getNomBatiment() {
	return NomBatiment;
}

void NS_Comp_Mappage::MapAdresse::setCP(int cp) {
	this->CP = cp;
}

void NS_Comp_Mappage::MapAdresse::setNrue(int numR) {
	this->Nrue = numR;
}

void NS_Comp_Mappage::MapAdresse::setNappart(int numA) {
	this->Nappart = numA;
}

void NS_Comp_Mappage::MapAdresse::setNetage(int numE) {
	this->Netage = numE;
}

void NS_Comp_Mappage::MapAdresse::setNomRue(System::String^ nomR) {
	this->NomRue = nomR;
}

void NS_Comp_Mappage::MapAdresse::setNomBatiment(System::String^ nomB) {
	this->NomBatiment = nomB;
}

void NS_Comp_Mappage::MapAdresse::setVille(System::String^ ville) {
	this->Ville = ville;
}

void NS_Comp_Mappage::MapAdresse::setID_Ville(int id) {
	this->Id_Ville = id;
}