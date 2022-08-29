#include<iostream>

using namespace std;

int main()
{
	int menu, n;

	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> menu;
		if (menu == 4) {
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		}
		if (menu < 1 || menu>4) {
			cout << "잘못 입력하셨습니다.\n";
			continue;
		}

		cout << "몇인분?";
		cin >> n;
		if (menu == 1)cout << "짬뽕 ";
		else if (menu == 2)cout << "짜장 ";
		else if (menu == 3)cout << "군만두 ";
		
		cout << n << "인분 나왔습니다.\n";
	}
}