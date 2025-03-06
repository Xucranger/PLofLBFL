#include<stdio.h>
int main()
{
  float p;
  int a,b;
while( scanf( "%d %d", &a , &b ) != EOF)
{ if(b==0)
 {
     printf("error\n");
 }
 else
 {
    p=(float)a/(float)b-a/b;
    if(p>=0.5)
   printf( "%d\n", a/b+1);
    else
    printf("%d\n",a/b);
  }
}
}
