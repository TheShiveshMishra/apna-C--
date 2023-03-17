#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char newString[10][10]; 
    int i,j,ctr,k,n;
       printf("\n\n Split string by space into words :\n");
       printf("---------------------------------------\n");    
 
    printf(" Input  a string : ");
    //fgets(str1, sizeof str1, stdin);
	gets(str1);	
 
    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
   for(i=0;i<ctr;i++)
    {
    	for(k=0;k<j;k++)
		{	
		    for(n=k+1;n<=j;n++)
    	    if(newString[k]>newString[n])
			{
				str1[k]=newString[][n];
			}
			else
			str1[k]=newString[k];
		}
		str1[k+1]=" ";
	}
   printf("ctr=%d,j=%d",ctr,j);
   for(i=0;i<k;i++)
   {
   	 printf("%c",str1[i]);
   }
   }
   printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);
    return 0;
}
