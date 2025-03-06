#include<stdio.h>
int main()
{
    int c;
    float a,b,d;
    while(scanf("%f%f",&a,&b)!=EOF)
        {
            if(b==0)
                 printf("error\n");
            else
               {
                c=a/b;
                d=a/b;
                if(d-c>=0.5)
                    printf("%d\n",c+1);
                else
                    printf("%d\n",c);
               }
        }
return 0;
}
