#include<stdio.h>
void main()
{   
	 int a[2][2];
	 int i,j;
	 for(i=0;i<2;i++)
	 {	 for(j=0;j<2;j++)
	       scanf("%d",&a[i][j]);}
	 for(i=0;i<2;i++)
     {            if(a[i][1]==0)
	        printf("error\n");
	      else	{   j=a[i][0]%a[i][1];
		            if(j<(a[i][1]/2.0))
			         printf("%d\n",a[i][0]/a[i][1]);
		            else 
			         printf("%d\n",(a[i][0]/a[i][1])+1);}
     }
}
