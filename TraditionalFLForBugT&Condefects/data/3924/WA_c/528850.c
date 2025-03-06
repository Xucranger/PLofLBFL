#include<stdio.h>
int main()
{int a,b;
loop:while(scanf("%d %d",&a,&b)!=EOF)
{if(a<=9&&b<=9)
	{if((a+b)%4==0||(a+b)%4==1)printf("A\n");
	else printf("B\n");}
else if(a==10||b==10)printf("A");
else if(a>=11&&b<=9||a<=9&&b>=11)printf("Game Over\n");
else if(a==10&&b==9||a==9&&b==10)printf("B");
else if(a-b<=1&&a-b>=-1){if((a+b)%2==0)printf("B");else printf("A");}
else printf("Game Over");
}
return 0;
}
