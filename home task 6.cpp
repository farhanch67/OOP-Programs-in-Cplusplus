#include<iostream>
using namespace std;
struct employ{
	char type;
};
int main()
{
	employ info;
	
	cout<<"Enter the employe type (First letter only) :"<<endl;
	cout<<"(a , m , l , s , e , r)  :";
	cin>>info.type;
	if(info.type=='a')
	   {
	   	cout<<"Employ type is accountant";
	   }
	   if(info.type=='m')
	   {
	   	cout<<"Employ type is Manager";
	   }
	   if(info.type=='l')
	   {
	   	cout<<"Employ type is labour";
	   }
	   if(info.type=='s')
	   {
	   	cout<<"Employ type is secretary";
	   }
	   if(info.type=='e')
	   {
	   	cout<<"Employ type is Exective";
	   }
	   if(info.type=='r')
	   {
	   	cout<<"Employ type is researcher";
	   }
	      
	return 0;
}
