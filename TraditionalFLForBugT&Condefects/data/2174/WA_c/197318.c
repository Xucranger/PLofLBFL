#include<stdio.h>
int main()
{
      int a,b,d;
      float c,e,x,y,m;
     while(scanf("%d %d",&a,&b)!=EOF)
    {
             if(b==0)
                 printf("error\n");
             else
             {
              x=a*1.0;
              y=b*1.0;
              c=x/y;
              int d=(int)c;
              e=c-d;
              if(e>=0.5)
              {
              	printf("%d",d+1);
			  }
			  else
			  {
			  	printf("%d",d);
			  }
		     }
     }
return 0;
}
