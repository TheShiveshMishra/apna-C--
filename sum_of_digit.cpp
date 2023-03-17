#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n],m,temp,sum=0;
    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++){
        temp=a[i];
        sum=0;
        while (a[i]>0)
        {
            
            m=a[i]%10;
            sum=sum+m;
            a[i]=a[i]/10;
        }
        if(sum%2!=0){
        cout<<temp<<" ";
        }
    }
    return 0;
}