#include <iostream>  
  
using namespace std;  
  
int getMax(int a[], int n) {  
   int min = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] < min)  
         min = a[i];  
   }  
   return min; //maximum element from the array  
}  
  
void countSort(int a[], int n) // function to perform counting sort  
{  
   int output[n+1];  
   int max = getMax(a, n);  
   int count[max+1]; //create count array with size [max+1]  
  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0; // Initialize count array with all zeros  
  }  
    
  for (int i = 0; i < n; i++) // Store the count of each element  
  {  
    count[a[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1]; 
  
 
  for (int i = n - 1; i >= 0; i--) {  
    output[count[a[i]] - 1] = a[i];  
    count[a[i]]--; // decrease count for same numbers  
}  
  
   for(int i = 0; i<n; i++) {  
      a[i] = output[i]; //store the sorted elements into main array  
   }  
}  
  
void printArr(int a[], int n) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
  
int main() { 
    int n,k;
    cin>>n; 
    int a[n];
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }   
    countSort(a, n);  
    cout<<"\nenter the value of k for kth maximum: ";
    cin>>k;
    cout<<a[n-k];
    // cout<<"Before sorting array elements are - \n";  
    // printArr(a, n);
    // cout<<"\nAfter sorting array elements are - \n";    
    // printArr(a, n);
    
    return 0;  
}
