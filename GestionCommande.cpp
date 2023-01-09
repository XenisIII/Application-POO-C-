#include "pch.h"
#include "GestionCommande.h"

using namespace System;

GestionCommande::GestionCommande()
{
	commande = gcnew MapCommande();
	DDB = gcnew NS_Comp_Data::CLcad();
}

System::Data::DataSet^ GestionCommande::showAll(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->commande->showAll();
	return this->DDB->getRows(sql, dataTableName);
}

System::Data::DataSet^ GestionCommande::show(System::String^ dataTableName, int id)
{
	System::String^ sql;

	commande->setid(id);
	sql = this->commande->show();
	return this->DDB->getRows(sql, dataTableName);
}

System::Data::DataSet^ GestionCommande::del(System::String^ dataTableName, int id)
{
	System::String^ sql;

	commande->setid(id);
	sql = this->commande->del();
	return this->DDB->getRows(sql, dataTableName);
}

System::Data::DataSet^ GestionCommande::add(System::String^ dataTableName, System::String^ ref, System::String^ dateEmi, System::String^ dateLiv, System::String^ datepay, int idClient, int idArticle, int quantite)
{
	System::String^ sql;

	commande->setRef(ref);
	commande->setDateEmi(dateEmi);
	commande->setDateLiv(dateLiv);
	commande->setDatepay(datepay);
	commande->setIdClient(idClient);
	commande->setIdArticle(idArticle);
	commande->setQuantite(quantite);
	
	sql = this->commande->add();
	return this->DDB->getRows(sql, dataTableName);
}

System::Data::DataSet^ GestionCommande::update(System::String^ dataTableName, int id, System::String^ ref, System::String^ dateEmi, System::String^ dateLiv, System::String^ datepay, int idClient, int idArticle, int quantite)
{
	System::String^ sql;

	commande->setid(id);
	commande->setRef(ref);
	commande->setDateEmi(dateEmi);
	commande->setDateLiv(dateLiv);
	commande->setDatepay(datepay);
	commande->setIdClient(idClient);
	commande->setIdArticle(idArticle);
	commande->setQuantite(quantite);

	sql = this->commande->update();
	return this->DDB->getRows(sql, dataTableName);
}