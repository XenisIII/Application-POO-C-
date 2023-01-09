#pragma once
#include "pch.h"
#include "CLcad.h"
#include "MapCommande.h"

ref class GestionCommande
{
private:

	MapCommande^ commande;
	NS_Comp_Data::CLcad^ DDB;

public:
	
	GestionCommande();
	System::Data::DataSet^ showAll(System::String^);
	System::Data::DataSet^ show(System::String^, int);
	System::Data::DataSet^ del(System::String^, int);
	System::Data::DataSet^ add(System::String^, 
		System::String^ ref,
		System::String^ dateEmi,
		System::String^ dateLiv,
		System::String^ datepay,
		int idClient,
		int idArticle,
		int quantite);
	
	System::Data::DataSet^ update(System::String^,
		int id,
		System::String^ ref,
		System::String^ dateEmi,
		System::String^ dateLiv,
		System::String^ datepay,
		int idClient,
		int idArticle,
		int quantite);
};

