#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double N;
double F_(double a)
{
    if(a == 0)return sin(N);
    else return sin(F_(a-1));
}
int main()
{
    while((cin>>N))
    {
    double result;
    result = F_(N);
    cout<<setiosflags(ios::fixed)<<setprecision(6)<<result<<endl;
    }
     return 0;
}
