#include<stdio.h>
#define N 2
void main()
{
    int a[N][2];
    int i,q;
  for(i=0;i<N;i++)
  {scanf("%d%d",&a[i][0],&a[i][1]);}
  for(i=0;i<N;i++)
  {if(a[i][1]==0)
    printf("error\n");
  else
  {  q=a[i][0]*1.0/a[i][1]+0.5;
  printf("%d\n",q);}
  }
}
