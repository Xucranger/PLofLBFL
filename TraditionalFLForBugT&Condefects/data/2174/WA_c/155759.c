#include<stdio.h>
void main()
{    int i,m,n;
     float a,b,k,l;
     while(scanf("%f %f",&a,&b)==2)
        {   if(b==0)
               printf("error");
                else
                   {   k=a/b;
                       m=a/b;
                       l=k-m;
                       if(l<0.5)
                         printf("%d",m);
                         else
                         {n=m+1;
                          printf("%d\n",n);}
                   }
        }
}
