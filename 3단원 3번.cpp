#include<iostream>
#include<string>
using namespace std;

class Account {
private:
	string name;
	int id;
	int balance;
public:
	Account(string name, int id, int balance);
	string getOwner();
	void deposit(int n);
	int withdraw(int n);
	int inquiry();
};

Account::Account(string name, int id, int balance) {
	this->name = name;
	this->id = id;
	this->balance = balance;
}

string Account::getOwner() {
	return name;
}

void Account::deposit(int n) {
	balance += n;
}

int Account::withdraw(int n) {
	balance -= n;
	return n;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}