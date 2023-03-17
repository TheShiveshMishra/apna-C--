#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin>>n;
    t=n;
    int arr[n];
    
//reverse of any array
    while(t--){
        cin>>arr[t];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}