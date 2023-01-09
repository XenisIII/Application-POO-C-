#pragma once
#include "MapStatistiques.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class ServStatistiques
	{
	private:
		NS_Comp_Mappage::MapStatistiques^ stats;
		NS_Comp_Data::CLcad^ oCad;
	public:
		ServStatistiques();
		System::Data::DataSet^ showTop10moins();
		System::Data::DataSet^ showTop10plus();
		System::Data::DataSet^ showPanierMoyen(float);
		System::Data::DataSet^ showMontantTotal();
		System::Data::DataSet^ showChiffreAffaires();
		System::Data::DataSet^ showValeurAchatStock();
		System::Data::DataSet^ showValeurCommercialeStock(float);
		System::Data::DataSet^ showSeuilReapprovisionnement();
	};
}

