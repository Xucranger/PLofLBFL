#include<stdio.h>
void main()
{
    float  y,a,b;
    int  x;
    while(scanf("%f%f",&a,&b)!=EOF)
    {
                       if(b==0)
                                    printf("error\n");
                                    else
                                   {
                                        x=a/b;
                                        y=a/b;
                                   if(y-x>=0.5)
                                   printf("%d\n",x+1);
                                   else
                                    printf("%d\n",x);
                                    }
}
}
