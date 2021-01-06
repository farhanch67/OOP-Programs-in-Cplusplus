#include<iostream>
using namespace std;
struct distanc{
	int feet;
	int inch;
};
struct volume{
	 distanc width;
     distanc height;
	 distanc length;
};
int main()
{
	volume r1;
	r1.length.feet=4;
	r1.length.inch=5.4;
	r1.height.feet=7;
	r1.height.inch=5.5;
	r1.width.feet=8;
	r1.width.inch=5.6;
	float v=r1.height.feet*r1.length.feet*r1.width.feet;
	float vol=r1.height.inch*r1.length.inch*r1.width.inch;
	do{
	
			v++;
			vol-=12;
			
	}
	while(vol>12);
	cout<<"Volume of the room is ="<<v<<" . "<<vol<<" ft^3";
	
	return 0;
}

