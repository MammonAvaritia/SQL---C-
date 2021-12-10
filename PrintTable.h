#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
#include<windows.h>
#include <map>
#include <iterator>
#include "DatabaseInfo.h"
#include "DatabaseInsert.h"

//������� ���������� ���������� ����� � ��
void LastLineInfo(DatabaseInsert* pDatabaseInsert, int* pLastLine);
//����� ������ ���� ��� �� ������� � ��
void FindAllDatabaseInsert(const DatabaseInsert* pDatabaseInsert, string pDatabaseName, DatabaseInsert* pDatabaseColumnsInsert, map<int, string> pDatabaseColumnsName, map<int, string> pColumns);
//������� ������� ���� ������� � ���� ������
void CountinSize(map<int, string>* pColumns, map<int, int>* pLengthColumn);
//������� ��������� ������� ��������� �������� � ��
void FindLength(DatabaseInsert* pDatabaseInsert, map<int, int>* pLengthInfo, int pQuontityColumns);
//������� ��������� ������� ��������� �������� � �� � ���������� �������� ������� ��
void CheckLength(map<int, int>* pLengthColumn, map<int, int>* pLengthInfo, map<int, int>* pMaxLengthInfo);
//��������� ����� � ��������
void RetreatForDatabaseColumns(map<int, string>* pColumns, map<int, int>* lMaxLengthInfo, string* pAllDatabaseColumns);
//��������� ����� � �������� ��� ������ ��
void RetreatForDatabaseInfo(map<int, string>* pColumnsIndo, map<int, int>* lMaxLengthInfo, map<int, string>* pAllDatabaseColumnsInsert);
//�������� ����� �������� ����� ��
void  OutDatabaseInsert(map<int, string>* lColumnsInfo, map<int, int>* pMaxLengthInfo, DatabaseInsert* pDatabaseInsert);
//�������� �� ������ ���������� ��������� ������
void CgeckingVeluesOfInsert(DatabaseInsert* pDatabaseInsert, int pQuontityColumns, bool* pValue);
//������ �� � ��������� � �������� (�������� ���������)
void PrintOurDatabase(DatabaseInfo* pDatabaseColumns, DatabaseInsert* pDatabaseInsert, map<int, string>* pColumns);
//������� ������� ����� � ���� ��� ������� ���� � ������� ���� �������
void PrintOurDatabaseHellper(DatabaseInfo* pDatabaseInfo, DatabaseInsert* pDatabaseInsert, string pDatabaseName, map<int, string> pDatabaseColumnsName);
//������� ������ �� �� �����
void PrintOutDatabaseInfoHellper(string lNameTable, bool lCheck, map<int, string> pDatabaseColumnsName, DatabaseInfo *gDatabaseInfo, DatabaseInsert *gDatabaseInsert);
//������� ��������� ������� �����
void PrintOutDatabaseInfo(string pFullCommand, int pNumberCurrentItemString, DatabaseInfo* pDatabaseInfo, DatabaseInsert* pDatabaseInsert);
