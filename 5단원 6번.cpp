#include<iostream>
using namespace std;

char &find(char a[], char c, bool&success) {
	int i = 0;
	while (1) {
		char tmp = a[i];
		if (tmp == c) {
			success = true;
			return a[i];
		}
		else {
			success = false;
			return c;
		}
	}
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char &loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다." << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}