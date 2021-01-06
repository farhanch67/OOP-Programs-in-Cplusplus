#include<iostream>
using namespace std;
struct time{
	int s;
	int m;
	int h;
};
int main()
{
	time now;
	cout<<"Enter the time (hours/min/sec)";
	cin>>now.h>>now.m>>now.s;
	double total;
	total=now.h*3600+now.m*60+now.s;
	cout<<"Total secs in time are : "<<total<<" secs";	
	return 0;
}
