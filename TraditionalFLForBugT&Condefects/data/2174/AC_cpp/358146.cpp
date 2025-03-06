#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int res;
	float a,b;
	while(~scanf("%f%f",&a,&b)){
		if (b)
		{
			res=a/b+0.5;
		cout<<res<<endl;/* code */
		}
		else{
			puts("error");
		}
	}
	return 0;
}
