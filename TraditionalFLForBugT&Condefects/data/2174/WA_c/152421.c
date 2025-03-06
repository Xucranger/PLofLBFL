#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,d;
    int c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        printf("error");
        else
        {
            c=a/b+0.5;
            printf("%d\n",c);
        }
    }
    return 0;
}
