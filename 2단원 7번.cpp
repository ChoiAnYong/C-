#include<iostream>
using namespace std;

int main()
{
	while (1) {
		char str[100];
		cout << "�����ϰ������  yes�� �Է��ϼ���>>";
		cin.getline(str, 100, '\n');

		if (str[0] == 'y' && str[1] =='e' && str[2] == 's') {
			cout << "�����մϴ�...";
			break;
		}
	}
}