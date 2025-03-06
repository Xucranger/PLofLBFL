#include<stdio.h>
void main()
{int a,b,Anw;
while(scanf("%d%d",&a,&b))
{
    if(b){Anw=(a*10/b+5)/10;printf("%d",Anw);break;}
    else{printf("error");break;}
}
}
