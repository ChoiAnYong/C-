#include<iostream>
using namespace std;

class Circle {
	int r;
public:
	Circle(int r) {
		this->r = r;
	}

	void swap(Circle &a, Circle &b) {
		Circle tmp=a;
		a = b;
		b = tmp;
	}

	void getwidth() {
		cout << r * r*3.14<<endl;
	}
};

int main() {
	Circle a(5);
	Circle b(10);
	a.getwidth();
	b.getwidth();

	swap(a, b);

	a.getwidth();
	b.getwidth();
}