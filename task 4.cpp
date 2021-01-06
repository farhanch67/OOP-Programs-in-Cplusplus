#include<iostream>
using namespace std;
struct employe{
	int id;
	float pay;
};
int main()
{
	employe e1,e2,e3;
	
	cout<<"Enter the employe id no :";
	cin>>e1.id;
	cout<<"Enter the employe pay $";
	cin>>e1.pay;
	cout<<"Enter the employe id no :";
	cin>>e2.id;
	cout<<"Enter the employe pay $";
	cin>>e2.pay;
	cout<<"Enter the employe id no :";
	cin>>e3.id;
	cout<<"Enter the employe pay $";
	cin>>e3.pay;
	cout<<"\n\nFirst Employe Id = "<<e1.id<<endl;
	cout<<"PaY $="<<e1.pay<<endl;
	cout<<"Second Employe Id = "<<e2.id<<endl;
	cout<<"PaY $="<<e2.pay<<endl;
	cout<<"Third Employe Id = "<<e3.id<<endl;
	cout<<"PaY $="<<e3.pay;
	return 0;
}
