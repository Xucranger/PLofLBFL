#include<stdio.h>
int main()
{
    int a,b,e;
    float c,d;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(b==0)
            printf("error\n");
        else{
            c=(float)a/(float)b;
            d=(a/b+0.5);
            if(c<d)
                e=a/b;
            else
                e=a/b+1;
            printf("%d\n",e);
        }
    }
    return 0;
}
