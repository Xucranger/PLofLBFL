#include<stdio.h>
#include<string.h>
int main(){
	char str[1000],str1[1000],str2[1000],str3[1000];
   int n,i,a,n1,c,d,e=0;
   while(scanf("%s%s",&str,&str1)!=EOF){
   	e=0;
   	n=strlen(str);
   	n1=strlen(str1);
   	strcpy(str3,str1);
   	if (n==n1){
   	 i=0;
   			for (a=0;a<n1;a++){
   				if (str[i]==str1[a]){
					for(c=0;c<n1-a;c++){
   						str3[c]=str1[a+c];
					   }
					for(d=0;d<a;d++){
						str3[c+d]=str1[d];
					}
				   }
				   if (strcmp(str,str3)==0){
				   	e=1;
				   }
			   }
		   }
	if (e==0)printf("No\n");else printf("Yes\n") ;
   }
}  
