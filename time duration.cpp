#include<iostream>
using namespace std;
struct time{
	int hour;
	int min;
	int sec;
};
int main()
{
	time start,end,d;
	cout<<"Enter the starting time ="<<endl;
	cin>>start.hour>>start.min>>start.sec;
	cout<<"Enter the ending time of class ="<<endl;
	cin>>end.hour>>end.min>>end.sec;
	d.hour=end.hour-start.hour;
	d.min=end.min-start.min;
	d.sec=end.sec-start.sec;
	if(d.hour<0)
	{
		d.hour+=12;
	}
	if(d.min<0)
	{
		d.hour--;
		d.min+=60;
	}
	if(d.sec<0)
    {
    	d.min--;
    	d.sec+=60;
	}
	cout<<"Duration oF class is = "<<d.hour<<" Hours "<<d.min<<" mins "<<d.sec<<" secs ";
	return 0;
}
