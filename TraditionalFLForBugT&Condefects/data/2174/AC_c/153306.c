#include<stdio.h>
int main()
{int a,b,c;
while(scanf("%d %d",&a,&b)!=EOF)
{if(b==0)
printf("error");
else if(a-a/b*b<0.5*b)
    printf("%d",a/b);
else printf("%d",a/b+1);
printf("\n");
}
}
