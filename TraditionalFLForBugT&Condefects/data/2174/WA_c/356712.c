#include <stdio.h>
int main ()
{
	int a,b,n[100],i=0,j;
	while(scanf("%d %d",&a,&b))
	{
		if(b==0){n[i]=-1;break;}
		else n[i]=(a+(b/2))/b;
		i++;
	}
	for(j=0;j<=i;j++)
	{
		if(n[j]==-1) printf("error");
		else printf("%d\n",n[j]);
	}
}
