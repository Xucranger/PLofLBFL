#include<stdio.h>
int main()
{
	int m,n,result;
	float a;
	float b;
	float fresult;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(n==0)
		printf("error\n");
		else
		 {
		 	result=m/n;
		 	a=1.0*m;
		 	b=1.0*n;
		 	fresult=a/b;
		 	if(fresult>=0.0){
			 	if(fresult-result>0.499999999)
			 		printf("%d\n",result+1);
			 	else
			 		printf("%d\n",result);
			}
			else{
				if(result-fresult>0.499999)
					printf("%d\n",result-1);
				else
					printf("%d\n",result);
			}
		  } 
	}
	return 0;
}
