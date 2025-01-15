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
	cout << "транзакція:" << endl;
	cout << "унікальний ідентифікатор операції: " << transactionId << endl;
	cout << "номер рахунку відправника: " << senderAccount << endl;
	cout << "номер рахунку одержувача: " << receiverAccount << endl;
	cout << "сума переказу: " << amount << endl;
	cout << "дата операції: " << date << endl;
	cout << "**************************" << endl;

}
