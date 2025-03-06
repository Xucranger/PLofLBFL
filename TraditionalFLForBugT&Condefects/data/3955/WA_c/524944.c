#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	int al,bl,i,j=0,k;
	while(scanf("%s %s",&a,&b)!=EOF)
	{
		int c =0;
		al=strlen(a);
		bl=strlen(b);
		if(al==bl)
		{
			for(i=0;i<=al-1;i++)
		{
			for(k=0;k<=al-1;k++)
			{
				if(a[k]==b[i])
				break;
				else if(k==al-1)
				c=1;
			}
		}
		}
		else
		c=1;
		if(c==1)
		{
			printf("NO\n");
		}
		else if(c==0)
		{
			printf("YES\n");
		}
	}
	return 0;
 } 
