#include<stdio.h>
#include<math.h>
double F(int n,int t)
{
 if(t==0)
    return sin(n);
 else if(t>0)
    return sin(F(n,t-1));
}
int main()
{
 int n;
 while(scanf("%d",&n)!=EOF)
 {
  printf("%.6lf\n",F(n,n));
 }
 return 0;
}
