#include <stdio.h>
int main (){
   int a,b,c[10],e[10];
   char d[10]="error";
   int i;
   for (i=0;i<2;i++){
    e[i]=1;
   scanf("%d %d",&a,&b);
   if (b==0)
     e[i]=0;
   else
     c[i]=(1.0)*a/(1.0*b)+0.5;
   }
   for (i=0;i<2;i++)
     if (e[i]==0)
       printf("%s\n",d);
     else
       printf ("%d\n",c[i]);
   return 0;
}
