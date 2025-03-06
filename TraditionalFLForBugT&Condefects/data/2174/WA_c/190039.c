#include <stdio.h>
#include <math.h>
int main()
{
int a,b;
while (scanf("%d %d",&a,&b) != EOF)
	{
    		if (b==0) printf("error\n");
            if (b!=0) printf("%d\n",a/b);
	}
return 0;
}
