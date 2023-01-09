#include "pch.h"
#include "MapClient.h"

using namespace System;

MapClient::MapClient()
{
}

MapClient::MapClient(int ID)
{
	this->ID = ID;
}

MapClient::MapClient(int ID, String^ prenom, String^ nom, String^ dateAnniv, int adresseLivraison, String^ batimentLiv, int NumAppLiv, int EtageLiv, String^ RueLiv, int NumRueLiv, int villeLivraison, int adresseFacturation, String^ batimentFact, int NumAppFact, int EtageFact, String^ RueFact, int NumRueFact, int villeFacturation, String^ date1erAchat, String^ Ville, int CodePostal)
{
	this->ID = ID;
	this->prenom = prenom;
	this->nom = nom;
	this->dateAnniv = dateAnniv;
	
	this->adresseLivraison = adresseLivraison;
	
	this->batimentLiv = batimentLiv;
	this->NumAppLiv = NumAppLiv;
	this->EtageLiv = EtageLiv;
	this->RueLiv = RueLiv;
	this->NumRueLiv = NumRueLiv;
	
	this->villeLivraison = villeLivraison;
	
	this->adresseFacturation = adresseFacturation;
	this->batimentFact = batimentFact;
	this->NumAppFact = NumAppFact;
	this->EtageFact = EtageFact;
	this->RueFact = RueFact;
	this->NumRueFact = NumRueFact;
	
	this->villeFacturation = villeFacturation;
	this->date1erAchat = date1erAchat;

	this->ville = Ville;
	this->codePostal = CodePostal;
}

String^ MapClient::add()
{
	return "INSERT INTO Nom Values('" + nom + " ', '" + prenom + "') INSERT INTO Commune Values('" + this->ville + "', " + codePostal + ") Insert INTO Adresse Values('" + batimentLiv + "', " + NumAppLiv + ", " + EtageLiv + ", '" + RueLiv + "', " + NumRueLiv + ", (select max(ID) from Commune)) Insert INTO Adresse Values('" + batimentFact + "', " + NumAppFact + ", " + EtageFact + ", '" + RueFact + "', " + NumRueFact + ", (select max(ID) from Commune)) INSERT INTO Client Values(' " + date1erAchat + "', '" + dateAnniv + "', (Select max(ID) FROM Adresse), (Select max(ID) - 1 FROM Adresse), (Select max(ID) FROM Nom))";
}

String^ MapClient::del()
{
	return "DELETE FROM Client WHERE ID = " + ID;
}

String^ MapClient::show()
{
	return "SELECT Client.ID as ref_Client, Date_1er_Achat, Date_Naissance, ID_Adresse_Livraison, ID_Adresse_Facturation, Nom, Prenom, Batiment, Num_Appartement, Etage, Rue, Num_Rue, Ville, Code_Postale FROM Client INNER JOIN Nom on Client.ID = Nom.ID INNER JOIN Adresse as AdresseLiv on AdresseLiv.ID = Client.ID_Adresse_Livraison INNER JOIN Commune on Commune.ID = AdresseLiv.ID_Ville WHERE client.ID = " + ID;
}

String^ MapClient::update()
{
	return "UPDATE Client SET prenom = '" + prenom + "', nom = '" + nom + "', dateAnniv = '" + dateAnniv + "', adresseLivraison = " + adresseLivraison + ", batimentLiv = '" + batimentLiv + "', NumAppLiv = " + NumAppLiv + ", EtageLiv = " + EtageLiv + ", RueLiv = '" + RueLiv + "', NumRueLiv = " + NumRueLiv + ", villeLivraison = " + villeLivraison + ", adresseFacturation = " + adresseFacturation + ", batimentFact = '" + batimentFact + "', NumAppFact = " + NumAppFact + ", EtageFact = " + EtageFact + ", RueFact = '" + RueFact + "', NumRueFact = " + NumRueFact + ", villeFacturation = " + villeFacturation + ", date1erAchat = '" + date1erAchat + "' WHERE ID = " + ID;
}

String^ MapClient::showAll()
{
	return "SELECT Client.ID as ref_Client, Date_1er_Achat, Date_Naissance, ID_Adresse_Livraison, ID_Adresse_Facturation, Nom, Prenom, Batiment, Num_Appartement, Etage, Rue, Num_Rue, Ville, Code_Postale FROM Client INNER JOIN Nom on Client.ID = Nom.ID INNER JOIN Adresse as AdresseLiv on AdresseLiv.ID = Client.ID_Adresse_Livraison INNER JOIN Commune on Commune.ID = AdresseLiv.ID_Ville";
}

void MapClient::setID(int ID)
{
	this->ID = ID;
}

void MapClient::setPrenom(String^ prenom)
{
	this->prenom = prenom;
}

void MapClient::setNomID(int IDname)
{
	this->IDname = IDname;
}


void MapClient::setNom(String^ nom)
{
	this->nom = nom;
}

void MapClient::setDateAnniv(String^ dateAnniv)
{
	this->dateAnniv = dateAnniv;
}

void MapClient::setAdresseLivraison(int adresseLivraison)
{
	this->adresseLivraison = adresseLivraison;
}

void MapClient::setBatimentLiv(String^ batimentLiv)
{
	this->batimentLiv = batimentLiv;
}

void MapClient::setNumAppLiv(int NumAppLiv)
{
	this->NumAppLiv = NumAppLiv;
}

void MapClient::setEtageLiv(int EtageLiv)
{
	this->EtageLiv = EtageLiv;
}

void MapClient::setRueLiv(String^ RueLiv)
{
	this->RueLiv = RueLiv;
}

void MapClient::setNumRueLiv(int NumRueLiv)
{
	this->NumRueLiv = NumRueLiv;
}

void MapClient::setVilleLivraison(int villeLivraison)
{
	this->villeLivraison = villeLivraison;
}

void MapClient::setAdresseFacturation(int adresseFacturation)
{
	this->adresseFacturation = adresseFacturation;
}

void MapClient::setBatimentFact(String^ batimentFact)
{
	this->batimentFact = batimentFact;
}

void MapClient::setNumAppFact(int NumAppFact)
{
	this->NumAppFact = NumAppFact;
}

void MapClient::setEtageFact(int EtageFact)
{
	this->EtageFact = EtageFact;
}

void MapClient::setRueFact(String^ RueFact)
{
	this->RueFact = RueFact;
}

void MapClient::setNumRueFact(int NumRueFact)
{
	this->NumRueFact = NumRueFact;
}

void MapClient::setVilleFacturation(int villeFacturation)
{
	this->villeFacturation = villeFacturation;
}

void MapClient::setDate1erAchat(String^ date1erAchat)
{
	this->date1erAchat = date1erAchat;
}

int MapClient::getId()
{
	return ID;
}

int MapClient::getNomID()
{
	return IDname;
}

String^ MapClient::getPrenom()
{
	return prenom;
}

String^ MapClient::getNom()
{
	return nom;
}

String^ MapClient::getDateAnniv()
{
	return dateAnniv;
}

int MapClient::getAdresseLivraison()
{
	return adresseLivraison;
}

String^ MapClient::getBatimentLiv()
{
	return batimentLiv;
}

int MapClient::getNumAppLiv()
{
	return NumAppLiv;
}

int MapClient::getEtageLiv()
{
	return EtageLiv;
}

String^ MapClient::getRueLiv()
{
	return RueLiv;
}

int MapClient::getNumRueLiv()
{
	return NumRueLiv;
}

int MapClient::getVilleLivraison()
{
	return villeLivraison;
}

int MapClient::getAdresseFacturation()
{
	return adresseFacturation;
}

String^ MapClient::getBatimentFact()
{
	return batimentFact;
}

int MapClient::getNumAppFact()
{
	return NumAppFact;
}

int MapClient::getEtageFact()
{
	return EtageFact;
}

String^ MapClient::getRueFact()
{
	return RueFact;
}

int MapClient::getNumRueFact()
{
	return NumRueFact;
}

int MapClient::getVilleFacturation()
{
	return villeFacturation;
}

String^ MapClient::getDate1erAchat()
{
	return date1erAchat;
}

