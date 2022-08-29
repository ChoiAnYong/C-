#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random {
private:
	int mode;
public:
	Random(int n);
	int next();
	int nextInRange(int a, int b);
	string getMode();
};

Random::Random(int n) {
	srand((unsigned)time(NULL));
	mode = n;
}

int Random::next() {
	int n;
	do {
		n = rand();
	} while (n % 2 != mode);
	return n;
}

int Random::nextInRange(int a, int b) {
	int n;
	do {
		n = rand() % (b - a + 1) + a;
	} while (n % 2 != mode);
	return n;
}

string Random::getMode() {
	if (mode == 0)return "¦��";
	else if (mode == 1)return "Ȧ��";
}

int main() {
	Random r(0);
	Random r1(1);
	cout << "-- 0���� " << RAND_MAX << "������ " << r.getMode() << " ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 9������ " << r1.getMode() <<  "���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r1.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}