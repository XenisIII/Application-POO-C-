#include "pch.h"

ref class MapCommande
{
private: 
	
	int id;
	System::String^ ref;
	System::String^ dateEmi;
	System::String^ dateLiv;
	System::String^ datepay;
	int idClient;
	int idArticle;
	int quantite;
		
public: 
	
	MapCommande();
	MapCommande(int);
	MapCommande(int id, System::String^ ref, System::String^ dateEmi, System::String^ dateLiv, System::String^ datepay, int idClient, int idArticle, int quantite);


	System::String^ add();
	System::String^ update();
	System::String^ del();
	System::String^ show();
	System::String^ showAll();
	
	
	int getId();
	System::String^ getRef();
	System::String^ getDateEmi();
	System::String^ getDateLiv();
	System::String^ getDatepay();
	int getIdClient();
	int getIdArticle();
	int getQuantite();

	void setid(int);
	void setRef(System::String^);
	void setDateEmi(System::String^);
	void setDateLiv(System::String^);
	void setDatepay(System::String^);
	void setIdClient(int);
	void setIdArticle(int);
	void setQuantite(int);
	
};
