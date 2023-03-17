#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m;
    cin>>m;

    sort(a,a+n);
    // for(int i=0;i<m;i++){
    //     cout<<a[i]<<" ";
    // }
    cout<<endl;
    cout<<a[m-1]-a[0];
    return 0;
}