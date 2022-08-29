#include<iostream>
using namespace std;

int main()
{
	int n, sum=0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다.";
}