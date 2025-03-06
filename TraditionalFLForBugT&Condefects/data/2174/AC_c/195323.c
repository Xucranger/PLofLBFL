#include<stdio.h>
int main()
{
    int a,b,c;
    float x,y,z;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
          printf("error\n");
        else
        {
          c=a/b;
          x=a;
          y=b;
          z=x/y;
          if(z<c+0.5)
            printf("%d\n",c);
          else 
            printf("%d\n",c+1);
        }    
    }    
    return 0;
    }
