#include <stdio.h>
int main(){
int a,b,c;
float cin;
while(scanf("%d %d",&a,&b)!=EOF){
    if(b!=0){
        cin=a*1.0/b*1.0;
        if(cin>=0)
       c=(int)(cin+0.5)>(int)cin?(int)cin+1:(int)cin;
       if(cin<0)
        c=(int)(cin-0.5)>(int)cin?(int)cin-1:(int)cin;
    printf("%d\n",c);
    }
    if(b==0)
        printf("error");
}
return 0;
}
