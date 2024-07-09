#include <stdio.h>

int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90)){
        printf("the lowercase of %c is %c",ch,ch+32);
    }
    
    else if(ch>=97 && ch<=122){
        printf("the uppercase of %c is %c",ch,ch-32);
    }
    else{
        printf("enter valid alphabet");
    }
    return 0;
}
