#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
public:
	Person() {}
	Person(string name) { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person *p;
	string familyname;
	int size;
public: 
	Family(string name, int size) {
		familyname = name;
		this->size = size;
		p = new Person[size];
	}

	void setName(int n, string name) {
		p[n].setName(name);
	}

	void show() {
		cout << familyname << "������ ������ ���� " << size << "�� �Դϴ�." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName() << "\t";
		}
		cout << endl;
	}
	~Family() {}
};

int main() {
	Family *simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}