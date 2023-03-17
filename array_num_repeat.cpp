#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n;i++)
    {
     int word=arr[i];
     int k=0;
     for(int j=i+1;j<n;j++){
        if(word==arr[j]){
            k++;
        }
     }
     cout<<word<<"-"<<k+1<<endl;
    }
    return 0;
}