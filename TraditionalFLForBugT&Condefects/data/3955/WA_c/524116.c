#include<stdio.h>
#include <string.h>
int main()
{
  char a[1000],b[1000];
  int i,j,c[1000],n=0,s=0,t=0; 
  while(~scanf("%s %s",&a,&b))
  {
  if(strlen(a)!=strlen(b)) printf("No\n");
  else {
         for(i=0;i<strlen(b);i++)
		 if(a[0]=b[i]) {
		 	            c[n]=i;
		 	            n=n+1;
		                }
		 for(j=0;j<n;j++){
		 	               s=0;
		 	               for(i=0;i<strlen(b);i++) if(a[i]==b[(i+c[j])%strlen(b)])	s=s+1;
						   if(s==strlen(b)) t=1;
		                  }
		 if(t!=1) printf("No\n");
		 else printf("Yes\n");
       }
}
}
