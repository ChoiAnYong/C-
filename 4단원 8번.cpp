#include<iostream>
using namespace std;
#define FI 3.14
class Circle {
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() {
		return radius * radius*FI;
	}
};

int main() {
	int n;
	cout << "���� ���� >> ";
	cin >> n;
	Circle *arr = new Circle[n];
	int r, count = 0;
	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		arr[i].setRadius(r);
		if (arr[i].getArea() > 100)count++;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;
}