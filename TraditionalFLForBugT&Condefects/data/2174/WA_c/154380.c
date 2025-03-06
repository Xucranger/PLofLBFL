#include<stdio.h>
 main()
{
    float a,b,A,B;
    int x,y;
    scanf("%d %d\n%d %d",&a,&b,&A,&B);
        {
            if(b!=0&&B!=0)
            {x=(a/b*1.0+0.5); y=(A/B*1.0+0.5);printf("%d\n%d\n",x,y);}
           if(b==0&&B!=0)
            {y=(A/B*1.0+0.5);printf("error\n%d\n",y);}
           if(b!=0&&B==0)
            {x=(a/b*1.0+0.5);printf("%d\nerror\n",x);}
           if(b==0&&B==0)
            {printf("error\nerror\n");}
        }
}
