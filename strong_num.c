#include <stdio.h>
#define or ||
int factorial(int num){
    if(num==1 or num==0) return 1;
    else return num*factorial(num-1);
}
int main() {
    int num,n,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    n=num;
    while(n){
        sum = sum + factorial(n%10);
        n = n/10;
    }
    printf(num==sum?"yes":"No");
    return 0;
}
