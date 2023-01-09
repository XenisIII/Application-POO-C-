#pragma once
#include "MapCatalogue.h"
#include "pch.h"
#include "CLcad.h"

ref class GestionCatalogue
{
private: 
	
	MapCatalogue^ catalogue;
	NS_Comp_Data::CLcad^ DDB;

public: 

	GestionCatalogue();
	System::Data::DataSet^ showAll(System::String^);
	System::Data::DataSet^ show(System::String^, int);
	System::Data::DataSet^ del(System::String^, int);
	System::Data::DataSet^ add(System::String^ datatablename,
		System::String^ nom,
		System::String^ Nature,
		int QuantiteEnStock,
		int SeuilReapro,
		System::String^ Couleur,
		float prixHT,
		float prixTVA);
};

