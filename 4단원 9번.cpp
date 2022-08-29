#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};

int main() {
	string text, name, tel, find;
	Person parry[3];

	cout << "이름과 전화 번호를 입력해 주세요" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		getline(cin, text, '\n');
		int index = text.find(' ');
		name = text.substr(0, index);
		tel = text.substr(index + 1);
		parry[i].set(name, tel);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << parry[i].getName() << " ";
	}
	cout << endl;
	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> find;
	for (int i = 0; i < 3; i++) {
		if (parry[i].getName() == find) {
			cout << "전화 번호는 " << parry[i].getTel() << endl;
			return 0;
		}
	}
	cout << "없는 번호입니다." << endl;
}