#include<stdio.h>
int main()
{
	int a,b,i=1;
	float d[4];
	while(i<=4)
	{
		scanf("%f",&d[i]); 
		i++;
	}
	if(d[2]==0)
	{
	  printf("error");
	  b=d[3]/d[4];
	  printf("\n");
	  printf("%d",b);
    }
	else
	{
	  if(d[4]==0)
	  {
	  a=d[1]/d[2];
	  printf("%d",a);
	  printf("\n");
	  printf("error");
	  }
	  else
	  {
	  a=d[1]/d[2];
	  b=d[3]/d[4];
	  printf("%d",a);
	  printf("\n");
	  printf("%d",b);
      }
    }
	return 0;
}
