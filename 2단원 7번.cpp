#include<iostream>
using namespace std;

int main()
{
	while (1) {
		char str[100];
		cout << "종료하고싶으면  yes를 입력하세요>>";
		cin.getline(str, 100, '\n');

		if (str[0] == 'y' && str[1] =='e' && str[2] == 's') {
			cout << "종료합니다...";
			break;
		}
	}
}