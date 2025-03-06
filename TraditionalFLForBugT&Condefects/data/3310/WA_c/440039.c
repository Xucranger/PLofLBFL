#include<stdio.h>
#include<math.h>
int main()
{	int n[20],i,j,num=0,s;
	double k,f[101];
	while(num<=19){
		scanf("%d",&n[num++]);
		if(getchar()=='\n')
		{	break;
		}
} 	
s=num;
	for(i=0;i<s;i++)
	{f[0]=sin(n[i]);
		if(n[i]==0) printf("0.000000\n");
	else {
	for(j=1;j<=n[i];j++)
		{
		k=f[j-1];
		f[j]=sin(k);
	if(j==n[i]) printf("%.6lf\n",f[j]);}
	}
}}
