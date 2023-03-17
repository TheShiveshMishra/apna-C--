#include<iostream>
using namespace std;
    
int main(){

    int n;
    cin>>n;

    for(int i=0;i<=3*n;i++){
        if(i<n || i>2*n){
           cout<<"@"<<endl;
        }
        else
        {
            // if(i<2*n){
                if(i==n) 
                {
                    cout<<"@";
                    for(int j=0;j<=n;j++)
                    {
                    cout<<"*";
                    }
                }
                for(int k=0,x=0;k<n-x;k++,x++)
                {
                    cout<<" ";

                }        
                for(int j=0;j<=n;j++){
                    cout<<"*";
                }

                cout<<endl;
        //    } 
        }
    }
    return 0;
}