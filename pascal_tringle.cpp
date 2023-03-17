#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=n;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
//nCr=n!/(r!*(n-r)!)
//fact(n)/(fact(r)*fact(n-r))
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}