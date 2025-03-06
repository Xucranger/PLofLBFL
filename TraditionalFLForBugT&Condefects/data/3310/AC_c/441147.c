#include<math.h>
#include<stdio.h>
int main()
{
 int n;
 double d,c,x;
 while(scanf("%d",&n)!=EOF)
 {
  x=sin(n);
  for(int i=0;i<n;i++)
  x=sin(x);
  printf("%6f\n",x);
 }
 return 0;
}
