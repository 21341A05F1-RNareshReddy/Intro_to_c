#include <stdio.h>
#include <math.h>
int main() {
    int num,len_num,n,sum=0,digit;
    printf("enter the number:");
    scanf("%d",&num);
    len_num = printf("%d\n",num);
    len_num--;
    n = num;
    while(n){
        sum = sum+pow((n%10),len_num);
        n = n/10;
    }
    printf(num==sum?"yes":"No");

    return 0;
}
