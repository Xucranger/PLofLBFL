#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c;
	int s[10];
	int j,flag=0;
	int i=0,x,y,m,n;
	for(j=0;j<3;j++)
	{
			while(1)
	{
		c=getchar();
		if(c==' '||c=='\n') 
		break;
		else {
			a[i++]=c;
		}
	}
	i=0;
	while(1)
	{
		c=getchar();
		if(c==' '||c=='\n') 
		break;
		else {
			b[i++]=c;
		}
	}
	for(m=0;m<i;m++)
	{
		flag=0;
		for(n=0;n<i;n++)
		{
			if((n+m)<i)
			{
				if(a[n+m]==b[n])
				flag=1;
				else 
				{
					flag=0;break;
				}
			}
			else
			{
				if(a[n+m-i]==b[n])
				flag=1;
				else 
				{
					flag=0;break;
				}
			}
		}
		if(flag==1)
		break;
	}
	if(flag==1)
	s[j]=1;
	else
	s[j]=2;
	}
	for(j=0;j<3;j++)
	{
		if(s[j]==1)
		printf("Yes\n");
		else if(s[j]==2) printf("No\n");
	}
 } 
