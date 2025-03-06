#include<bits/stdc++.h>
using namespace std;
class Student
{   public:
    Student();
    char number[10];
    string c;
    int sub1;
    int sub2;
    int sub3;
    Student(int s1,int s2,int s3):sub1(s1),sub2(s2),sub3(s3){}
    int Max();
    void Display();
};
int Student::Max()
{
    return(sub1+sub2+sub3);
}
void Student::Display()
{
    cout<<number<<" "<<c<<" "<<sub1<<" "<<sub2<<" "<<sub3<<endl;
}
int main()
{int n,k,m=0;
cin>>n>>k;
int A[n+1];
int B[n+1];
for(int i=0;i<n+1;i++)
    A[i]=0;
for(int i=1;i<=k;i++)
{m=i;while(m<=n)
{if(A[m]==0)A[m]=1;
else A[m]=0;
m+=i;
}
}
int count=0;
for(int i=1;i<=n+1;i++)
{if(A[i]==1){B[count]=i;count++;
}
}
cout<<count<<endl;
for(int i=0;i<count-1;i++)
{
    cout<<B[i]<<" ";
}
cout<<B[count-1];
}
