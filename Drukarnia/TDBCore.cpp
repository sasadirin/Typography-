#include "TDBCore.h"
#include <string>

void TDBCore::InsertOrder(String^ Vid,String^ Mat,String^ Kil,String^ Data){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=База Данних друкарні.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	String^ querry="INSERT INTO Замовлення (Вид,Матеріал,Кількість,Дата) values('"+Vid+"', '"+Mat+"','"+Kil+"','"+Data+"') ";
	conn->Open();
	command->CommandText=querry;
	command->ExecuteNonQuery();
	
	querry="INSERT INTO Замовлення_Матеріалів (Матеріал,Кількість) values('"+Mat+"','"+Kil+"') ";
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();

}

void TDBCore::ShowRecord(DataGridView^ DBGrid,int Table){
	
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=База Данних друкарні.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	String^ querry;
	if(Table==0){
		querry="SELECT *FROM Замовлення";
		DBGrid->ColumnCount = 5;
		DBGrid->Columns[ 0 ]->Name = "Код";
		DBGrid->Columns[ 1 ]->Name = "Вид";
		DBGrid->Columns[ 2 ]->Name = "Матеріал";
		DBGrid->Columns[ 3 ]->Name = "Кількість";
		DBGrid->Columns[ 4 ]->Name = "Дата";

	}
	else if(Table==1){
		querry="SELECT *FROM Замовлення_матеріалів";
		DBGrid->ColumnCount = 3;

		DBGrid->Columns[ 0 ]->Name = "Код";
		DBGrid->Columns[ 1 ]->Name = "Матеріал";
		DBGrid->Columns[ 2 ]->Name = "Кількість";

	}
	else if(Table==2){
		querry="SELECT *FROM Склад";
		DBGrid->ColumnCount = 2;

		DBGrid->Columns[ 0 ]->Name = "Матеріал";
		DBGrid->Columns[ 1 ]->Name = "Кількість";
		

	}
	else if(Table==3){
		querry="SELECT *FROM Архів_замовлень";

		DBGrid->ColumnCount = 6;
		DBGrid->Columns[ 0 ]->Name = "Код_в_архіві";
		DBGrid->Columns[ 1 ]->Name = "Код";
		DBGrid->Columns[ 2 ]->Name = "Вид";
		DBGrid->Columns[ 3 ]->Name = "Матеріал";
		DBGrid->Columns[ 4 ]->Name = "Кількість";
		DBGrid->Columns[ 5 ]->Name = "Дата";

	}
	else if(Table==4){
		querry="SELECT *FROM Архів_замовлень_матеріалів";
		DBGrid->ColumnCount = 4;

		DBGrid->Columns[ 0 ]->Name = "Код_в_архіві";
		DBGrid->Columns[ 1 ]->Name = "Код";
		DBGrid->Columns[ 2 ]->Name = "Матеріал";
		DBGrid->Columns[ 3 ]->Name = "Кількість";

	}
	
	command->CommandText = querry;
	conn->Open();
	OleDbDataReader^ dataReader =command->ExecuteReader();
	
	
	if(Table==0){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["Код"], dataReader["Вид"],dataReader["Матеріал"],dataReader["Кількість"],dataReader["Дата"]);

	}}
	else if(Table==1){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["Код"], dataReader["Матеріал"],dataReader["Кількість"]);

	}}
	else if(Table==2){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["Матеріал"], dataReader["Кількість"]);

	}}
	else if(Table==3){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["Код_в_архіві"],dataReader["Код"], dataReader["Вид"],dataReader["Матеріал"],dataReader["Кількість"],dataReader["Дата"]);

	}}
	else if(Table==4){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["Код_в_архіві"],dataReader["Код"],dataReader["Матеріал"], dataReader["Кількість"]);

	}}
	
	dataReader->Close();
conn->Close();
}
void TDBCore::DeleteOrder(String^ Kod){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=База Данних друкарні.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	String^ querry="DELETE FROM Замовлення WHERE Код="+Kod;
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();
}


void TDBCore::DeleteOrderM(String^ Kod){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=База Данних друкарні.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	String^ querry="DELETE FROM Замовлення_матеріалів WHERE Код="+Kod;
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();
}


void TDBCore::InsertOrderM(String^ Mat,String^ Kil){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=База Данних друкарні.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	
	String^ querry="INSERT INTO Замовлення_Матеріалів (Матеріал,Кількість) values('"+Mat+"','"+Kil+"') ";
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();

}


void TDBCore::Finish(String^ Kod){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=База Данних друкарні.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	String^ querry="INSERT INTO Архів_замовлень (Код,Вид,Матеріал,Кількість,Дата) SELECT * from Замовлення WHERE Код="+Kod+"";
	command->CommandText=querry;
	command->ExecuteNonQuery();
	querry="DELETE FROM Замовлення WHERE Код="+Kod;
	command->CommandText=querry;
	command->ExecuteNonQuery();

conn->Close();

}
void TDBCore::FinishM(String^ Kod){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=База Данних друкарні.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	String^ querry="INSERT INTO Архів_замовлень_матеріалів (Код,Матеріал,Кількість) SELECT * from Замовлення_матеріалів WHERE Код="+Kod+"";
	command->CommandText=querry;
	command->ExecuteNonQuery();
	querry="DELETE FROM Замовлення_матеріалів WHERE Код="+Kod;
	command->CommandText=querry;
	command->ExecuteNonQuery();
	
	conn->Close();

}

void TDBCore::ChangeStore(String^ Mat,String^ Kil){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=База Данних друкарні.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	
	String^ querry="Update Склад SET Кількість='"+Kil+"' WHERE Матеріал='"+Mat+"'";
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();

}