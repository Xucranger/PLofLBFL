#include <stdio.h>
main()
{
    int a,b,c;
    float d;
    while (scanf("%d %d",&a,&b)!=EOF)
    {
        if(b)
        {
            d=(float)a/b;
            d=d+0.5;
            c=(int)d;
                printf("%d\n",c);
                }
        else
            printf("error\n");
    }
    return 0;
}
