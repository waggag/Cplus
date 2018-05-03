#include<iostream>
using namespace std;
class Date {
	public:
		Date(int _month=10, int _day=10, int _year=2018);
		void show();
	private:
		int year;
		int month;
		int day;
};

Date::Date(int _month,  int _day, int _year)
{
	month = _month;
	day = _day;
	year = _year;
}

void Date::show()
{
	cout<<month<<"/"<<day<<"/"<<year<<endl;
}

int main()
{
	Date d1(10,13,2018);
    Date d2(12,30);
	Date d3(10);
	Date d4;
	d1.show();
	d2.show();
	d3.show();
	d4.show();
}




