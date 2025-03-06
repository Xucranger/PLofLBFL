#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	    if(b==0)      printf("error\n");
        	if(b!=0)
        	{
        		c=(float)a/b;
	           if((float)(c-a/b)<0.5)  printf("%d\n",a/b);
	             else         printf("%d\n",a/b+1);
            }
    }
    return 0;
}
