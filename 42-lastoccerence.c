#include<stdio.h>
#include<string.h>
void main()
{
	int k,l;
	char a[150],b[20];
	printf("enter the line: ");
	gets(a);
	printf("enter the substring: ");
	gets(b);
k=strlen(a);
l=strlen(b);
int i=k-1,h=0,j=l-1,m=0,e=0;
for(i=k-1;i>=0;i--)
	{
		if(a[i]==b[l-1])
		{
			for(j=l-1,e=0;j>=0;j--,e--)
			{
			if(b[j]==a[i-e])
			
				h++;
			}
			if(h==l)
				{m=1;
				printf("the last occurence is %d",i-l+1);
				}
			if(m==1)
			break;	
		}
	}
}

/*
enter the line: be cool be honest
enter the substring: be
the last occurence is 8
*/