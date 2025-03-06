#include<stdio.h>
/*int fun(int x,int y)
{   int q;
    float z;
    z=x/y;
    q=(int)(z+0.5);
    printf("%d",q);
}*/
int main()
{   int a,b;
    int c;
    float z;
    while((scanf("%d %d",&a,&b))!=EOF)
      {
          if(b==0)
            printf("error\n");
          else
       {
        z=1.0*a/b+0.5;
        c=(int)(z);
        printf("%d\n",c);
       }
      }
}
