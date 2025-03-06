#include <stdio.h>
int main()
{
	int c,n,i;
	float a,b,d;
	while (scanf("%d%d",&a,&b) != EOF)
	{
    		if(b==0)
                printf("error");
            else
               {
                   c=(a/b);
                   i=2*c;
                   d=a/b;
                   n=(2*d);
                   if(i==n)
                    printf("%d\n",c);
                   else printf("%d\n",c=c+1);
               }
	}
    return 0;
}
