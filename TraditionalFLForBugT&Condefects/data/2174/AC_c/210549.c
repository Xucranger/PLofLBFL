#include<stdio.h>
int main()
{
    int a,b,y;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
    if(b==0) printf("error\n");
    else {y=(int)((float)a/(float)b+0.5);
    printf("%d\n",y);}
    }
    return 0;
}
