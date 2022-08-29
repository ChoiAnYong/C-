#include<iostream>
#include<cstring>
#pragma warning(disable: 4996)
using namespace std;

int main()
{
	char str[100];
	int a, b;
	char *mode;

	while (1) {
		cout << "? ";
		cin.getline(str, 100);
		char *token = strtok(str, " ");
		a = atoi(token);
		token = strtok(NULL, " ");
		mode = token;
		token = strtok(NULL, " ");
		b = atoi(token);

		switch (*mode) {
		case '+':
			cout << a << " + " << b << " = " << a + b << endl; 
			break;
		case '-':
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case '*':
			cout << a << " * " << b << " = " << a * b << endl;
			break;
		case '/':
			cout << a << " / " << b << " = " << a / b << endl;
			break;
		case '%':
			cout << a << " % " << b << " = " << a % b << endl;
			break;
		}
	}
}