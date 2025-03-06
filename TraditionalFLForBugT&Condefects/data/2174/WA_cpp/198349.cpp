#include<stdio.h>
int main()
{
	    int i,sum;
	    float a[4];
	    for(i=0;i<4;i++)
	   	  scanf("%d",&a[i]);
		if(a[1]!=0) 
	   {    
	        sum=(int)(a[0]/a[1]+0.5);
		    printf("%d ",sum);
	    }
	    else  
		     printf("error\n");
		printf("\n");
	    if(a[3]!=0)
	    {
	    	sum=(int)(a[2]/a[3]+0.5);
		    printf("%d ",sum);
		}
		else
		   printf("error\n");
}
