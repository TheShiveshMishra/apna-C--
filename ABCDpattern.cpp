#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char ch,k;
    ch='A';
    while(i<=n)
    {
        int j=0;
        while(j<n)
        {
            k=ch+j;
            cout<<k;
            j++;
        } 
        cout<<endl;
        ch=k+1;
        i++;
    }
    return 0;
}