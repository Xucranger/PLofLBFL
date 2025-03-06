#include <stdio.h>
int main()
{
	float a,m,b,k;
	int c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else{
		    k=a/b;
		    c=k;
		    m=c-k; 
		    if(m>=0.5||m<=-0.5)
		    {
			    c=c+1;
			    printf("%d\n",c);
		    }
		    else
			    printf("%d\n",c);
			}
	}
	return 0;
}
