#include<iostream>
#include<stdio.h>
#include <algorithm>
using namespace std; 
int main()
{
    int a;
    int b;
    int c;
    while(cin>>a>>b)
    {
        if(b==0)
        printf("error");
        else
        {
        c=a/b;
        cout << c << endl;
        }     
    }
}
