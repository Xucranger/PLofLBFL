#include <stdio.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a, &b) != EOF)
        printf("%d\n",(int)(a*0.1/b+0.5));
	return 0;
}
