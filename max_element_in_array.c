#include<stdio.h>
int main(){
  int arr[5],max;
  printf("enter the values into the array");
  for(int i =0;i<5;i++){
    scanf("%d",arr[i]);
  }
  max = arr[0];
  for(int i =1;i<5;i++){
    if (arr[i]>max){
      max = arr[i];
    }
  }
  return 0;
}
