#include<stdio.h> 
#include<string.h> 
int main()
{
    int a,b,c;
        while(scanf("%d%d",&a,&b)!=EOF)
        {
        	if(b==0)
        	   printf("error");	
			else
			{
				c=a%b;
			    if(c<0.5*b)
        	        printf("%d\n",a/b);
    	        else
    	            printf("%d\n",a/b+1);
            }
        }
    return 0;
}
