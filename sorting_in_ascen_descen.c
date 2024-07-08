#include<stdio.h>
int main(){
	int arr[100],temp,n,i,j;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\nenter the element of array:");
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("\nelement of array before sorting:");
	for(i=0;i<n;i++) printf("%d ",arr[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
		}
		}
	}
	printf("\nelements in ascending order:");
	for(i=0;i<n;i++) printf("%d ",arr[i]);
	return 0;
}
