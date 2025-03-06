#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100],temp;
	int i,j,len_s1,flag=0;
	while(scanf("%s %s",s1,s2)!=EOF){
		flag=0;
		len_s1=strlen(s1);
		for(i=1;i<len_s1;++i){
			temp=s1[len_s1-1];
			s1[len_s1-1]=s1[0];
			for(j=0;j<len_s1-2;++j){
				s1[j]=s1[j+1];
			}
			s1[len_s1-2]=temp;
			if(strcmp(s1,s2)==0){
				flag=1;
			}
		}
		if(flag)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
