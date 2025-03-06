#include<stdio.h>
main()
{
    int a,b,c;
   while(scanf("%d%d%d",&a,&b,&c)!=EOF)
   {
      if(a==0||b==0||c==0)
    printf("ERROR\n");
    if(a+b>c||a+c>b||c+b>a)
    {
        if(a==b&&b==c)
        printf("DB\n");
          else if((a==b&&a!=c)||(a==c&&b!=c)||(c==b&&a!=c))
                printf("DY\n");
                else if((a*a+b*b==c*c)||(c*c+b*b==a*a)||(a*a+c*c==b*b))
                     printf("ZJ\n");
                     else
                     printf("PT\n");
    }
    else
    printf("ERROR");
   }
return 0;
}
