#include <stdio.h>
#include <string.h>
int main() {
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        int c,d;
        if(b==0) printf("ERROR");
        else {
            c=a/b;
            d=a%b;
            if(d>=5) printf("%d",c+1);
            if(d<=4) printf("%d",c);
        }
    }
}
