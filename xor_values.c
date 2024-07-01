#include <stdio.h>

int main() {
    int x=0,n;
    scanf("%d",&n);
    if(n%4==1)
      printf("%d",1);
    else if(n%4==2)
      printf("%d",n+1);
    else if(n%4==3)
      printf("%d",0);
    else 
      printf("%d",n);
      return 0;
}
