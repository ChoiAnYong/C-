#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name, adr, age;

	cout << "�̸���?";
	getline(cin, name);
	cout << "�ּҴ�?";
	getline(cin, adr);
	cout << "���̴�?";
	getline(cin, age);
	cout << name << ", " << adr << ", " << age;
}