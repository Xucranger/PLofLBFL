#include <stdio.h>
void main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
		if(b==0)
			printf("error\n");
		else
		{
			if((a%b)*2>=b)
				c=1;
			else
				c=0;
			printf("%d\n",a/b+c);
		}
    }
}
