#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=a[0];
    for(int i=1;i<n;i++)
    {
        if(k<a[i]){
            k=a[i];
        }
    }
    cout<<"max="<<k;

    int count[k+1];

    for(int i=0;i<n;i++)
    {
        ++count[a[i]];
    }

    for(int i=1;i<=k;i++)
    {
        count[i]=count[i] + count[i-1];
    }

    for(int i=n-1;i>=0;i--)
    {
        b[--count[a[i]]]=a[i];
    }

    // printing array
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
cout<< "sorted array:";
    for(int j=0;j<n;j++){

        cout<<" "<<a[j];
    }

    return 0;
}