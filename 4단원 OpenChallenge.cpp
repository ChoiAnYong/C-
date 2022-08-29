#include<iostream>
#include<string>
using namespace std;

class Player {
	string name;
	string word;
public:
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void setWord(string word) { this->word = word; }
	string getword() { return word; }
};

class WordGame {
	string a, b;
public:
	void set(string a, string b) { this->a = a; this->b = b; }
	bool check() {
		int asize = a.size();
		int bsize = b.size();

		if (a.at(asize - 2) == b.at(0) && a.at(asize - 1) == b.at(1))return true;
		else return false;
	}

	void run() {
		int n, count=0, start=0;
		string str;
		cout << "���� �ձ� ������ �����մϴ�." << endl;
		cout << "������ �����ϴ� �ο��� ����Դϱ�?";
		cin >> n;
		Player *parray = new Player[n];
		for (int i = 0; i < n; i++) {
			cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
			cin >> str;
			parray[i].setName(str);
		}
		cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�." << endl;
		while (1) {
			cout << parray[count].getName() << ">>";
			cin >> str;
			parray[count].setWord(str);
			if (start == 0) {
				set("�ƹ���", parray[count].getword());
				start++;
			}
			else {
				set(parray[(count + n - 1) % n].getword(), parray[count].getword());
			}
			if (check()) {
				count=(count+n+1)%n;
			}
			else {
				cout << "�����Ͽ����ϴ�." << endl;
				break;
			}
		}
	}
};

int main() {
	WordGame main;
	main.run();
}