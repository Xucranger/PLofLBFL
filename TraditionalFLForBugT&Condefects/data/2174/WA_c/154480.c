#include <stdio.h>
int main(){
int a,b,c;
float cin;
while(scanf("%d %d",&a,&b)!=EOF){
    if(b!=0){
        cin=a/b;
       if((int)(cin+0.5)>(int)cin)
        c=(int)cin+1;
        else
        c=(int)cin;
    printf("%d\n",c);
    }
    if(b==0)
        printf("ERROR");
}
}
