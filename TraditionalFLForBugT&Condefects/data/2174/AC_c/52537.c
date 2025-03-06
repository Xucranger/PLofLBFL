#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
			printf("error\n");
        else
        {
            if(a%b*2<b)
				printf("%d\n",a/b);
            else
				printf("%d\n",a/b+1);
        }
    }
    return 0;
} 
