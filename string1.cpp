#include<stdio.h>
int main(){
	char name[10],arr[10];
	int i,n=10;
	printf("Enter string: ");
	gets(name);
	for(i=0;name[i]!=NULL;i++)
	{
	//	for(n=n-i;n>1;n--)
	arr[n-i]=name[i];	
	}
	puts(arr);
	
	return 0;
}
