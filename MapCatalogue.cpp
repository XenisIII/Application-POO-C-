#include "pch.h"
#include "MapCatalogue.h"

using namespace System;

MapCatalogue::MapCatalogue()
{
}

MapCatalogue::MapCatalogue(int ID, System::String^ nom, System::String^ nature, int quantite, int seuil, System::String^ couleur, float prixHT, float prixTTC)
{
	this->ID = ID;
	this->nom = nom;
	this->nature = nature;
	this->quantite = quantite;
	this->seuil = seuil;
	this->couleur = couleur;
	this->prixHT = prixHT;
	this->prixTVA = prixTVA;
}

System::String^ MapCatalogue::add()
{
	return ",INSERT INTO Prix(Prix_HT, Prix_TVA) VALUES(" + this->prixHT + "," + this->prixTVA + ");,Insert INTO Article(Nom, Nature, Quantite_En_Stock, Seuil_Reaprovisionnement, Couleur, Id_Prix) VALUES(" + this->nom + "," + this->nature + "," + this->quantite + "," + this->seuil + "," + this->couleur + ", (SELECT max(ID) from Prix))";
}

System::String^ MapCatalogue::del()
{
	return "DELETE FROM Article WHERE ID = " + this->ID + ";";
}

System::String^ MapCatalogue::update()
{

	return "UPDATE Prix SET Prix_HT = '" + this->prixHT + "', Prix_TVA = '" + this->prixTVA + "'UPDATE catalogue SET nom = '" + this->nom + "', nature = '" + this->nature + "', quantite = " + this->quantite + ", seuil = " + this->seuil + ", couleur = '" + this->couleur + "SELECT ID FROM Prix WHERE Prix_HT = " + this->prixHT + " AND Prix_TVA = " + this->prixTVA + "'; ";
}

System::String^ MapCatalogue::show()
{
	return "Select Article.ID, Nom, Nature, Quantite_En_Stock, Seuil_Reaprovisionnement, Couleur, Prix_HT, Prix_TVA, Prix_HT* Prix_TVA as Prix_TTC from Article Inner Join Prix ON Article.Id_Prix = Prix.ID WHERE Article.ID = " + this->ID;
}

System::String^ MapCatalogue::showAll()
{
	return "Select Article.ID, Nom, Nature, Quantite_En_Stock, Seuil_Reaprovisionnement, Couleur, Prix_HT, Prix_TVA, Prix_HT* Prix_TVA as Prix_TTC from Article Inner Join Prix ON Article.Id_Prix = Prix.ID";
}

int MapCatalogue::getID()
{
	return this->ID;
}

System::String^ MapCatalogue::getNom()
{
	return this->nom;
}

System::String^ MapCatalogue::getNature()
{
	return this->nature;
}

int MapCatalogue::getQuantite()
{
	return this->quantite;
}

int MapCatalogue::getSeuil()
{
	return this->seuil;
}

System::String^ MapCatalogue::getCouleur()
{
	return this->couleur;
}

float MapCatalogue::getPrixHT()
{
	return this->prixHT;
}

float MapCatalogue::getPrixTVA()
{
	return this->prixTVA;
}

void MapCatalogue::setID(int ID)
{
	this->ID = ID;
}

void MapCatalogue::setNom(System::String^ nom)
{
	this->nom = nom;
}

void MapCatalogue::setNature(System::String^ nature)
{
	this->nature = nature;
}

void MapCatalogue::setQuantite(int quantite)
{
	this->quantite = quantite;
}

void MapCatalogue::setSeuil(int seuil)
{
	this->seuil = seuil;
}

void MapCatalogue::setCouleur(System::String^ couleur)
{
	this->couleur = couleur;
}

void MapCatalogue::setPrixHT(float prixHT)
{
	this->prixHT = prixHT;
}

void MapCatalogue::setPrixTVA(float prixTTC)
{
	this->prixTVA = prixTVA;
}

