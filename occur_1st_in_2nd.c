#include <stdio.h>

int main()
{
    int num,dig,count=0;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the digit:");
    scanf("%d",&dig);
    while(num){
        if(num%10==dig){
            count++;
        }
        num = num/10;
    }
    printf("%d",count);
    return 0;
}
