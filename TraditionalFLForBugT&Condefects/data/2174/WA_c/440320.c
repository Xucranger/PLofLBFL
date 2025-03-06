#include<stdio.h>
int main()
{
	float a1,a2;
	while(scanf("%f%f",&a1,&a2)!=EOF)
	{
	if(a2==0)
	  printf("error\n");
	else
      printf("%0.f\n",a1/a2);
    }
}
