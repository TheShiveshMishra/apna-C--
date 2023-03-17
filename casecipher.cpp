#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    char arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count;
    // cout<<"enter count: ";
    cin>>count;

    for(int i=0;i<n;i++){
        arr[i]=arr[i]+count;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;

}   