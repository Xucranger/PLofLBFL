#include<stdio.h>
int main()
{
    float b,c;
    int s;
    while(scanf("%f %f",&b,&c)!=EOF)
    {
        if(c==0) printf("error\n");
        else {printf("%d\n",s=b/c+0.5);}
    }
}
