#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

class Player {
	string name;
	int num[3];
public:
	void setName(string name) { this->name = name; }
	void setNum() {
		cout << "\t\t";
		for (int i = 0; i < 3; i++) {
			num[i] = rand()%3;
			cout << num[i] << "\t";
		}
	}
	string getName() { return name; }
	bool check() {
		if (num[0] == num[1] && num[0] == num[2] && num[1] == num[2])return true;
		else return false;
	}
};

class GamblingGame {
	Player list[2];
public:
	void setPlayer() {
		string name;
		cout << "ù��° ���� �̸�>>";
		cin >> name;
		list[0].setName(name);
		cout << "�ι�° ���� �̸�>>";
		cin >> name;
		list[1].setName(name);
	}

	void run() {
		srand((unsigned)time(0));
		cout << "***** ���� ������ �����մϴ�. *****" << endl;
		setPlayer();
		cin.ignore();
		int turn=0;
		char start;
		while (true) {
			cout << list[turn].getName() << ":<Enter>" << endl;
			cin.get(start);
			if (start == '\n') {
				list[turn].setNum();
				if (list[turn].check()) {
					cout << list[turn].getName() << "�� �¸�!!";
					break;
				}
				else {
					cout << "�ƽ�����!" << endl;
					turn = (turn + 1) % 2;
				}
			}
		}
	}
};

int main() {
	GamblingGame gg;
	gg.run();
}