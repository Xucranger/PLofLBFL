#include <stdio.h>
int main()
{
    int a,b;
        while(scanf("%d %d",&a,&b)!=EOF)
        {
            if((a==11&&b<=9)||(a<=9&&b==11))
             printf("Game Over\n");
        if(a<11&&b<11)
        {
            if((a+b)%4==1||(a+b)%4==0)
                printf("A\n");
            else
                printf("B\n");
        }
        if((a>=11&&b>=10)||(a>=10&&b>=11))
        {
            if(a-b==2||b-a==2)
            printf("Game Over\n");
            else if((a+b)%2==0)
                printf("A\n");
            else
                printf("B\n");
        }
        }
    return 0;
}
