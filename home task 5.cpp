#include<iostream>
using namespace std;
struct date{
	int day;
	int month;
	int year;
};
int main()
{
	date today;
	cout<<"Enter the today daye(day/month/year) :";
	cin>>today.day>>today.month>>today.year;
	cout<<"Date is "<<today.day<<"/"<<today.month<<"/"<<today.year;
	return 0;
}
