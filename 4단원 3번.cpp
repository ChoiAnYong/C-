#include<iostream>
#include<string>
using namespace std;
/*(1)번
int main() {
	string str;
	int count = 0;
	cout << "문자열 입력>> ";
	getline(cin, str, '\n');

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a')count++;
	}
	cout << "문자 a는 " << count << "개 있습니다." <<endl;
}
*/

int main() {
	string text;
	int count = 0, index, start=0;
	cout << "문자열 입력>> ";
	getline(cin, text, '\n');
	while (1) {
		index = text.find('a', start);
		if (text.find('a', index) != -1)count++;
		else break;
		start = index + 1;
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;
}