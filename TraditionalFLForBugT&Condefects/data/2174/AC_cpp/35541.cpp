#include <iostream>
using namespace std;
int main()
{
   int a,b;
   while(cin >> a >> b)
   {
       if(b == 0)  
       {
           cout << "error" << endl;
           continue;
       }
       int c = (int)(a*1.0/b + 0.5);
       cout << c << endl;
   }
   return 0; 
}
