#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100],c[300];
	char *x,*y;
	int flag,i;
	while(scanf("%s%s",a,b)!=EOF){
		i=0;
		while(c[i]!='\0'){
			c[i]='\0';++i;
		}
		flag=0;
		strcpy(c,a);
		strcat(c,a);
		x=c;y=b;
		if(strstr(c,b)!=NULL)
			flag=1;	
		if(flag)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
} 
