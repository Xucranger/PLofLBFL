#include <iostream>
using namespace std;
//a,b都是整数并且a > b
//4 / -6 应该是-0.6777 --> -1
int PosDivPos(int a, int b)
{
            //如果b是偶数
            if(b % 2 == 0)
            {
                if(a % b >= 0.5 * b)
                {
                    return a / b + 1;
                }
                else
                {
                    return a / b ;
                }
            }
            else
            {
                if(a % b > 0.5 * b)
                {
                    return a / b + 1;
                }
                else
                {
                    return a / b;
                }
            }
}
int NegDivPos(int a, int b)
{
    int tmp = -a;
    int res = PosDivPos(tmp, b);
    if(res == 0)
        return 0;
    else
        return -res;
}
int NegDivNeg(int a, int b)
{
    int tmp1 = -a;
    int tmp2 = -b;
    int res = PosDivPos(tmp1, tmp2);
    if(res == 0)
        return 0;
    else
        return res;
}
int PosDivNeg(int a, int b)
{
    int tmp = -b;
    int res = PosDivPos(a, tmp);
    if(res == 0)
        return 0;
    else
        return -res;
}
int main()
{
    int a, b;
    while(cin>>a>>b)
    {
        if(b == 0)
        {
            cout << "error" << endl;
            continue;
        }
        else if(a < 0 && b > 0)
        {
            cout << NegDivPos(a, b) << endl;
        }
        else if(a < 0 && b < 0)
        {
            cout << NegDivNeg(a, b) << endl;
        }
        else if(a > 0 && b < 0)
        {
            cout << PosDivNeg(a, b) << endl;
        }
        else
        {
            cout << PosDivPos(a, b) << endl;
        }
    }
    return 0;
}
