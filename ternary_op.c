#include <stdio.h>
int main(){
  int a=10,b=20,c=30,d=40,e=50,f=60;
  (a=b)?(c==d):(e==f);
  (a==b)?(c=d):(e=f);
  (a=b)?(c=d):(e=f);
  (a==b)?(c==d):(e==f);
}
