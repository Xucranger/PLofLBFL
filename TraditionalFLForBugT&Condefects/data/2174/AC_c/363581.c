#include <stdio.h>
void main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
        {if(b==0)
            printf("error\n");
        else
            {if(2*(a%b)>=b)
             {   c=a/b+1;
                 printf("%d\n",c);
             }
             else
             {  c=a/b;
                printf("%d\n",c);
             }
            }
        }
}
