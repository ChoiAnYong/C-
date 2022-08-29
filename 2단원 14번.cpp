#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, sum = 0;
	char menu[100];

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	while (1) {
		cout << "주문>>";
		cin >> menu >> n;
		if (strcmp(menu, "에스프레소") == 0) {
			sum += 2000*n;
			cout << 2000 * n << "원입니다. 맛있게 드세요" << endl;
		}
		else if (strcmp(menu, "아메리카노") == 0){
			sum += 2300*n;
			cout << 2300 * n << "원입니다. 맛있게 드세요" << endl;
		}
		else if (strcmp(menu, "카푸치노") == 0) {
			sum += 2500*n;
			cout << 2500 * n << "원입니다. 맛있게 드세요"<<endl;
		}
		if (sum >= 20000) {
			cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~" << endl;
			break;
		}
	}
}