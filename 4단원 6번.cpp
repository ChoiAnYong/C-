#include<iostream>
#include<string>
using namespace std;

int main() {
	string text, reverse;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
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