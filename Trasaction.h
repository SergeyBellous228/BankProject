#include <iostream>
#include "utils/UUID.h"
#include "utils/DateUtil.h"
using namespace std;

class Transaction
{
private:
	string transactionId;
	string senderAccount;
	string receiverAccount;
	int amount;
	string date;

	string generateTransactionId();


public:
	Transaction();

	Transaction(string sender, string receiver, int m_amount);

	void info();

	
};

//�������� ���� Transaction :
//
//������� ���� Transaction, ���� ����������� �������� ��������.
//�������� ����� :
//transactionId(��������� ������������� ��������),
//senderAccount(����� ������� ����������),
//receiverAccount(����� ������� ����������),
//amount(���� ��������),
//date(���� ��������).
//
//
//������� ������� info() ��� ���� �������� ���������� ��� ��������
