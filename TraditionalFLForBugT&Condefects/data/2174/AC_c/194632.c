#include<stdio.h>
int main(void)
{
    float a,b;
    while(~scanf("%f %f",&a,&b))
    {
        if(b==0) printf("error\n");
        else if((int)a/(int)b+0.5<=a/b)
            printf("%d\n",(int)a/(int)b+1);
        else printf("%d\n",(int)a/(int)b);
    }
    return 0;
}
