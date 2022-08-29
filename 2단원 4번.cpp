#include<iostream>
using namespace std;

int main()
{
	float a[5];
	float max;

	cout << "5개의 실수를 입력하라>>";

	for (int i = 0; i < 5; i++)
		cin >> a[i];
	max = a[0];

	for (int i = 0; i < 5; i++)
		if (max < a[i]) max = a[i];

	cout << "큰 수 = " << max;
}