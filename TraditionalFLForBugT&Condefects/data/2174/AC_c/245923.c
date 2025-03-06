#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a,b;
  while (scanf("%d %d", &a, &b) != EOF) {
    if(b == 0){
      printf("error\n");
    }else{
      int res = a/b;
      int n = a%b;
      if (n*2 >= b){
        printf("%d\n", res+1);
      }else{
        printf("%d\n", res);
      }
    }
  }
  return 0;
}
