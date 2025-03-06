#include <iostream>
using namespace std;
int main()
{
  double a,b,m;
  while(cin >> a >> b)
  {
    if(b == 0)
     cout << "error" << endl;
    else
    {
      m = a/b;
      if((int)(m*10)%10 >= 5)
      cout << int(m)+1 << endl;
      else
      cout << int(m) << endl;
    }
  }
  return 0;
}
