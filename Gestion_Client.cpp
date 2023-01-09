#include "pch.h"
#include "Gestion_Client.h"
#include "MapClient.h"

using namespace System;

Gestion_Client::Gestion_Client()
{
	DDB = gcnew NS_Comp_Data::CLcad();
	client = gcnew MapClient();

}

System::Data::DataSet^ Gestion_Client::showAll(String^ dataTableName)
{
	System::String^ sql;

	sql = this->client->showAll();
	return this->DDB->getRows(sql, dataTableName);
}

System::Data::DataSet^ Gestion_Client::show(String^ datatableName, int ID)
{
	client->setID(ID);

	System::String^ sql;
	client->setID(ID);
	sql = this->client->show();
	return this->DDB->getRows(sql, datatableName);
}

System::Data::DataSet^ Gestion_Client::del(String^ datatableName, int ID)
{
	client->setID(ID);

	System::String^ sql;
	client->setID(ID);
	sql = this->client->del();
	return this->DDB->getRows(sql, datatableName);
}

System::Data::DataSet^ Gestion_Client::add(System::String^ datatableName, System::String^ prenom, System::String^ nom, System::String^ dateAnniv, System::String^ batimentLiv, int NumAppLiv, int EtageLiv, System::String^ RueLiv, int NumRueLiv, System::String^ batimentFact, int NumAppFact, int EtageFact, System::String^ RueFact, int NumRueFact, System::String^ date1erAchat, System::String^ VilleLiv, int codePostalLiv, System::String^ VilleFact, int codePostalFact)
{
	client->setPrenom(prenom);
	client->setNom(nom);
	client->setDateAnniv(dateAnniv);
	client->setBatimentLiv(batimentLiv);
	client->setNumAppLiv(NumAppLiv);
	client->setEtageLiv(EtageLiv);
	client->setRueLiv(RueLiv);
	client->setNumRueLiv(NumRueLiv);
	client->setBatimentFact(batimentFact);
	client->setNumAppFact(NumAppFact);
	client->setEtageFact(EtageFact);
	client->setRueFact(RueFact);
	client->setDate1erAchat(date1erAchat);

	System::String^ sql;
	sql = this->client->add();
	return this->DDB->getRows(sql, datatableName);
}