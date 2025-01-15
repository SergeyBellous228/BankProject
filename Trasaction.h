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

//Створити клас Transaction :
//
//Створіть клас Transaction, який представляє банківські операції.
//Атрибути класу :
//transactionId(унікальний ідентифікатор операції),
//senderAccount(номер рахунку відправника),
//receiverAccount(номер рахунку одержувача),
//amount(сума переказу),
//date(дата операції).
//
//
//Створіть функцію info() яка буде виводить інформацію про транзакц
