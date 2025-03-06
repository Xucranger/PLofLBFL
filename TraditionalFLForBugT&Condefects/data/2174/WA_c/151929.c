#include<stdio.h>
int main()
{
        float a;
        int b,c;
        while(scanf("%f %f",&a,&b)!=EOF)
        {
        if(b==0)
            {printf("error\n");}
            c=a/b+0.5;
            printf("%d\n",c);
        }
return 0;
}
