#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
	if(b==0)
	cout << "error" << endl ;
	if(b!=0)
	{
		int m;
		m=a%b;
    if(m<=b/2.0)
	 cout << a/b << endl;
	else 
	 cout << a/b+1 << endl ; 
    }
    }
    return 0;
}
