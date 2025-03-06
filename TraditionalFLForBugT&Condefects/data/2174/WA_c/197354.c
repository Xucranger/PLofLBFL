#include<stdio.h>
int main()
{
	int a,b;
	double c;
	while(scanf("%d %d",&a,&b)!=EOF)
	if(b==0)
	  printf("error");
    else
      printf("%d\n",(a*10/b+5)/10);
    return 0;
}
