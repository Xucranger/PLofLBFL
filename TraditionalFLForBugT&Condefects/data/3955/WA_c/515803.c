#include<stdio.h>
#include<stdio.h>
char s1[5000];
char s2[5000];
int main()
{
	int a,b;
    scanf("%s %s",s1,s2);
	{
	a=strlen(s1);
	b=strlen(s2);
	if(a!=b) printf("No\n");
	else 
	{
		int f=1,i,j;
		for(i=0,j=a-1;i<a-1,j>=0;i++,j--)
		if(s1[i]!=s2[j]) f=0;
		if(f) printf("YES");
		else printf("NO");
	}
}
return 0;	
 } 
