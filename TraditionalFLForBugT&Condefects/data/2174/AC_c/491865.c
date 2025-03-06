#include "stdio.h"
int main(int argc, char* argv[])
{  int a,b,c;
	float d,e;
    while(scanf("%d%d",&a,&b)!=EOF)
    {   
        if(b==0)
    printf("error\n");
    else{ c=a/b;
	d=1.0*a/b;
	e=d-c;
	if((2.0*e)>=1.0)
        printf("%d\n",c+1);
	else printf("%d\n",c);}}
    return 0;
}
