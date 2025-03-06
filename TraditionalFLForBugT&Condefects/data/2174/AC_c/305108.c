#include<stdio.h>
main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0)
		    printf("error\n");
		else{
			int t;
			if(a%b*2>=b)
			    t=a/b+1;
			else
			    t=a/b;
			printf("%d\n",t);
		}
		    //printf("%d\n",a/b);
	}
}
