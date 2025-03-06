#include<stdio.h>
void main()
{
		float a,b;
		int c;
      while(scanf("%f%f",&a,&b)!=EOF)
	 { 
	       if(b==0)
		   	   printf("error");
		   else
			   if((a>0&&b<0)||(a<0&&b>0))
				     c=1.0*a/b-0.5;
			   else 
			   { 
				   c=1.0*a/b+0.5;
			        printf("%d",c);
			   }
			   printf("\n");
	  }
}
