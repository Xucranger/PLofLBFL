#include <iostream>
using namespace std;
int main()
{
   float n,m,k;
   int h;
   while(cin>>m>>n)
   {    if(n==0)
       printf("error\n");
   else
   {     k=m/n;
        h=m/n;
	if(k-h<0.5)
    	printf("%d\n",h) ;
   else
        printf("%d\n",h+1) ;
   } 
 }
}
