#include <stdio.h>
#include <math.h>
int main()
{
float a,b;
float s;
while (scanf("%f %f",&a,&b) != EOF)
	{
    		if (b==0) printf("error\n");
            if (b!=0) s=(a/b)+0.5; 
            s=(int)s;
                printf("%d\n",s);
	}
return 0;
}
