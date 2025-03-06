#include<iostream>
using namespace std;
int main()
{
    double x,y;
    while(cin >> x >> y)
    {
              if(y == 0)
              cout << "error" << endl;
              else
              cout << (int)(x/y) << endl;
    }
   // system("pause");
    return 0;   
} 
