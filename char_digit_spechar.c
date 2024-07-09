#include <stdio.h>

int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
        printf("the character %c is an alphabet",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("the charcter %c is the digit",ch);
    }
    else{
        printf("the charcter %c is the special character",ch);
    }
    return 0;
}
