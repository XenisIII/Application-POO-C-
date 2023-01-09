#include "pch.h"
#include "CLcad.h"


NS_Comp_Data::CLcad::CLcad(void)
{
    this->sCnx = "Data Source = louismarteau.database.windows.net;Initial Catalog=louismarteau;User ID=louis;Password=Ninjago12";

    this->sSql = "Rien";

    this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
    this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
    this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->oDs = gcnew System::Data::DataSet();

    this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
    this->oDs->Clear();
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oDA->Fill(this->oDs, sDataTableName);

    return this->oDs;
}
int NS_Comp_Data::CLcad::actionRows(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oCnx->Open();
    int NB = this->oCmd->ExecuteNonQuery();
    this->oCnx->Close();
    return NB;
}

int NS_Comp_Data::CLcad::actionRowsScalar(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oCnx->Open();
    System::Nullable<int> res = (System::Nullable<int>)(this->oCmd->ExecuteScalar());
    int returnID = res.HasValue ? res.Value : -1;
    this->oCnx->Close();
    return returnID;
}