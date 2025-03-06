#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int a, b;
    while(std::cin >> a >> b)
    {
        if(b==0)
        printf("error\0");
        else
		std::cout << a/b << std::endl;
    }
    return 0;
}
