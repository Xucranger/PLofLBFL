#include<stdio.h>
int beishu(int shu1,int shu2)
{
	int jieguo;
	jieguo=shu1>shu2?shu1:shu2;
	jieguo--;
	do{
	jieguo++;
	}while(jieguo%shu1!=0 || jieguo%shu2!=0);
	return jieguo;
}
int yueshu(int shu1,int shu2)
{
	int jieguo;
	jieguo=shu1<shu2?shu1:shu2;
	jieguo++;
	do{
	jieguo--;
	}while(shu1%jieguo!=0 || shu2%jieguo!=0 );
	return jieguo;
}
int main()
{
	int shu1,shu2;
	int x,y;
	scanf("%d %d",&shu1,&shu2);
	x=beishu(shu1,shu2);
	y=yueshu(shu1,shu2);
	printf("%d %d",y,x);
}
