#include<iostream>
using namespace std;
struct sum{
	int num;
	int den;
};
int main()
{
	sum a,b;
	cout<<"Enter the first number (numenator) :";
	cin>>a.num;
	cout<<"Enter the first number (denomerator) :";
	cin>>a.den;
	cout<<"Enter the second number (numenator) :";
	cin>>b.num;
	cout<<"Enter the second number (denomerator) :";
	cin>>b.den;
	float res=a.num+b.num;
	float r=a.den+b.den;
	cout<<"Result is : "<<res<<"/"<<r;
    return 0;
}
