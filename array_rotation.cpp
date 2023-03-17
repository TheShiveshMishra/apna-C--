#include<iostream>
using namespace std;

void rotate(int a[],int n)
{
    int last=a[n-1];
    for(int i=n-2;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]=last;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}



int main(){
    int n,t;
    cin>>n;
    t=n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr,n);

    
    return 0;
}