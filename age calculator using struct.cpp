#include<iostream>
using namespace std;
struct age{
int day;
int month;
int year;
};
int main()
{
	age dob,today,t;
	today.day=4;
	today.month=3;
	today.year=2018;
	cout<<"Enter the date of birth(day/month/year)="<<endl;
	cin>>dob.day>>dob.month>>dob.year;
	t.day=today.day-dob.day;
	t.month=today.month-dob.month;
    t.year=today.year-dob.year;
    if(t.day<0)
    {
    	t.month--;
    	t.day+=60;
	}
	if(t.month<0)
	{
		t.year--;
		t.month+=12;
	}
	cout<<"Total age is ="<<t.year<<" years "<<t.month<<"  months & "<<t.day<<"days";
	return 0;


}
