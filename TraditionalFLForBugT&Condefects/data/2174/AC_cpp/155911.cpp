/*题目描述
完成除法运算，输入为多行数据，每行包括两个整数a和b，用空格隔开。
针对每行数据，输出a÷b的结果，结果四舍五入，如果b等于0，输出error*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(b==0)
        cout<<"error"<<endl;
        else
        {
            c=(a/(b*1.0)+0.5);
            cout<<(int)c<<endl;
        }
    }
return 0;}
