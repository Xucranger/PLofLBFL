#include<stdio.h>
int main()
{
  int a[10],b[10],c[10],i;
  for(i=0;i<=9;i++)
  scanf("%d%d",&a[i],&b[i]);
  for(i=0;i<=9;i++)
 {
  if(b[i]!=0)
 {
  if(a[i]*2>=b[i]&&a[i]<b[i])
  c[i]=1;
  if(a[i]*2<b[i])
  c[i]=0;
  if(a[i]==b[i])
  c[i]=1;
  if(a[i]>b[i])
  {
    if((a[i]-a[i]/b[i]*b[i])*2>=b[i])
     c[i]=a[i]/b[i]+1;
     else c[i]=a[i]/b[i];
  }
   printf("%d\n",c[i]);}
   if(b[i]==0)
   printf("error\n");
 }
   return 0;
}
