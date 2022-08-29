#include<iostream>
#include<string>
using namespace std;

class Integer {
private:
	int n;
public:
	Integer(int n) {
		this->n = n;
	}
	Integer(string s) {
		this->n = stoi(s);
	}

	int get() {
		return n;
	}

	void set(int n) {
		this->n = n;
	}

	bool isEven() {
		if (n % 2 == 0)return true;
		else return false;
	}

};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}