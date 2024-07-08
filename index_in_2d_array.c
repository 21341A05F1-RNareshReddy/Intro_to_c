#include<stdio.h>
int main(){
	int arr[100][100],r,c,k,r_ind=-1,c_ind=-1;
	printf("enter no of rows and columns:");
	scanf("%d %d",&r,&c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("enter the element to find index:");
	scanf("%d",&k);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j] == k) {
			    r_ind = i;
			    c_ind = j;
			    break;
			}
			if(r_ind != -1){
			    break;
			}
		}
	}
	if(r_ind != -1){
		printf("%d %d",r_ind+1,c_ind+1);  
	}
	else printf("element is not present");
	return 0;
}
