#include <stdio.h>

int main() {
    int num,n,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=2;i<num/2+1;i++){
        if(num%i==0) sum = sum + i;
    }
    printf(num==sum+1?"yes":"No");
    return 0;
}
