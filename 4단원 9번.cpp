#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};

int main() {
	string text, name, tel, find;
	Person parry[3];

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		getline(cin, text, '\n');
		int index = text.find(' ');
		name = text.substr(0, index);
		tel = text.substr(index + 1);
		parry[i].set(name, tel);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << parry[i].getName() << " ";
	}
	cout << endl;
	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> find;
	for (int i = 0; i < 3; i++) {
		if (parry[i].getName() == find) {
			cout << "��ȭ ��ȣ�� " << parry[i].getTel() << endl;
			return 0;
		}
	}
	cout << "���� ��ȣ�Դϴ�." << endl;
}