#include<iostream>
using namespace std;
int main(){
    int A,B;
    while(cin>>A>>B){
        if(A<=9&&B<=9){
            if((A+B)%2==0){
                if(((A+B)/2)%2==0)
                    cout<<"A"<<endl;
                else
                    cout<<"B"<<endl;
            }
            else{
                if(((A+B-1)/2)%2==0)
                    cout<<"A"<<endl;
                else
                    cout<<"B"<<endl;
            }
        }
        else{
            if(A==11&&B==9||A==9&&B==11)
                cout<<"GAME OVER"<<endl;
            else{
                if(((A+B)-20)%2==0)
                    cout<<"A"<<endl;
                else
                    cout<<"B"<<endl;
            }
        }
    }
}
