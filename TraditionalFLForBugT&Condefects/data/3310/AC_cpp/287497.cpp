#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
double sum, n;
double func(double x)
{
    if(x == 0){
        double tmp = sin(n);
        //cout << tmp <<endl;
        //sum += tmp;
        return tmp;
    }
    else{
        double tmp = sin(func(x-1));
        return tmp;
    }
}
int main()
{
    while(~scanf("%lf", &n)){
        printf("%.6lf\n", func(n));
    }
    return 0;
}
