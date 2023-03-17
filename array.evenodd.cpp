#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int num_even=0,num_odd=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=1)
		   num_even++;
		else
		   num_odd++;   
	}
	cout<<"Even : "<<num_even<<endl;
	cout<<"Odd : "<<num_odd<<endl;
	return 0;
	
}
