#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,l=1;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0)
		printf("error\n");
		else 
		{
		int c,d,e,f;
		c=a*10;
		d=c/b;
		e=d%10;
		f=d/10;
		if(e>4)
	    printf("%d\n",f+1);
	    else printf("%d\n",f);
	    }
	}
	return 0;
} 
