#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[20];
	char temp[20];
	int i, j;
	printf("Enter String: ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<strlen(str);j++)
		{
		if(str[i]==str[j])
		{
		break;
		}	
		}
		if(i==j)
		{
		temp[i]=str[i];
		}
	}
	for(i=0;i<strlen(str);i++)
	{
		printf("%c",temp[i]);
	}
	
	return 0;
}
