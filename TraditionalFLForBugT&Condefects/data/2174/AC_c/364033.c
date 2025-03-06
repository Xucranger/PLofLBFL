#include <stdio.h>
int main()
{
float a,b;
while(scanf("%f%f",&a,&b)!=EOF)
{if(b==0)
    printf("error\n");
else
{
    int c;
    float d;
d=a/b;
c=a/b;
    if((d-c)>=0.5)
        printf("%d\n",c+1);
    else printf("%d\n",c);
    }
}
    return 0;
}
