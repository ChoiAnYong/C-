#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	string text;
	int len, index, alp;
	srand((unsigned)time(0));
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit")break;
		len = text.length();
		alp = rand() % 26+97;
		index = rand() % len;
		text[index] = (char)alp;
		cout << text << endl;
	}
}