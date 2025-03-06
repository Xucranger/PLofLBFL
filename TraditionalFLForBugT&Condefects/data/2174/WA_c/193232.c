#include <stdio.h>
int main()
{
	int c,n,i;
	float a,b,d;
	while (scanf("%f%f",&a,&b) != EOF)
	{
    		if(b==0)
                printf("error");
            else
               {
                   c=(a/b);
                   i=2*c;
                   d=a/b;
                   n=(2*d);
                   if(a<b)
                        printf("0");
                    else if(i==n)
                    printf("%d\n",c);
                   else printf("%d\n",c=c+1);
               }
	}
    return 0;
}
