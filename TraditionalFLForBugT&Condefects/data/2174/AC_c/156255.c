#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
        }
        else
        {
            int c=a%b;
            if(2*c>=b)
            {
                printf("%d\n",a/b+1);
            }
            else
            {
                printf("%d\n",a/b);
            }
        }
    }
}
