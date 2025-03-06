#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10][10];
    int i=0;
    while(scanf("%d %d",&a[i][0],&a[i][1]) != EOF){
        if (a[i][1] == 0)
            printf("error\n");
        else
            printf("%d\n",a[i][0]/a[i][1]);
        i++;
    }
    return 0;
}
