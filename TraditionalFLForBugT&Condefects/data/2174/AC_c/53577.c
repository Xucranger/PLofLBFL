#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int k,t,k0,k1,k2;
        if(b==0)
            printf("error\n");
        else
        {
             k=a/b;
             t=a%b;
            if(t==0)
                printf("%d\n",k);
            else
            {
                k0=t*10/b;
                if(k0>=5)
                    k=k+1;
				else
					k=k;
				printf("%d\n",k);
			}		
		}
	}
           return 0;
}
