///week13-4b.cpp 求兩數之最大公因數
#include <stdio.h>
int gcd(int a, int b){
  if(a==0) return b;
  if(b==0) return a; ///這行可以不用寫
  return gcd(b, a%b);
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", gcd(a,b) );
}
