#include <stdio.h>
#include <math.h>
int main()
{
    int nResult = 0;            
    float a,b;
    float fResult = 0;
	while(scanf("%f%f",&a,&b)!=EOF)
{
	if(b==0)
	printf("error\n");
	else
{
    fResult = a/b;  
    float fArray;
	fArray=fResult-(int)fResult;   
        if (fArray > 0.499999999) 
            nResult = fResult + 1;  
        else
            nResult = fResult;        
 printf("%d\n",nResult);
}
}
    return 0;
}
