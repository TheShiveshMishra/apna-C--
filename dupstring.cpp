#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char name,str1[10];
	int i;
	
	printf("Enter string: ");
	gets(str1);
	while(i){
		name=strtok(str1," ");
		printf("%c",name);
	}

/*	for(i=0;i<11;i++){
		printf("%c",str1[i]);
	}*/
	
	
    return 0;
}
