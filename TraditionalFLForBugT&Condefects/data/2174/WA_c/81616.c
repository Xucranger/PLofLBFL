#include<stdio.h>
void main()
{
   int i,a[2][2],c;
   for(i=0;i<2;i++)
   scanf("%d %d",&a[i][0],&a[i][1]); 
   for(i=0;i<2;i++)
   {
if(a[i][1]==0)
    	printf("error");
   		else
		{
		c=a[i][0]/a[i][1];
		if((10*a[i][0]-10*a[i][1]*c)>=5)
		c=c+1;
		printf("%d ",c);
		}
   }
}
