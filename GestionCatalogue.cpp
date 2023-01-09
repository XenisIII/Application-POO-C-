#include "pch.h"
#include "GestionCatalogue.h"
#include "MapCatalogue.h"


GestionCatalogue::GestionCatalogue()
{
	catalogue = gcnew MapCatalogue();
	DDB = gcnew NS_Comp_Data::CLcad();
}

System::Data::DataSet^ GestionCatalogue::showAll(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->catalogue->showAll();
	return this->DDB->getRows(sql, dataTableName);
}

System::Data::DataSet^ GestionCatalogue::show(System::String^ datatableName, int ID)
{
	catalogue->setID(ID);

	System::String^ sql;
	catalogue->setID(ID);
	sql = this->catalogue->show();
	return this->DDB->getRows(sql, datatableName);
}

System::Data::DataSet^ GestionCatalogue::del(System::String^ datatableName, int ID)
{
	catalogue->setID(ID);

	System::String^ sql;
	catalogue->setID(ID);
	sql = this->catalogue->del();
	return this->DDB->getRows(sql, datatableName);
}

System::Data::DataSet^ GestionCatalogue::add(System::String^ datatablename,
	System::String^ nom,
	System::String^ Nature,
	int QuantiteEnStock,
	int SeuilReapro,
	System::String^ Couleur,
	float prixHT,
	float prixTVA)
{
	catalogue->setNom(nom);
	catalogue->setNature(Nature);
	catalogue->setQuantite(QuantiteEnStock);
	catalogue->setSeuil(SeuilReapro);
	catalogue->setCouleur(Couleur);
	catalogue->setPrixHT(prixHT);
	catalogue->setPrixTVA(prixTVA);

	System::String^ sql;
	sql = this->catalogue->add();
	return this->DDB->getRows(sql, datatablename);
}
