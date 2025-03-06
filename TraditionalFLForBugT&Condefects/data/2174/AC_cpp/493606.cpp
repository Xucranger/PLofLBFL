#include <iostream>
 using namespace std;
 int main()
 {double x,y,z;
  while(cin >> x >> y){
    if(y)
    {
        z=x/y;
        if(z-int(z)>=0.5)
            z=z+1;
        cout <<int(z)<< endl;
    }
    else
        cout << "error" << endl;
  }
}
