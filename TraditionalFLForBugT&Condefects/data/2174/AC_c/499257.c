#include<stdio.h>
#include<string.h>
#include<math.h>
typedef int sb;
typedef int status;
void Get(sb *a)
{
 	scanf("%d",a);
}
int main()
{
 	sb a,b,c;
 	while(scanf("%d%d",&a,&b)!=EOF)
 	{
 		if(b==0)
		 	printf("error\n");
		else
		{
			float aa=a*1.0;
			float bb=b*1.0;
			float cc=aa/bb;
			c=cc+0.5;
			printf("%d\n",c);	
		}
 	}
 	return 0;
}
