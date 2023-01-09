#pragma once
namespace NS_Comp_Mappage
{
	ref class MapAdresse
	{
	private:
		int Id_Adresse;
		int Nrue;
		int CP;
		int Nappart;
		int Netage;
		int Id_Ville;
		System::String^ NomRue;
		System::String^ Ville;
		System::String^ NomBatiment;
	public:
		MapAdresse();
		MapAdresse(System::String^, int);
		MapAdresse(System::String^, int, int, System::String^, int, int);
		System::String^ add();
		System::String^ addVille();
		System::String^ IfExistVille();
		System::String^ IfExistAdresse();
		System::String^ del();
		System::String^ show();
		System::String^ update();
		System::String^ showAll();
		System::String^ getIDVille();
		int getNrue();
		int getCP();
		int getNappart();
		int getNetage();
		System::String^ getNomRue();
		System::String^ getVille();
		System::String^ getNomBatiment();
		void setCP(int);
		void setNrue(int);
		void setNappart(int);
		void setNetage(int);
		void setNomRue(System::String^);
		void setNomBatiment(System::String^);
		void setVille(System::String^);
		void setID_Ville(int);
		void setID_Adresse(int);

	};
}

