#include <stdio.h>
int main()
{
    int a,b,c;
    for(int i=0;i<=100;i++)
    {
	scanf("%d %d %d",&a,&b,&c);
	if((a<b+c)&&(b<c+a)&&(c<b+a))
	{
		if(a==b&&b==c)
	printf("DB\n");
	if(((a==b)||(b==c)||(c==a)))
	printf("DY\n");
	else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==b*b+a*a))
	printf("ZJ\n");
	else
	printf("PT\n");
		}
	else
		printf("ERROR\n");
}
return 0;
}
