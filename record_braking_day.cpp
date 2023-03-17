#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int count=0,curr=a[0];
    for(int i=0;i<n;i++){
        curr=max(curr,a[i]);
        if(i==0){
            if(a[i]>a[i+1]) count++;
        }
        if(i>n-2 && i<n){
            if(a[i]>curr) count++;
        }
        if(i>0 && i<n-1){
            if(curr<=a[i]){
                if(a[i]>a[i+1])
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}