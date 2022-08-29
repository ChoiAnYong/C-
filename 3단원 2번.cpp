#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d);
	Date(string s);

	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string s) {
	int index;
	year = stoi(s);
	index = s.find('/');
	month = stoi(s.substr(index + 1));
	index = s.find('/', index + 1);
	day = stoi(s.substr(index + 1));
}

void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ"<<endl;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}