#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name, adr, age;

	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, adr);
	cout << "나이는?";
	getline(cin, age);
	cout << name << ", " << adr << ", " << age;
}