#include <stdio.h>
#define and &&
int sum_of_divisors(int num){
    int sum = 0;
    for(int i=2;i<num/2+1;i++){
        if(num%i==0) sum = sum + i;
    }
    return sum+1;
}
int main() {
    int num1,num2;
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);
    printf(sum_of_divisors(num1)==num2 and sum_of_divisors(num2)==num1?"yes":"N0");
    return 0;
}
