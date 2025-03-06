#include <stdio.h>
#include <stdlib.h>
int main()
{ int a[100][2],i,flag[100];
for(i=1;i<=2;i++)
{
scanf("%d %d",&a[i][1],&a[i][2]);
    if(a[i][2]==0)
        flag[i]=1;
      else
        flag[i]=0;}
for(i=1;i<=2;i++)
{if(flag[i]==1)
   printf("error\n");
else
   printf("%d\n",a[i][1]/a[i][2]);}
    return 0;
}
