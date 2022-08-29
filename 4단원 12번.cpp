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
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
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
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
			return;
		}
	}
	cout << name << "�� �����ϴ�." << endl;
}

void CircleManager::searchByArea(int area) {
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	int n,r,Marea;
	string name, find;
	cout << "���� ���� >> ";
	cin >> n;
	CircleManager cm(n);
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> find;
	cm.searchByName(find);
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> Marea;
	cm.searchByArea(Marea);
}