#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    float c;
    while(scanf("%d %d",&a,&b)==2)
    {
        getchar();
        if(b!=0)
        {
            c=(float)a/b;
            if((c-a/b)*2>=1)
                printf("%d\n",a/b+1);
            else if((c-a/b)*2<1)
                printf("%d\n",a/b);
        }
        else
            printf("error\n");
    }
    return 0;
}
