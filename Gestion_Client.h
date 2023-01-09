#pragma once
#include "MapClient.h"
#include "pch.h"
#include "CLcad.h"

ref class Gestion_Client
{
private: 
	
	NS_Comp_Data::CLcad^ DDB;
	MapClient^ client;
	
public:

	Gestion_Client();
	System::Data::DataSet^ showAll(System::String^);
	System::Data::DataSet^ show(System::String^, int);
	System::Data::DataSet^ del(System::String^, int);
	System::Data::DataSet^ add(System::String^ datatablename, 
		System::String^ prenom, 
		System::String^ nom, 
		System::String^ dateAnniv, 
		System::String^ batimentLiv, 
		int NumAppLiv, int EtageLiv, 
		System::String^ RueLiv, 
		int NumRueLiv, System::String^ batimentFact, 
		int NumAppFact, 
		int EtageFact, 
		System::String^ RueFact, 
		int NumRueFact, 
		System::String^ date1erAchat, 
		System::String^ VilleLiv, int codePostalLiv, System::String^ VilleFact, int codePostalFact);
	
};

