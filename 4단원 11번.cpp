#include<iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size--; }
	int getSize() { return size; }
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill() { for (int i = 0; i < 3; i++)tong[i].fill(); }
	void selectEspresso() {
		tong[0].consume();
		tong[1].consume();
		if (tong[0].getSize() < 0 || tong[1].getSize() < 0)cout << "원료가 부족합니다." << endl;
		else cout << "에스프레소 드세요" << endl;
	}
	void selectAmericano() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		if (tong[0].getSize() < 0 || tong[1].getSize() < 0)cout << "원료가 부족합니다." << endl;
		else cout << "아메리카노 드세요" << endl;
	}
	void selectSugarCoffee() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		if (tong[0].getSize() < 0 || tong[1].getSize() < 0 || tong[2].getSize() < 0)cout << "원료가 부족합니다." << endl;
		else cout << "설탕커피 드세요" << endl;
	}
	void show() {
		cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
	}
public:
	void run() {
		int menu;
		cout << "***** 커피자판기를 작동합니다. *****" << endl;
		while (true) {
			cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
			cin >> menu;
			switch (menu) {
			case 1: 
				selectEspresso();
				break;
			case 2:
				selectAmericano();
				break;
			case 3:
				selectSugarCoffee();
				break;
			case 4:
				show();
				break;
			case 5:
				fill();
				show();
				break;
			}
		}
	}
};

int main() {
	CoffeeVendingMachine cvm;
	cvm.run();
}