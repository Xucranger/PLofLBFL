#include<stdio.h>
 main()
{
    float a,b,A,B;
    int x,y;
    scanf("%f %f\n%f %f",&a,&b,&A,&B);
        {
            if(b!=0&&B!=0)
            {x=(int)(a/b+0.5); y=(int)(A/B+0.5);printf("%d\n%d\n",x,y);}
           if(b==0&&B!=0)
            {y=(int)(A/B+0.5);printf("error\n%d\n",y);}
           if(b!=0&&B==0)
            {x=(int)(a/b+0.5);printf("%d\nerror\n",x);}
           if(b==0&&B==0)
            {printf("error\nerror\n");}
        }
}
