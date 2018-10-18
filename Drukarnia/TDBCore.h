#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::OleDb;




ref class TDBCore
{
public:
	TDBCore(void){};
	void ShowRecord(DataGridView^ DBGrid,int Table);
	void InsertOrder(String^ Vid,String^ Mat,String^ Kil,String^ Data);
	void InsertOrderM(String^ Mat,String^ Kil);
	void DeleteOrder(String^ Kod);
	void DeleteOrderM(String^ Kod);
	void Finish(String^ Kod);
	void FinishM(String^ Kod);
	void ChangeStore(String^ Mat,String^ Kil);
};

