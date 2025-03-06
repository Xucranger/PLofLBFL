#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    while(~scanf("%d%d",&a,&b)){
        if(b==0)
            printf("error\n");
        else{
            double d;
            d=1.0*a/b;
            c=(d-a/b>=0.5)?(a/b+1):a/b;
            printf("%d\n",c);
        }
    }
    return 0;
}
