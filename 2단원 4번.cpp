#include<iostream>
using namespace std;

int main()
{
	float a[5];
	float max;

	cout << "5���� �Ǽ��� �Է��϶�>>";

	for (int i = 0; i < 5; i++)
		cin >> a[i];
	max = a[0];

	for (int i = 0; i < 5; i++)
		if (max < a[i]) max = a[i];

	cout << "ū �� = " << max;
}