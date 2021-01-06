#include<iostream>
using namespace std;
struct phone{
	int code;
	int exchange;
	int number;
};
int main()
{
	phone my,your;
	my.code=212;
	my.exchange=767;
	my.number=8900;
	cout<<"Enter your Area Code,Exchange and Number :";
	cin>>your.code>>your.exchange>>your.number;
	cout<<"My Number is"<<" ("<<my.code<<") "<<my.exchange<<" "<<my.number<<endl;
	cout<<"Your number is "<<" ("<<your.code<<") "<<your.exchange<<" "<<your.number;
	return 0;
}
