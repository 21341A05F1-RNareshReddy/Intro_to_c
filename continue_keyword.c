#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if(i<5){
          continue;
        }
      else{
        break;
      }
      printf("%d",i);
    }

    return 0;
}
