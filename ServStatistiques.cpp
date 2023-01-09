#include "pch.h"
#include "ServStatistiques.h"

NS_Comp_Svc::ServStatistiques::ServStatistiques() {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->stats = gcnew NS_Comp_Mappage::MapStatistiques();
}

System::Data::DataSet^ NS_Comp_Svc::ServStatistiques::showTop10moins() {
	System::String^ sql;
	sql = stats->getTop10moins();
	return(this->oCad->getRows(sql, "stats"));
}

System::Data::DataSet^ NS_Comp_Svc::ServStatistiques::showTop10plus() {
	System::String^ sql;
	sql = stats->getTop10plus();
	return(this->oCad->getRows(sql, "stats"));
}

System::Data::DataSet^ NS_Comp_Svc::ServStatistiques::showPanierMoyen(float remise) {
	System::String^ sql;
	this->stats->setRemise(remise);
	sql = stats->getPanierMoyen();
	return(this->oCad->getRows(sql, "stats"));
}

System::Data::DataSet^ NS_Comp_Svc::ServStatistiques::showMontantTotal() {
	System::String^ sql;
	sql = stats->getMontantTotal();
	return(this->oCad->getRows(sql, "stats"));
}

System::Data::DataSet^ NS_Comp_Svc::ServStatistiques::showChiffreAffaires() {
	System::String^ sql;
	sql = stats->getChiffreAffaires();
	return(this->oCad->getRows(sql, "stats"));
}

System::Data::DataSet^ NS_Comp_Svc::ServStatistiques::showValeurAchatStock() {
	System::String^ sql;
	sql = stats->getValeurAchatStock();
	return(this->oCad->getRows(sql, "stats"));
}

System::Data::DataSet^ NS_Comp_Svc::ServStatistiques::showValeurCommercialeStock(float tva) {
	System::String^ sql;
	this->stats->setTVA(tva);
	sql = stats->getValeurCommercialeStock();
	return(this->oCad->getRows(sql, "stats"));
}

System::Data::DataSet^ NS_Comp_Svc::ServStatistiques::showSeuilReapprovisionnement() {
	System::String^ sql;
	sql = stats->getSeuilReapprovisionnement();
	return(this->oCad->getRows(sql, "stats"));
}