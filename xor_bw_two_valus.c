#include <stdio.h>
int xor(int n){
 if(n%4==1)
      return("%d",1);
    else if(n%4==2)
      return("%d",n+1);
    else if(n%4==3)
      return("%d",0);
    else 
      return("%d",n);
}
int main() {
    int x=0,l,r;
    scanf("%d %d",&l,&r);
    printf("%d",xor(r)^xor(l-1));
      return 0;
}
