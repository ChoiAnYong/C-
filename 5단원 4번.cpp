#include<iostream>
using namespace std;

bool bigger(int a, int b, int &big) {
	if (a == b)true;
	else {
		if (a > b)big = a;
		else big = b;
		return false;
	}
}

int main() {
	int a, b, big;

	cout << "2���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b;

	if (bigger(a, b, big)) {
		cout << "�� ���� �����ϴ�." << endl;
	}
	else {
		cout << "ū ���� " << big << "�Դϴ�." << endl;
	}
}