#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // printArray(arr,n);

    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }

    printArray(arr,n);


    return 0;
}