#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str[10];
	char temp;
	int i,j;
	printf("Enter a string");
	gets(str);
	for(i=0;i<11;i++){
		if(str[i]!='\0'){
			printf("%c",str[i]);
		}
		
		for(j=i;j<11;j++)
		if(temp==str[i]){
			str[i]='\0';
		}
	}
	return 0;
}
