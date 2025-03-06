#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100],c[300];
	char *x,*y;
	int flag,n,m;
	while(scanf("%s%s",a,b)!=EOF){
		flag=0;n=2;
		while(n--)strcat(c,a);
		x=c;y=b;
		while(*x!=0){
			if(*x==*y){
				if(strstr(x,b)!=NULL){
					flag=1;break;	
				}
			}			
			x++;
		}
		if(flag)printf("Yes\n");
		else printf("No\n");
		while(*x!='\0')*(x++)='\0';
	}
	return 0;
} 
