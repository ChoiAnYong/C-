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

	cout << "2개의 정수를 입력하시오: ";
	cin >> a >> b;

	if (bigger(a, b, big)) {
		cout << "두 수가 같습니다." << endl;
	}
	else {
		cout << "큰 수는 " << big << "입니다." << endl;
	}
}