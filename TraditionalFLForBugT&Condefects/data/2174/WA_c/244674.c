#include<stdio.h>
int main()
{
    float a,b,c;
    while (scanf("%f%f",&a,&b)!=EOF)
    {
     if(b==0)
     	printf("error");
     else
     {
     	c=a/b;
     	c=(int)(c+0.5);
		printf("%.0f",c);
	 }
    }
    return 0;
}
