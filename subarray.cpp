#include<iostream>
using namespace std;

void printstr(string str, int start, int end)
{
    for(int i=start;i<end;i++){
        cout<<str[i];
    }
    cout<<endl;
}

void longest_pal_str(string str){
    int st=0,en=1;
    int l,h;

    for(int i=1;i<str.length();i++){
        // even string
        l=i-1;
        h=i;

        while(l>=0 && h<str.length() && str[l]==str[h]){

            if(h-l+1>en){
                st=l;
                en=h-l+1;
            }
            l--;
            h++;
        }
        // odd string
        l=i-1;
        h=i+1;

        while(l>=0 && h<str.length() && str[l]==str[h]){

            if(h-l+1>en){
                st=l;
                en=h-l+1;
            }
            l--;
            h++;
        }
    }
    printstr(str,st,en);
}

int main(){
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        longest_pal_str(s);
        cout<<endl;
    }

    return 0;
}