#include<stdio.h>
int main (void) 
{
    int a,b,c,d;
	float tem1,tem2;
    scanf("%d %d\n%d %d",&a,&b,&c,&d);
    if(b!=0 && d!=0)
   {
   	tem1 = a / b;
    tem2 = c / d;
    printf("%.0f\n",tem1);
    printf("%.0f\n",tem2);
   } 
    else if(b==0 && d!=0)
    { 
	tem2 = c / d;
	printf("error\n");
    printf("%.0f",tem2);
	}
    else if(b!=0 && d==0)
   {
   	tem1 = a / b;
   	printf("%.0f\n",tem1);
    printf("error");
   } 
    return 0;
}
