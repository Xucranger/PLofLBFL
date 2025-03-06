#include <iostream> 
using namespace std;
int main()
{
	int a,b,c;
	while(cin >> a >> b){
	c=(float)a/(float)b+0.5;
	if(b==0)
		printf("error\n");
	else
		printf("%d\n",c);
	}
}
