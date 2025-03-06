#include<stdio.h>
int main()
{
	int a,b,r;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0) printf("error\n");
		else{
			r=a/b;
			if((float)a/(float)b-r>=0.5)
			    r++;
			printf("%d\n",r);
		}    
	}
	return 0;
}
