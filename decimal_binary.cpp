#include<iostream>
#include<math.h>

using namespace std;

/*void binToDeci(int n)
 {
   int r=0,i=0;
   while(n>0){
     int p=pow(2,i);
     int rem=n%10;
     r=r+(p*rem);
     n=n/10;
     i++;
   }
   cout<<r;
   
   return;
 }*/

//  void deciToBin(int n){
//     int rem[32];
//     int i=0;
//     while(n>0)
//     {
//         rem[i]=n%2;
//         n=n/2;
//         i++;
//     }

//     for(int j=i-1;j>=0;j--){
//         cout<<rem[j];
//     }
//  }

 void deciToOctal(int n){
    int rem[32];
    int i=0;
    while(n>0)
    {
        rem[i]=n%8;
        n=n/8;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        cout<<rem[j];
    }
 }


// void octalToDeci(int n)
//  {
//    int r=0,i=0;
//    while(n>0){
//      int p=pow(8,i);
//      int rem=n%10;
//      r=r+(p*rem);
//      n=n/10;
//      i++;
//    }
//    cout<<r;
   
//    return;
//  }


 int main()
 {
    int n;
    cin>>n;
    // deciToBin(n);
   //  octalToDeci(n);
  //   binToDeci(n);
   //  deciToOctal(n);
    return 0;
 }
