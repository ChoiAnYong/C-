#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	string b;

	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���.\n";
	cout << "�ι̿�>>";
	cin >> a;
	cout << "�ٸ���>>";
	cin >> b;

	if (a == "����" && b == "��")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if (a == "����" && b == "����")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else if (a == "����" && b == "����")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if (a == "����" && b == "��")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else if (a == "��" && b == "����")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if (a == "��" && b == "����")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else
		cout << "�����ϴ�." << endl;
}