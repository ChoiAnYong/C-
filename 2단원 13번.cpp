#include<iostream>

using namespace std;

int main()
{
	int menu, n;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	while (1) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> menu;
		if (menu == 4) {
			cout << "���� ������ �������ϴ�.\n";
			break;
		}
		if (menu < 1 || menu>4) {
			cout << "�߸� �Է��ϼ̽��ϴ�.\n";
			continue;
		}

		cout << "���κ�?";
		cin >> n;
		if (menu == 1)cout << "«�� ";
		else if (menu == 2)cout << "¥�� ";
		else if (menu == 3)cout << "������ ";
		
		cout << n << "�κ� ���Խ��ϴ�.\n";
	}
}