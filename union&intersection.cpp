#include<iostream>
using namespace std;

void intersection(int a[], int b[], int n, int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    cout<<endl;
    return ;
}



void uni(int a[], int b[], int n, int m){

    int i=0,j=0;
    while (i<n && j<m)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else{
            if(a[i]>b[j])
            {
            cout<<b[j]<<" ";
            j++;
            }
            else{
                cout<<a[i]<<" ";
                i++;
                j++;
            }
            }
    }
    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }

    while(j<m){
        cout<<b[j]<<" ";
        j++;
    }
    return ;
}


int main(){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    intersection(a1,a2,n,m);  
    uni(a1,a2,n,m);
    return 0;
}