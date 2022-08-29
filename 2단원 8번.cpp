#include<iostream>
#include<cstring>
#pragma warning(disable: 4996)
using namespace std;

int main()
{
	char name[100];
	char list[100];
	int count = 0;

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n";
	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 100, ';');
		if (i == 0)strcpy(list, name);
		if (strlen(name) > strlen(list))strcpy(list, name);
		cout << i + 1 << " : " << name << endl;
	}

	cout << "가장 긴 이름은 " << list;
}