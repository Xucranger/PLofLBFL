#include <stdio.h>
void main()
{ int a,b,c;
while(scanf("%d%d",&a,&b)!=EOF)
if (b==0)
	printf("error\n");
else
	{if((a%b)*1.0/b >= 0.5)
		c=a/b+1;
	else if((a%b)*1.0/b < 0.5)
		c=a/b;
printf("%d\n",c);
}	
}
