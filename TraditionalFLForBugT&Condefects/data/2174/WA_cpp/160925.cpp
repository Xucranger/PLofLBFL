#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
    {
		if(!b)
			printf("error\n");
        else
            printf("%d\n",a/b);
    }
	return 0;
}
