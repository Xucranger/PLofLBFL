#include <stdio.h>
main()
{
    float  a,b,f;
    while (scanf("%f %f",&a,&b)!=EOF)
    if (b==0)
        printf("ERROR\n");
    else
    {
        f=(int)((a/b)*10+5)/10;
        printf("%d\n",f);
    }
}
