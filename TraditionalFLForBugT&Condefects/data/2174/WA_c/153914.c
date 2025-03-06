#include<stdio.h>
main()
{
    float a,b,c,d,x,y;
        while(scanf("%f %f\n%f %f",&a,&b,&c,&d)!=EOF)
        {if(b!=0&&d!=0)
            {x=(int)(a/b+0.5);y=(int)(c/d+0.5);printf("%f\n%f\n",x,y);}
           if(b==0&&d!=0)
            {y=(int)(c/d+0.5);printf("error\n%f\n",y);}
           if(d==0&&d!=0)
            {x=(int)(a/b+0.5);printf("%f\nerror\n",x);}
           if(d==0&&d==0)
            {printf("error\nerror\n");}
        }
        return 0;
}
