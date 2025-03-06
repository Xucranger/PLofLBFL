#include<stdio.h>
int main()
{
    int x,y,z;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        if(y==0) printf("error\n");
        else
        {
          if(x%y<0.5*y) z=x/y;
          else z=x/y+1;
          printf("%d\n",z);
        }
    }
    return 0;
}
