#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=arr[0];
    int i=0,temp=0,r=0;
    while(k!=n && k<n){
        r=k;
        k=arr[k+temp];
        temp=r;
        i++;
    }
    cout<<i;
    
return 0;

}
