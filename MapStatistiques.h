#pragma once
namespace NS_Comp_Mappage
{
	ref class MapStatistiques
	{
	private:
		float TVA;
		float Remise;
	public:
		System::String^ getTop10moins();
		System::String^ getTop10plus();
		System::String^ getPanierMoyen();
		System::String^ getMontantTotal();
		System::String^ getChiffreAffaires();
		System::String^ getValeurAchatStock();
		System::String^ getValeurCommercialeStock();
		System::String^ getSeuilReapprovisionnement();
		void setTVA(float tva);
		void setRemise(float remise);
	};
}

