#include <stdio.h>
#include <string.h>
int main() {
    int a,b;
    int c,d;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(b==0) {printf("error\n");}
        else {
            c=a/b;
            d=a%b;
            if((d*10)/b>=5) printf("%d\n",c+1);
            if((d*10)/b<=4) printf("%d\n",c);
        }
    }
}
