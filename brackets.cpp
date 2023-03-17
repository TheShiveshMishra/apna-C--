#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]==40){
            b[j]=a[i];
            j++;        }
    }
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==41){
            b[j]=a[i];
            j++;        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
    
    return 0;
}