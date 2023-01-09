#include "pch.h"
#include "MapCommande.h"

using namespace System;

MapCommande::MapCommande()
{

}

MapCommande::MapCommande(int id)
{
	this->id = id;
}

MapCommande::MapCommande(int id, System::String^ ref, System::String^ dateEmi, System::String^ dateLiv, System::String^ datepay, int idClient, int idArticle, int quantite)
{
	this->id = id;
	this->ref = ref;
	this->dateEmi = dateEmi;
	this->dateLiv = dateLiv;
	this->datepay = datepay;
	this->idClient = idClient;
	this->idArticle = idArticle;
	this->quantite = quantite;
}

String^ MapCommande::add()
{
	return "INSERT INTO Commande (Reference, Date_Emission, Date_Livraison, Date_Finit_Paye, ID_Client) VALUES ('" + this->ref + "', '" + this->dateEmi + "', '" + this->dateLiv + "', '" + this->datepay + "', '" + this->idClient + "', '" + this->idArticle + "', '" + this->quantite + "')";
}

String^ MapCommande::del()
{
	return "DELETE FROM Commande WHERE id = " + this->id;
}

String^ MapCommande::update()
{
	return "UPDATE Commande SET Reference = " + this->ref + ", Date_Emission = " + this->dateEmi + ", Date_Livraison = " + this->dateLiv + ", Date_Finit_Paye = " + this->datepay + ", ID_Client = " + this->idClient + ", ID_Article = " + this->idArticle + ", Quantite = " + this->quantite + "' WHERE id = '"  + this->id + "')";
}

String^ MapCommande::show()
{
	return "SELECT * FROM Commande WHERE id = " + this->id;
}

String^ MapCommande::showAll()
{
	return "SELECT * FROM Commande";
}

int MapCommande::getId()
{
	return this->id;
}

String^ MapCommande::getRef()
{
	return this->ref;
}

String^ MapCommande::getDateEmi()
{
	return this->dateEmi;
}

String^ MapCommande::getDateLiv()
{
	return this->dateLiv;
}

String^ MapCommande::getDatepay()
{
	return this->datepay;
}

int MapCommande::getIdClient()
{
	return this->idClient;
}

int MapCommande::getIdArticle()
{
	return this->idArticle;
}

int MapCommande::getQuantite()
{
	return this->quantite;
}

void MapCommande::setid(int id)
{
	this->id = id;
}

void MapCommande::setRef(String^ ref)
{
	this->ref = ref;
}

void MapCommande::setDateEmi(String^ dateEmi)
{
	this->dateEmi = dateEmi;
}

void MapCommande::setDateLiv(String^ dateLiv)
{
	this->dateLiv = dateLiv;
}

void MapCommande::setDatepay(String^ datepay)
{
	this->datepay = datepay;
}

void MapCommande::setIdClient(int idClient)
{
	this->idClient = idClient;
}

void MapCommande::setIdArticle(int idArticle)
{
	this->idArticle = idArticle;
}

void MapCommande::setQuantite(int quantite)
{
	this->quantite = quantite;
}
