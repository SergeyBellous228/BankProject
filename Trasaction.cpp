#include "Trasaction.h"
#include <iostream>
using namespace std;

Transaction::Transaction(string sender, string receiver, int m_amount)
{
	this->senderAccount = sender;
	this->receiverAccount = receiver;
	this->amount = m_amount;
	this->transactionId = uuid::generate_uuid_v4();

	DateUtil t = DateUtil();
	this->date = t.getDate();


}

void Transaction::info()
{
	cout << "**************************" << endl;
	cout << "����������:" << endl;
	cout << "��������� ������������� ��������: " << transactionId << endl;
	cout << "����� ������� ����������: " << senderAccount << endl;
	cout << "����� ������� ����������: " << receiverAccount << endl;
	cout << "���� ��������: " << amount << endl;
	cout << "���� ��������: " << date << endl;
	cout << "**************************" << endl;

}
