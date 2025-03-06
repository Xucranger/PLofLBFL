#include<stdio.h>
int main()
{
	int i,j,k;
	while(scanf("%d%d",&i,&j)!=EOF)
    {
    if(j==0)
      printf("error\n");
    else  
	{
	k=i%j;
    if(k*10>=j*5)
      printf("%d\n",i/j+1);
	else
	  printf("%d\n",i/j);
    }
    }
 } 
