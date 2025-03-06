#include <stdio.h>
int main()
{
	int c,n,i;
	float a,b,d,e;
	while (scanf("%f%f",&a,&b) != EOF)
	{
    		if(b==0)
                printf("error\n");
            else
               {
                   c=(a/b);
                   i=2*c;
                   d=a/b;
                   e=(2*d);
                   n=e;
                   if(e<1)
                        printf("0\n");
                    else if(i==n)
                    printf("%d\n",c);
                   else printf("%d\n",c=c+1);
               }
	}
    return 0;
}
