#include <stdio.h>

int main()
{
    char ch[100];
    int no_words,no_char,i;
    printf("enter a string:");
    scanf("%[^\n]",ch);
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            while(ch[i]==' '){
                i++;
            }
            no_words++;
            i--;
        }
        else{
            no_char++;
        }
    
    }
    if (ch[0]==' ' || ch[i-1]) no_words--;
    if (ch[0]==' ' && ch[i-1]) no_words--;
    printf("%d %d",no_words+1,no_char);
    return 0;
}
