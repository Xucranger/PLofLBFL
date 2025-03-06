#include<stdio.h>
int main()
{
	int a,b,i,s,y;
	while(scanf("%d,%d",&a,&b)!=EOF)
	{
	 if(b==0)
	   {printf("error");
	   	printf("\n");
	   }
	 else if(a>=b)
	      {s=a/b;
	       y=a%b;
	       if(2*y<b)
	       printf("%d\n",s);
	       else printf("%d\n",s+1);
		  }
		  else {if(2*a<b)
	             {printf("0");
	              printf("\n");
		         }
	            else {printf("1");
	                 printf("\n");
				     }
		       }
    }
    return 0;
}
