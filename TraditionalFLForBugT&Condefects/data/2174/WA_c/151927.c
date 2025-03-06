#include<stdio.h>
int main()
{
        float a,b,c ;
        while(scanf("%d %d",&a,&b)!=EOF)
        {
        if(b==0)
            {printf("error\n");}
            c=round(a/b);
            printf("%d\n",c);
        }
return 0;
}
