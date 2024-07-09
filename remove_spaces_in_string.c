#include <stdio.h>

int main()
{
    char ch[100];
    int no_words,no_char,i;
    printf("enter a string:");
    scanf("%[^\n]",ch);
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]!=' ') {
            printf("%c",ch[i]);
        }
    }
    return 0;
}
