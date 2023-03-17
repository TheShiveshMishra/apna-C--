#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j=0;
	for(i=0;i<6;i++)
	{
	   if(i<=5){
	   	for(j=0;j<5-i;j++){
	   		printf(" ");
		   }
		   printf("***** \n");
	   }	
//	   else
//	   break;
	}
	return 0;
}

