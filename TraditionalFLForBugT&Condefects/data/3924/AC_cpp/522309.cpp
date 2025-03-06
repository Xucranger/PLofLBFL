#include"stdio.h"
int zhang()
{
   float a,b,c,d;
   while(scanf("%d",&a))
   {
       d=b*b-4*a*c;
       if(d>0)
       {
           printf("YES");
       }
   else
   {
        printf("NO");
   }
   }
}
int main(int argc, char *argv[])
{
    int a, b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if((a==11||b==11)&&(11-a>=2||11-b>=2))
         printf("Game Over\n");
        else
		{if(a>=10&&b>=10)
		{
			if(a-b==2||b-a==2)
			printf("Game Over\n");
			else
			{
				if(a==b)
				printf("A\n");
				else
				printf("B\n");
			}
		}
        else
        {
        	if((a+b)%4<=1)
        	printf("A\n");
        	else
			printf("B\n");
        }}
    }
    return 0;
}
