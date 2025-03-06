#include<iostream>
int main()
{
	int a,b;
	float c;
	while(std::cin>>a>>b)
	{
		if(b==0) {
			std::cout<<"error"<<std::endl;
		}
		else {
		c=a*1.0/b*1.0;
		printf("%.0f\n",c);}
	}
}
