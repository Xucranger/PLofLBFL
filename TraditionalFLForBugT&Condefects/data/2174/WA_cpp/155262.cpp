#include<iostream>
#include<math.h>　
#include<stdio.h>
using namespace std;
int main()
{
        int a,b;
        while(cin >> a >> b){
                if(b==0)
                        cout<<"error"<<endl;
                else
                        cout<<ceil(a/b)<<endl;
        }
        return 0;
}
