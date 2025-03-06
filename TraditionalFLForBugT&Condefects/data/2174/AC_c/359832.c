#include <stdio.h>
int main()
{
    int a,b,c;
    float n;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        if (b==0)
            printf("error\n");
        else {
            n=(float)a/b;
            n+=0.5;
            c=(int)n;
            printf("%d\n",c);
        }
    }
    return 0;
}
