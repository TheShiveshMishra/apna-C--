#include<iostream>
using namespace std;

int largestsum(int a[],int n){
    int sum=0;
    int maxi=a[0];
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}






int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<largestsum(arr,n);

}