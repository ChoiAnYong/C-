#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char buf[10000];
	char c;
	int i = 0, count = 0;
	int alpha[26] = { 0 };
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ;입니다. 10000개까지 가능합니다." << endl;
	cin.getline(buf, 10000, ';');

	do{
		if (isalpha(buf[i])) {
			count++;
			c = tolower(buf[i]);
			for(int a=0; a<26; a++){
				if ((int)c == 97+a)alpha[a]++;
			}
			i++;
		}
		else i++;
	} while (buf[i] != '\0');

	cout << "총 알파벳 수 " << count<<endl<<endl;

	for (int j = 0; j < 26; j++) {
		cout << char(97 + j) << " (" << alpha[j] << ")";
		cout.width(1);
		cout << "	: ";
		for (int k = 0; k < alpha[j]; k++) {
			cout << "*";
		}
		cout << endl;
	}
}