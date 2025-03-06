#include<stdio.h>
int main()
{
int a,b,c,d,e;
while(scanf("%d%d",&a,&b)!=EOF)
if(b==0){
printf("error\n");
}
else{
c=a/b;
d=a%b;
e=b%2;
if(e==0){
   if(d>=e)
    {
    printf("%d\n",c+1);
}else{
printf("%d\n",c);
}}else{
if(d>=e)
    {
    printf("%d\n",c);
}else{
printf("%d\n",c);
}
}
}
return 0;
}
