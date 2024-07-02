#include <stdio.h>
int harsad_num(num);
int main(){
  int x;
  printf("enter a number:");
  scanf("%d",&x);
  x = harsad_num(x);
  printf("%d",x);
}
int harsad_num(int num){
  int digit,sum=0,n;
  n = num;
  while(n){
    digit = n%10;
    sum = sum + digit;
    n = n / 10;
  }
  if((num % sum) == 0){
    return sum;
  }
  return -1;

}
