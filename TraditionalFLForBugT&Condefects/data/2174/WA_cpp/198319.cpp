#include<stdio.h>
int main()
{
	    int i,sum;
	    float a[2],b[2];
	    for(i=0;i<2;i++)
	   	scanf("%d %d",&a[i],&b[i]);
	   	for(i=0;i<2;i++)
	   {
		  if(b[i]!=0)
	       {
	        sum=(int)(a[i]/b[i]+0.5);
		    printf("%d\n",sum);
	       }
	       else  
		     printf("error\n");
	   }	 
}
