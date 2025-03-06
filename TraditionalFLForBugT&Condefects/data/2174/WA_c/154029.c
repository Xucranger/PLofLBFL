#include<stdio.h>
 main()
{
    float a,b,c,d,x,y;
    int e,f;
    scanf("%f %f\n%f %f",&a,&b,&c,&d);
        {
            if(b!=0&&d!=0)
            {x=(a/b+0.5); y=(c/d+0.5);e=(int) x;f=(int) y;printf("%d\n%d\n",e,f);}
           if(b==0&&d!=0)
            {y=(c/d+0.5);f=(int)y;printf("error\n%d\n",f);}
           if(b!=0&&d==0)
            {x=(a/b+0.5);e=(int)x;printf("%d\nerror\n",e);}
           if(b==0&&d==0)
            {printf("error\nerror\n");}
        }
}
