#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr=arr[0];
    for(int i=0;i<n;i++){
    //    if(arr[i]>arr[i+1]){}
    curr=max(curr,arr[i]);
    cout<<endl<<curr;
    }
    return 0;
}