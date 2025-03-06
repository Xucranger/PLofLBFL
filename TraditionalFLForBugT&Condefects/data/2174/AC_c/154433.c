#include<stdio.h>
 main()
{
    float a,b;
    int x;
    while(scanf("%d %d",&a,&b)!=EOF)
        {
            if(b!=0)
            {x=(a/b*1.0+0.5);printf("%d\n",x);}
            else
            {printf("error\n");}
          // if(b==0&&B!=0)
           // {y=(A/B*1.0+0.5);printf("error\n%d\n",y);}
           //if(b!=0&&B==0)
           // {x=(a/b*1.0+0.5);printf("%d\nerror\n",x);}
          // if(b==0&&B==0)
          //  {printf("error\nerror\n");}
        }
return 0;
}
