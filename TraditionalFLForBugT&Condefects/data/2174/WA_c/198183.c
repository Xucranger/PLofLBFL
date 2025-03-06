#include<stdio.h>
int main()
{
    int a,b,c;
    float m,n;
    while (scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        printf("error");
        else
        {
            m=1.0*a/b;
            c=a/b;
            n=m-c;
            if(n>=0.5)
            c=c+1;
            else c=c;
        printf("%d\n",c);
    }
}
}
