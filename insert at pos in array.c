#include<stdio.h>
int main(){
  int arr[100],n,pos,val;
  printf("enter the size of the array:");
  scanf("%d",&n);
  printf("enter the elements in the array");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("enter the value to be inserted");
  scanf("%d",&val);
  printf("enter the position at which the value should be inserted");
  scanf("%d",&pos);
  for(int i=n;i>=pos;i--){
    arr[i] = arr[i-1];
  }
  arr[pos-1] = val;
  for(int i=0;i<n+1;i++){
    printf("%d",arr[i]);
  }
  return 0;
}
