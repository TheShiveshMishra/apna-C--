#include<stdio.h>
#include<string.h>
int main(){
	int len,flag,k=0;
	char str[20];
	printf("enter string: ");
	gets(str);
	len=strlen(str);
	len=len-1;
	
    while(k<=len)
	{
		if(str[len]==str[k])
		{
		   flag=1;
		}
		else
		flag=0;
		
	len--;
	k++;
	}
	if(flag==1)
	printf("palindrome");
	
	else
	printf("not palindrome");
	
	return 0;
}
