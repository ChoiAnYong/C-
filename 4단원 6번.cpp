#include<iostream>
#include<string>
using namespace std;

int main() {
	string text, reverse;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit")break;
		reverse = text;
		int j = 0;
		for (int i = text.length()-1; i >= 0; i--) {
			reverse[j] = text[i];
			j++;
		}
		cout << reverse << endl;
	}
}