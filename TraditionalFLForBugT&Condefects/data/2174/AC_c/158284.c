#include<stdio.h>
int main()
{
        int a,b,c;
        float d;
        while((scanf("%d %d",&a,&b))!=-1)
        {
                if(b==0)
                        printf("error\n");
                else
                {
                        c=a/b;
                        d=(float)a/b;
                        if((d*10-c*10)>=5)
                                c=c+1;
                        printf("%d\n",c);
                }
        }
}
