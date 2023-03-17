#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
	char temp;
	int i, j;
	printf("Enter the string: ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		
		if(str[i]==NULL)
		{
			continue;
		}
	
		    printf("%c",str[i]);
	for(j=i;j<strlen(str);j++)
	{
	if(str[i]==str[j])
	{
		str[j]=NULL;
	}
}

	}

	return 0;
}
