#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, sum = 0;
	char menu[100];

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	while (1) {
		cout << "�ֹ�>>";
		cin >> menu >> n;
		if (strcmp(menu, "����������") == 0) {
			sum += 2000*n;
			cout << 2000 * n << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(menu, "�Ƹ޸�ī��") == 0){
			sum += 2300*n;
			cout << 2300 * n << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(menu, "īǪġ��") == 0) {
			sum += 2500*n;
			cout << 2500 * n << "���Դϴ�. ���ְ� �弼��"<<endl;
		}
		if (sum >= 20000) {
			cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~" << endl;
			break;
		}
	}
}