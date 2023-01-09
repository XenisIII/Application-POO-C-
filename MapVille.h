#pragma once
ref class MapVille
{
private: 
	int ID;
	System::String^ ville;
	int codePostel;
	
public:
	MapVille();
	MapVille(int);
	MapVille(int ID, System::String^ ville, int codePostel);
	
	System::String^ add();
	System::String^ del();
	System::String^ update();
	System::String^ show();
	
	int getID();
	System::String^ getVille();
	int getCodePostel();
	
	void setID(int);
	void setVille(System::String^);
	void setCodePostel(int);
};


