#include<stdio.h>
#include<math.h>
int main()
{float f[110];
int n,i;
 while(scanf("%d",&n)!=EOF)
 {
  f[0]=sin(n);
  for(i=1;i<=n;i++)
  f[i]=sin(f[i-1]);
  printf("%f\n",f[n]);
 }
}
