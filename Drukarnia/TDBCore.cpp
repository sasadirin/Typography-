#include "TDBCore.h"
#include <string>

void TDBCore::InsertOrder(String^ Vid,String^ Mat,String^ Kil,String^ Data){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=���� ������ �������.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	String^ querry="INSERT INTO ���������� (���,�������,ʳ������,����) values('"+Vid+"', '"+Mat+"','"+Kil+"','"+Data+"') ";
	conn->Open();
	command->CommandText=querry;
	command->ExecuteNonQuery();
	
	querry="INSERT INTO ����������_�������� (�������,ʳ������) values('"+Mat+"','"+Kil+"') ";
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();

}

void TDBCore::ShowRecord(DataGridView^ DBGrid,int Table){
	
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=���� ������ �������.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	String^ querry;
	if(Table==0){
		querry="SELECT *FROM ����������";
		DBGrid->ColumnCount = 5;
		DBGrid->Columns[ 0 ]->Name = "���";
		DBGrid->Columns[ 1 ]->Name = "���";
		DBGrid->Columns[ 2 ]->Name = "�������";
		DBGrid->Columns[ 3 ]->Name = "ʳ������";
		DBGrid->Columns[ 4 ]->Name = "����";

	}
	else if(Table==1){
		querry="SELECT *FROM ����������_��������";
		DBGrid->ColumnCount = 3;

		DBGrid->Columns[ 0 ]->Name = "���";
		DBGrid->Columns[ 1 ]->Name = "�������";
		DBGrid->Columns[ 2 ]->Name = "ʳ������";

	}
	else if(Table==2){
		querry="SELECT *FROM �����";
		DBGrid->ColumnCount = 2;

		DBGrid->Columns[ 0 ]->Name = "�������";
		DBGrid->Columns[ 1 ]->Name = "ʳ������";
		

	}
	else if(Table==3){
		querry="SELECT *FROM �����_���������";

		DBGrid->ColumnCount = 6;
		DBGrid->Columns[ 0 ]->Name = "���_�_�����";
		DBGrid->Columns[ 1 ]->Name = "���";
		DBGrid->Columns[ 2 ]->Name = "���";
		DBGrid->Columns[ 3 ]->Name = "�������";
		DBGrid->Columns[ 4 ]->Name = "ʳ������";
		DBGrid->Columns[ 5 ]->Name = "����";

	}
	else if(Table==4){
		querry="SELECT *FROM �����_���������_��������";
		DBGrid->ColumnCount = 4;

		DBGrid->Columns[ 0 ]->Name = "���_�_�����";
		DBGrid->Columns[ 1 ]->Name = "���";
		DBGrid->Columns[ 2 ]->Name = "�������";
		DBGrid->Columns[ 3 ]->Name = "ʳ������";

	}
	
	command->CommandText = querry;
	conn->Open();
	OleDbDataReader^ dataReader =command->ExecuteReader();
	
	
	if(Table==0){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["���"], dataReader["���"],dataReader["�������"],dataReader["ʳ������"],dataReader["����"]);

	}}
	else if(Table==1){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["���"], dataReader["�������"],dataReader["ʳ������"]);

	}}
	else if(Table==2){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["�������"], dataReader["ʳ������"]);

	}}
	else if(Table==3){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["���_�_�����"],dataReader["���"], dataReader["���"],dataReader["�������"],dataReader["ʳ������"],dataReader["����"]);

	}}
	else if(Table==4){
	while (dataReader->Read()){
		DBGrid->Rows->Add(dataReader["���_�_�����"],dataReader["���"],dataReader["�������"], dataReader["ʳ������"]);

	}}
	
	dataReader->Close();
conn->Close();
}
void TDBCore::DeleteOrder(String^ Kod){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=���� ������ �������.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	String^ querry="DELETE FROM ���������� WHERE ���="+Kod;
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();
}


void TDBCore::DeleteOrderM(String^ Kod){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=���� ������ �������.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	String^ querry="DELETE FROM ����������_�������� WHERE ���="+Kod;
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();
}


void TDBCore::InsertOrderM(String^ Mat,String^ Kil){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=���� ������ �������.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	
	String^ querry="INSERT INTO ����������_�������� (�������,ʳ������) values('"+Mat+"','"+Kil+"') ";
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();

}


void TDBCore::Finish(String^ Kod){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=���� ������ �������.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	String^ querry="INSERT INTO �����_��������� (���,���,�������,ʳ������,����) SELECT * from ���������� WHERE ���="+Kod+"";
	command->CommandText=querry;
	command->ExecuteNonQuery();
	querry="DELETE FROM ���������� WHERE ���="+Kod;
	command->CommandText=querry;
	command->ExecuteNonQuery();

conn->Close();

}
void TDBCore::FinishM(String^ Kod){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=���� ������ �������.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	String^ querry="INSERT INTO �����_���������_�������� (���,�������,ʳ������) SELECT * from ����������_�������� WHERE ���="+Kod+"";
	command->CommandText=querry;
	command->ExecuteNonQuery();
	querry="DELETE FROM ����������_�������� WHERE ���="+Kod;
	command->CommandText=querry;
	command->ExecuteNonQuery();
	
	conn->Close();

}

void TDBCore::ChangeStore(String^ Mat,String^ Kil){
	String^ connectionString ="Provider=Microsoft.Jet.OLEDB.4.0; Data Source=���� ������ �������.mdb;Persist Security Info=False";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	conn->Open();
	
	String^ querry="Update ����� SET ʳ������='"+Kil+"' WHERE �������='"+Mat+"'";
	command->CommandText=querry;
	command->ExecuteNonQuery();
conn->Close();

}