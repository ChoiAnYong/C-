#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char buf[10000];
	char c;
	int i = 0, count = 0;
	int alpha[26] = { 0 };
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ;�Դϴ�. 10000������ �����մϴ�." << endl;
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

	cout << "�� ���ĺ� �� " << count<<endl<<endl;

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