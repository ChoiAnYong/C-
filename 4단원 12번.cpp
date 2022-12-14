#include<iostream>
#include<string>
using namespace std;
#define FI 3.14

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager {
	Circle *p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName(string name);
	void searchByArea(int area);
};

void Circle::setCircle(string name, int radius) {
	this->radius = radius;
	this->name = name;
}

double Circle::getArea() {
	return radius * radius *FI;
}

string Circle::getName() {
	return name;
}

CircleManager::CircleManager(int size) {
	int r;
	string name;
	this->size = size;
	p = new Circle[this->size];
	for (int i = 0; i < this->size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> r;
		p[i].setCircle(name, r);
	}
}

CircleManager::~CircleManager() {
	delete []p;
}

void CircleManager::searchByName(string name) {
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			return;
		}
	}
	cout << name << "은 없습니다." << endl;
}

void CircleManager::searchByArea(int area) {
	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	int n,r,Marea;
	string name, find;
	cout << "원의 개수 >> ";
	cin >> n;
	CircleManager cm(n);
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> find;
	cm.searchByName(find);
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> Marea;
	cm.searchByArea(Marea);
}