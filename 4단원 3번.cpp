#include<iostream>
#include<string>
using namespace std;
/*(1)��
int main() {
	string str;
	int count = 0;
	cout << "���ڿ� �Է�>> ";
	getline(cin, str, '\n');

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a')count++;
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�." <<endl;
}
*/

int main() {
	string text;
	int count = 0, index, start=0;
	cout << "���ڿ� �Է�>> ";
	getline(cin, text, '\n');
	while (1) {
		index = text.find('a', start);
		if (text.find('a', index) != -1)count++;
		else break;
		start = index + 1;
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}