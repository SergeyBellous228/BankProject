//
// Created by student on 20.12.2024.
//

#include "Account.h"

#include <iomanip>

#include "../utils/DateUtil.h"
#include "../utils/UUID.h"

Account::Account() {

}

Account::Account(User applicant) {
    this->id = uuid::generate_uuid_v4();
    this->applicant = applicant;
    DateUtil date = DateUtil();
    this->date = date.getDate();
    this->status = "new";
}

User Account::getApplicant() {
    return applicant;
}

string Account::getDate() {
    return date;
}

string Account::getStatus() {
    return status;
}

string Account::getId() {
    return id;
}

void Account::setStatus(string status) {
    this->status = status;
}

void Account::show() {
    cout << "ID: " << id << endl;
    cout << "Status: " << status << endl;
    cout << "Date: " << date << endl;
    cout << "USER: " << applicant.getName() << endl;
}

nlohmann::json Account::toJson() {
    return nlohmann::json{
        {"id", id},
        {"applicant", applicant.toJson()},
        {"date", date},
        {"status", status}
    };
}

int Account::getBalance() {
    return amount;
};

void Account::addToBalance(double amount) {
    if (amount > 0) {
        this->amount += amount;
    }
    else {
        cout << "inncorect amount input..." << endl;
    }
}

void Account::minusFromBalance(double Amount) {
    if (Amount > 0) {
        if (Amount <= amount) {
            this->amount -= Amount;
        }
        else {
            cout << "not enough money..." << endl;
        }
    }
    else {
        cout << "inncorect amount input..." << endl;
    }
    
}
