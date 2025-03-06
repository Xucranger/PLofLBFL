#include<stdio.h>
int main()
{
	int a,b;
	double t;
    while(scanf("%d %d",&a,&b)!=EOF)
        {if(b==0)
           printf("error\n");
        else
          {t=a/b;
           printf("%d\n",t);
		  }
		}
}
