#include<iostream>
#include<cstring>
#pragma warning(disable: 4996)
using namespace std;

int main()
{
	char name[100];
	char list[100];
	int count = 0;

	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n";
	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 100, ';');
		if (i == 0)strcpy(list, name);
		if (strlen(name) > strlen(list))strcpy(list, name);
		cout << i + 1 << " : " << name << endl;
	}

	cout << "���� �� �̸��� " << list;
}