#include<stdio.h>
void main()
{
    int a[5][2];
    int i,q;
    int n=5;
  for(i=0;i<n;i++)
  {scanf("%d%d",&a[i][0],&a[i][1]);}
  for(i=0;i<n;i++)
  {if(a[i][1]==0)
    printf("error\n");
  else
  {  q=a[i][0]*1.0/a[i][1]+0.5;
  printf("%d\n",q);}
  }
}
