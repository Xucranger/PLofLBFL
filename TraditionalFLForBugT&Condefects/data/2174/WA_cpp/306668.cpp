#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,m,n;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(b!=0){
                if(a==0)printf("0\n");
                else{
            if(a>0&&b>0)
        {
            m=abs(b%a);
                n=abs(b/2);
        if(m>n)printf("%d\n",a/b+1);
        else printf("%d\n",a/b);
        }
        else {
            if(a>0&&b<0||a<0&&b>0){
                m=abs(b%a);
                n=abs(b/2);
                if(m>n)printf("%d\n",a/b-1);
                else printf("%d\n",a/b);
            }else{
                if(a<0&&b<0){
                    m=abs(b%a);
                    n=abs(b/2);
                    if(m>n)printf("%d\n",a/b+1);
                    else printf("%d\n",a/b);
                }
            }
        }
    }
    }else printf("error\n");
    }
    return 0;
}
