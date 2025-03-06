#include <stdio.h>
int main()
{
    int d;
    float a,b;
    char c;
    while((c=getchar())!=EOF)
    {
        ungetc(c,stdin);
        scanf("%f",&a);
        scanf("%f",&b);
        if(b==0)
        {
            printf("ERROR\n");
            continue;
        }
        a=a/b;
        d=(int)(a+0.5)>(int)a?(int)a+1:(int)a;
        printf("%d\n",d);
        c=getchar();
    }
    return 0;
}
