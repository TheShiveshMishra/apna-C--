// Find the "Kth" max and min element of an array 

#include "bits/stdc++.h"
using namespace std;
 
int main()
{
   int n;
   cin>>n;

   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }

   sort(a,a+n);

   int k;
   cin>>k;
   cout<<a[k-1];
   return 0;

}