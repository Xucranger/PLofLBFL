#include<iostream>
int main()
{
	int a,b;
	while(std::cin>>a>>b)
	{
		if(b==0) {
			std::cout<<"error"<<std::endl;
		}
		else std::cout<<a/b<<std::endl;
	}
}
