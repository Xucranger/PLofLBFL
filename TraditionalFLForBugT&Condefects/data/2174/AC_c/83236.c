#include<stdio.h>
int main()
{
    int x;
    float a,b,y;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(b==0)
          printf("error\n");
        else
        {
            x=a/b;
            y=a/b;
            if(y-x<0.5)
              printf("%d\n",x);
            else if(y-x>=0.5)
              printf("%d\n",x+1);
            else if(x==0)
              printf("%d\n",x);
        }
    }
      return 0;
}
