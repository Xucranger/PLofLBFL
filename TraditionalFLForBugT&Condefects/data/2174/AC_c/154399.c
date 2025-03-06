#include <stdio.h>
main()
{
    int   a,b,f;
    float c;
    while (scanf("%d %d",&a,&b)!=EOF)
    if (b==0)
        printf("error\n");
    else
    {
        c=(float)a/(float)b;
        f=(int)((c*10+5)/10);
        printf("%d\n",f);
    }
}
