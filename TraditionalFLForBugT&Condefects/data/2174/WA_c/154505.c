#include <stdio.h>
int main(){
int a,b,c;
float cin;
while(scanf("%d %d",&a,&b)!=EOF){
    if(b!=0){
        cin=a*1.0/b*1.0;
       c=(int)((cin*10+5)/10);
    printf("%d\n",c);
    }
    if(b==0)
        printf("ERROR");
}
return 0;
}
