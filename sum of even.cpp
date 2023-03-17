#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum=0;
	cout<<"Enter th limit: ";
	cin>>n;
	
     for(i=0;i<=n;i++)	
	 {
         	if(i%2==0)
			    sum=sum+i;
	    	else
			    continue;
    }
	cout<<"The sum of all even numbers is:"<<sum<<endl;
	return 0;
}
