#include "pch.h"
#include "MapStatistiques.h"

System::String^ NS_Comp_Mappage::MapStatistiques::getTop10moins() {
	return "SELECT Article.ID, COUNT(CONTENIR.ID_Commande*CONTENIR.Quantite) AS Quantite_vendue FROM CONTENIR INNER JOIN Article ON CONTENIR.ID_Article = Article.ID GROUP BY(Article.ID) ORDER BY Quantit�_vendue ASC; ";
}

System::String^ NS_Comp_Mappage::MapStatistiques::getTop10plus() {
	return "SELECT Article.ID, COUNT(CONTENIR.ID_Commande*CONTENIR.Quantite) AS Quantite_vendue FROM CONTENIR INNER JOIN Article ON CONTENIR.ID_Article = Article.ID GROUP BY(Article.ID) ORDER BY Quantit�_vendue DESC; ";
}

System::String^ NS_Comp_Mappage::MapStatistiques::getPanierMoyen() {
	return "SELECT AVG(somme) FROM (SELECT Contenir.ID_Commande, SUM(Quantite*Prix_HT*Prix_TVA*" + this->Remise * 100 + "/100) AS somme FROM CONTENIR INNER JOIN Article ON CONTENIR.ID_Article = Article.ID INNER JOIN Prix ON Prix.ID = Article.ID_Prix GROUP BY ID_Commande) AS T1";
}

System::String^ NS_Comp_Mappage::MapStatistiques::getMontantTotal() {
	return "Select sum(Prix_HT*Quantite) as 'Quantite Commande' FROM CONTENIR INNER JOIN Article ON CONTENIR.ID_Article = Article.ID INNER JOIN Prix on Prix.ID = Article.ID_Prix INNER JOIN Commande on Commande.ID = CONTENIR.ID_Commande GROUP BY ID_Commande";
}

System::String^ NS_Comp_Mappage::MapStatistiques::getChiffreAffaires() {
	return "SELECT YEAR(Date_1er_Achat) AS Annee, MONTH(Date_1er_Achat) AS Mois, SUM(Prix_HT*Prix_TVA) AS ChiffresDAffaires FROM Client INNER JOIN Commande ON Client.ID = Commande.ID_Client INNER JOIN CONTENIR on commande.ID = CONTENIR.ID_Commande INNER JOIN Article ON CONTENIR.ID_Article = Article.ID INNER JOIN Prix on Prix.ID = Article.ID_Prix GROUP BY YEAR(Date_1er_Achat), MONTH(Date_1er_Achat) ORDER BY YEAR(Date_1er_Achat), MONTH(Date_1er_Achat)";
}

System::String^ NS_Comp_Mappage::MapStatistiques::getValeurAchatStock() {
	return "SELECT SUM((Prix.Prix_HT*Prix.Prix_TVA)*Quantite_En_Stock) AS 'Valeur achat du stock' FROM Article INNER JOIN Prix on Article.ID_Prix = Prix.ID";
}

System::String^ NS_Comp_Mappage::MapStatistiques::getValeurCommercialeStock() {
	return "SELECT SUM(Quantite_En_Stock*Prix_HT*" + this->TVA * 1000 + "/1000) as 'Valeur Stock' FROM Article INNER JOIN Prix on Prix.ID = Article.ID_Prix";
}

System::String^ NS_Comp_Mappage::MapStatistiques::getSeuilReapprovisionnement() {
	return "SELECT Nom ,Quantite_En_Stock, Seuil_Reaprovisionnement FROM Article WHERE Article.Quantite_En_Stock <= Article.Seuil_Reaprovisionnement";
}

void NS_Comp_Mappage::MapStatistiques::setTVA(float tva) {
	this->TVA = tva;
}

void NS_Comp_Mappage::MapStatistiques::setRemise(float remise) {
	this->Remise = remise;
}