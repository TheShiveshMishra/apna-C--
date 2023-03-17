#include<iostream>
using namespace std;
int main()
{
	string str;
	int i;
	cout<<"Enter string: ";
	cin>>str;
	int len=str.length()-1;
	for(i=len;i>=0;i--){
		cout<<str[i];
	}
	return 0;
}
