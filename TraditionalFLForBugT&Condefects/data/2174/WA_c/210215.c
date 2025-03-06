#include<stdio.h>
void main()
{ 
	int a,b;
    while(~scanf("%d%d",&a,&b))
	{   
		if(b==0)
			printf("error\n");
		else if(a<0&&b<0)
			printf("%d\n",a/b+1);
		else if(a<0&&b>0)
            printf("%d\n",a/b-1);
		else 
			printf("%d\n",a/b);
	}
}
