#include<stdio.h> 
int main() 
{ 
    int a,b; 
    while(scanf("%d %d",&a,&b)!=EOF) 
    {  
        int c=0; 
        if(b==0) printf("error\n"); 
        else 
        { 
             c=(int)(1.*a/b+0.5); 
             printf("%d\n",c); 
        } 
    } 
} 
