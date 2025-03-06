#include<iostream>
int main()
{
	int a,b;
    float c;
    int d;
    while(std::cin>>a>>b)
    {
       if(b==0)
           std::cout<<"error"<<std::endl;
       else
       {
           c=a/b;
           d=c*2;
           if(d>(int)c*2)
               std::cout<<(int)c+1<<std::endl;
           else
               std::cout<<(int)c<<std::endl;
       }
    }
    return 0;
}
