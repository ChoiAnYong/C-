#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	string b;

	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요.\n";
	cout << "로미오>>";
	cin >> a;
	cout << "줄리엣>>";
	cin >> b;

	if (a == "가위" && b == "보")
		cout << "로미오가 이겼습니다." << endl;
	else if (a == "가위" && b == "바위")
		cout << "줄리엣이 이겼습니다." << endl;
	else if (a == "바위" && b == "가위")
		cout << "로미오가 이겼습니다." << endl;
	else if (a == "바위" && b == "보")
		cout << "줄리엣이 이겼습니다." << endl;
	else if (a == "보" && b == "바위")
		cout << "로미오가 이겼습니다." << endl;
	else if (a == "보" && b == "가위")
		cout << "줄리엣이 이겼습니다." << endl;
	else
		cout << "비겼습니다." << endl;
}