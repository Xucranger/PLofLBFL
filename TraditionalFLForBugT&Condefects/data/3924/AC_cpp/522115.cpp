#include<iostream>
using namespace std;
#pragma warning(disable:4996)
#define de_lenth 5//蛇初始长度
#define Row_max 20//地图行
#define Line_max 30//地图列
void Creatmap(char map[Row_max][Line_max]);
 void Creatmap(char map[Row_max][Line_max]) {
for (int i = 0; i <= Line_max - 1; ++i){
map[Row_max - 1][i] = '#';
map[0][i] = '#';
}
for (int i = 1; i <= Row_max - 2; ++i) {
map[i][0] = '#';
map[i][Line_max - 1] = '#';
}
}
int main()
{
    int a,b,A,B;
    while(cin>>a>>b)
        if((a==11||b==11)&&(11-a>=2||11-b>=2))
         cout<<"Game Over"<<'\n';
        else
		{if(a>=10&&b>=10)
		{
			if(a-b==2||b-a==2)
			cout<<"Game Over"<<'\n';
			else
			{
				if(a==b)
				cout<<'A'<<'\n';
				else
				cout<<'B'<<'\n';
			}
		}
        else
        {
        	if((a+b)%4<=1)
        	cout<<'A'<<'\n';
        	else
			cout<<'B'<<'\n';
        }}
    return 0;
}
