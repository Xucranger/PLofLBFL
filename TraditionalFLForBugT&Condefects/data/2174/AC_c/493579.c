#include<stdio.h>
int main()
{float beichushu,chushu;
float jieguo;
int zhengshujieguo;
while(scanf("%d%d",&beichushu,&chushu)!=EOF)
	{if(chushu==0)
		{printf("error\n");
		}
	else
		{jieguo=beichushu/chushu;
		zhengshujieguo=(int)(jieguo+0.5);
		printf("%d\n",zhengshujieguo);
		}
	} 
}
