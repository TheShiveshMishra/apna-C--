#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[20];
	String s[20];
	int i,j,len,k=0;
	printf("Enter string: ");
	gets(str);
	len=strlen(str)-1;
	for(i=0:i<len;i++)
	{
		if(str[i]==' ')
		{
			s[k]=str[i];	
		}
		else{
			k++;
		}
	}
	for(i=0;i<=k;i++)
	{   min=s[i];
		for(j=0;j<=k;j++)
		{
	    	if(min<s[j]){
	    		str[i]=min;
			}	
			else{
				str[i]=s[j];
			}
		}
		
	}
	puts(str);
	return 0;
}
