#include<stdio.h>
#include<math.h>
  int main()
  {
  	float a,b;
  	while((scanf("%d %d",&a,&b))!=EOF)
  	if(b!=0)
  	{int c=round(a/b);
	printf("%d\n",c);}
	else if(b==0)
	printf("error\n");
	return 0; 
  }
