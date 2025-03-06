#include<iostream>
using namespace std;
void BigMutiple(string str1, string str2)
{
	//求字符串长度
    int len1=str1.length();
    int len2=str2.length();
    //定义输出字符串长度
    string str(len1+len2,'0');    //两数相乘结果的位数是两数位数之和-1 
    							//str初始化为0		
    int temp1=0,i,j,h=0,temp2=0;
    //乘法、加法位
    int mulflag=0, addflag=0;
    for(i=len2-1; i>=0; --i) 
    {    
           for(j=len1-1; j>=0; --j)
           {          
                //处理乘法进位
                temp1=(str2[i]-'0')*(str1[j]-'0')+mulflag;  //temp1两个位上的数相乘之后经过进位后留下来的最终的数 
                mulflag=temp1/10;   //乘法进位
                temp1=temp1%10;
                //处理加法进位
                temp2=str[i+j+1]-'0'+temp1+addflag;  /*两数的两个位上的数相加之后和位于结果的第i+j位上， 
				这里str[i+j+1]是 留出最高位str[0]作为符号位 
                str[i+j+1]=temp2%10+'0';//当前位赋值*/ 
                addflag=temp2/10;//加法进位
           }
//           str[i]+=mulflag+addflag;//最低位
     }
     if(str[0]=='0') //首位为0，如200*300=060000
     {
           str=str.substr(1, str.size());
    }
    while(str[h]!='\0'){
		++h;
	}
	cout<<str[h-1]<<endl;
}
int main(){
	int i=0;
	string str1,str2;
	while(cin>>str1>>str2){//控制多组数据输入 
		BigMutiple(str1,str2);
	}
	return 0;
}
