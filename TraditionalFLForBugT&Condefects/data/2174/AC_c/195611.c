#include<stdio.h>
int main(void)
{
    int a,b,d;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
      	    c=(float)a/(float)b-a/b+0.5;
            if(c>=1)
                printf("%d\n",a/b+1);
            else
                printf("%d\n",a/b);  
        }
        else
            printf("error\n");
    }
}
