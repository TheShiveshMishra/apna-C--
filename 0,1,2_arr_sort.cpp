#include<iostream>
using namespace std;

void sort012(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
            if(a[i]<1){
                // b[j]=a[i];
                cout<<a[i]<<" ";
                j++;
            }
    }
    for(int i=0;i<n;i++){
            if(a[i]<2 && a[i]>0)
            {
                // b[j]=a[i];
                cout<<a[i]<<" ";
                j++;
            }
    }
    for(int i=0;i<n;i++){
            if(a[i]<3 && a[i]>1)
            {
                // b[j]=a[i];
                cout<<a[i]<<" ";
                j++;
            }
    }
    return ;
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    return 0;
}