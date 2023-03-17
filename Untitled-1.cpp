#include<iostream>
using namespace std;
int main(){
    int n;
cin>>n;
int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n;i++){
    int rem,sum=0;
    while(a[i]>0){
    a[i]=a[i]/10;
    rem=a[i]%10;
    sum=sum+rem;
    }

    if(sum%2==0){
        cout<<a[i];
    }
}
}
