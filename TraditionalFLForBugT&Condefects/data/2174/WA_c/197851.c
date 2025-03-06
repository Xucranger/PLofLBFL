#include<stdio.h>
int main()
{
	    int i,j,sum,x,y,a[2],b[2];
	    for(i=0,j=0;i<2&&j<2;i++,j++)
	   	scanf("%d %d",&a[i],&b[j]);
	   	for(i=0,j=0;j<2&&i<2;i++,j++)
	   {
		  if(b[j]!=0)
	       {
	        sum=a[i]/b[j];
		    printf("%d\n",sum);
	       }
	       else  
		     printf("error\n");
	   }	 
}
