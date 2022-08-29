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
	Circle arr[3];
	int r, count=0;
	for (int i = 0; i < 3; i++) {
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> r;
		arr[i].setRadius(r);
		if (arr[i].getArea() > 100)count++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}