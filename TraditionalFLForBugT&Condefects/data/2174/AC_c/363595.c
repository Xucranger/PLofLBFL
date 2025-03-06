#include <stdio.h>
int main()
{   float x,y;
    int z;
    while(scanf("%f %f",&x,&y)!=EOF)
    {if(y==0)
    printf("error\n");
    else
    {z=(int)(x/y+0.5)>(int)(x/y)?(int)(x/y)+1:(int)(x/y);
    printf("%d\n",z);}
    }
    return 0;
}
