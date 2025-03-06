#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
float fn;
float function(float n)
{
    float m;
    if(n == 0.0)
    return sin(fn);
    else
    {
        m = function(n - 1.0);
        return sin(m);
    }    
}    
int main()
{
    float k;
    for(;(scanf("%f", &fn) != EOF);)
    {
        k = fn;
        printf("%.6f\n", function(k));
    }
    return 0;
}
