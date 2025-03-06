#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,i;
    for(i=0;i<=100;i++){
      scanf("%d%d%d",&a,&b,&c);
      if(a+b<=c || a+c<=b || b+c<=a)
        printf("ERROR\n");
      else if(a==b&&b==c)
        printf("DB\n");
      else if(a==b||a==c||b==c)
        printf("DY\n");
      else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
        printf("ZJ\n");
      else printf("PT\n");          
    }
}
