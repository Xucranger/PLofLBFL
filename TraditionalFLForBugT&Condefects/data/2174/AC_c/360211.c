#include<stdio.h>
int main()
{
    float a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
       if(b==0)
        printf("error\n");
       else
       {
            float c=a/b;
            int d=(int)(c+0.5);
            printf("%d\n",d);
       }
    }
    return 0;
}
