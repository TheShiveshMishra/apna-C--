//INPUT: 10 20 30
//OUTPUT: 30 20 10

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char arr[5],arr1[5];
    int i,count,l;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    
    l=strlen(arr)-1;
    for(i=0;i<=l;i++){
        if(arr[i]==32){
            while(count!=0){
                arr1[l-count-1]=arr[i-1];
                i--;
                count--;
            }
            count=0;
        }
        else{
            count++;
        }
    }
    for(i=0;i<=l;i++){
        cout<<" "<<arr1[i];
    }
    return 0;
}
