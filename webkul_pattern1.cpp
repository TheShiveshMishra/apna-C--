#include<iostream>
using namespace std;
    
int main()
{

    int n;
    cin>>n;
    if(n%2==0)
    {
        return 0;
    }
    else{
        for(int i=0;i<n+4;i++){
            for(int j=0;j<n+4;j++){
                cout<<"e";   
            }
            if(i<=n){
                for(int k=0;k<(n/2)+1;k++){
                    for(int j=k;j<n-i-1;j++){
                        cout<<" ";
                    }

                    for(int j=0;j<n-i-1;j++){
                        cout<<"*";
                    }
                }
            }                
            cout<<endl;
        }
    }

    return 0;
}