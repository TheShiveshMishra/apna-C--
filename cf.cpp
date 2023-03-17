#include<iostream>
using namespace std;
int main()
{
	int c,f,temp;
	cout<<"Enter the value in fahrenheit:";
	cin>>f;
	temp=f-32;
	c=1.8*temp;
	cout<<f<<" fahrenheit = "<<c<<" celcius";
}
