#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char str[10],str1[10];
	int i,len;
	printf("Enter String: ");
	gets(str);
	puts(str);
	len=strlen(str)-1;
    for(i=len;i>=0;i--){
    	if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
//    	printf("%c",str[i]);
    	str1[len-i]=str[i];
    	else
    	str1[i]=str[i];
//    	continue;
	}
//	for(i=0;i<=len;i++)
	printf("%s",str1);
	
	return 0;
}
