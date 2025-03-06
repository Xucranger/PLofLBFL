#include<stdio.h>
#include<math.h>
int main()
{float a,b;
float c=0.5555;
int d;
double e;
while(scanf("%f%f",&a,&b)!=EOF)
{if(b==0)
    printf("error\n");
    else
    {e=(a/b)+c;
	d=floor(e);
	printf("%d\n",d);
	}
}
} 
