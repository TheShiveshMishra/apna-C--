#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min,max,temp;
    if(arr[0]>arr[1]){
        min=arr[1];
    }
    else{
        min=arr[1];
    }
    int var=1;
    for(int i=2;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            var++;
        }
    }
    if(var==n){
        cout<<"no transation found"<<endl;
        return 0;
    }
    else{
        if(arr[var+1]<arr[var+2]){
        max=arr[var+2];
    }
    else{
        max=arr[var+1];
    }
    for(int i=var+3;i<n;i++){
         if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max-min;
    }
    return 0;
}