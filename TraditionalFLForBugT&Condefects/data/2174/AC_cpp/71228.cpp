#include<iostream>
#include<stdio.h>
int main()
{
	int a,b;
    int c;
    float d,p;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
    if (b==0)
    printf("error\n");
    else
   {
    c=a/b;
    d=(float)a/(float)b;
    p=d-c;
    if(p>=0.5)
    c++; 
    printf("%d\n",c);
}
}
}
