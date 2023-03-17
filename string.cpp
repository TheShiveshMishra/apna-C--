#include<stdio.h>
int main(){
   //Declaring variable for For loop (to read each position of alphabet) and string//
   int i;
   char string[40];
   //Reading string//
   printf("Enter the string : ");
   gets(string);
   //For loop to read each alphabet//
   for(i=0;string[i]!='\0';i++){
      if(string[i]>=65&&string[i]<=90){
         string[i]=string[i]+32;
      }
   }
   printf("The converted lower case string is : ");
   puts(string);
   return 0;
}
