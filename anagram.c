#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
	char str1[MAX],str2[MAX];
	int r;
	printf("\nEnter 1st string=");
	gets(str1);
	printf("\nEnter 2nd String=");
	gets(str2);
	anagrams(str1,str2);
	
	}
void anagrams(char str1[],char str2[])
{
	int d1,d2,i,j,l1,l2,flag=0;
	l1=strlen(str1);
	l2=strlen(str2);
	
	for(i=0;i<l1;i++)
	{
	 for(j=0;j<l2;j++)
		{
		if(str1[i]==str2[j])
		{		
		flag=1;
		break;
		}
			
		else
		{
		flag=0;
		}

		}
	}
	
	
	if(flag==1)
		printf("Yes");
	else
		printf("No");
	
	
}
