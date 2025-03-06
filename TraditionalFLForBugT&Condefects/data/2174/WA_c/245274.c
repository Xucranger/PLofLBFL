#include<stdio.h>
int main()
{
	int a,b,t2;
	double t1;
    while(scanf("%d %d",&a,&b)!=EOF)
        {if(b==0)
           printf("error\n");
        else
          {t1=a*1.0/b;
           t2=a/b;
           if(t1-t2>0.5)
              printf("%d\n",t2+1);
            else
              printf("%d\n",t2);
		  }
		}
}
