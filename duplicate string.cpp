#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str2[20];
	int i,j,len,k,count=0;
	printf("Enter string: ");
	gets(str);
	len=strlen(str);
	len=len-1;

	for(i=0;i<=len;i++)
	{ count=1;
	    for(k=0;k<=strlen(str2);k++)
	    {
	  if(str[i] != str2[k])	
	  {
	  
		for(j=i+1;j<=len;j++)
		{
			if(str[i]==str[j])
			{
				count++;
				
				str[j]='0';
				
			}
	
			else
			{
				str2[k]=str[i];
		        k++;
			}
		}
	}
	}
			
	
		//if(j==len)
				
					printf("\n %c = %d",str[k],count);
				
	}
	return 0;
}
