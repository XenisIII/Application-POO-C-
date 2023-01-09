#include "pch.h"
#include "MapVille.h"

using namespace System;

MapVille::MapVille()
{
}

MapVille::MapVille(int ID)
{
	this->ID = ID;
}

MapVille::MapVille(int ID, System::String^ ville, int codePostel)
{
	this->ID = ID;
	this->ville = ville;
	this->codePostel = codePostel;
}

String^ MapVille::add()
{
	return "INSERT INTO ville (ID, ville, codePostel) VALUES (" + this->ID + ", '" + this->ville + "', " + this->codePostel + ");";
}

String^ MapVille::del()
{
	return "DELETE FROM ville WHERE ID = " + this->ID + ";";
}

String^ MapVille::update()
{
	return "UPDATE ville SET ville = '" + this->ville + "', codePostel = " + this->codePostel + " WHERE ID = " + this->ID + ";";
}

String^ MapVille::show()
{
	return "SELECT * FROM ville WHERE ID = " + this->ID + ";";
}

int MapVille::getID()
{
	return this->ID;
}

String^ MapVille::getVille()
{
	return this->ville;
}

int MapVille::getCodePostel()
{
	return this->codePostel;
}

void MapVille::setID(int ID)
{
	this->ID = ID;
}

void MapVille::setVille(String^ ville)
{
	this->ville = ville;
}

void MapVille::setCodePostel(int codePostel)
{
	this->codePostel = codePostel;
}

