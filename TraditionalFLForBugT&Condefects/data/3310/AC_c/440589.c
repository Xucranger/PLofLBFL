#include<stdio.h>
#include<math.h>
int main()
{
  double a[101];
  int i,n;
  while(scanf("%d",&n)!=EOF)
  {
    a[0]=sin(n);
    for(i=1;i<=n;i++)
      a[i]=sin(a[i-1]);
    printf("%.6f\n",a[n]);
  }
  return 0;
} 
