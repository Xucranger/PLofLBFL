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
             {
                  int t = (int)(x/y) ;
                  //cout << t << endl;
                  if(x/y-t>=0.5)
                  cout << t+1 << endl;
                  else
                  cout<< endl;
             }
    }
   // system("pause");
    return 0;   
} 
