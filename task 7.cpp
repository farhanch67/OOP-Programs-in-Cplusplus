#include<iostream>
using namespace std;
struct date{
	int dd;
	int mm;
	int yy;
};
struct etype{
	char typ;
};

class employe{

     etype type;
     date dat;
     float pay;
};	

int main()
{
	employe e1;
	cout<<"Enter the employe type :";
	cin>>e1.type;
	cout<<"Enter the employe Pay :";
	cin>>employe.pay;
	cout<<"Enter the date of employment :";
	cin>>e1.date.dd>>.e1.date.mm>>e1.date.yy;
	
	
	
	
	
	return 0;
}

