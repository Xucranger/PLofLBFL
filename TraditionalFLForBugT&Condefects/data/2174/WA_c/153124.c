#include <stdio.h>
void main()
{
int a,b;
while(scanf("%d %d",&a,&b)!=EOF){
if(b!=0){
if(a%b>b/2)
printf("%d",a/b+1);
else printf("%d",a/b);}
else printf("error");
printf("\n");
}
}
