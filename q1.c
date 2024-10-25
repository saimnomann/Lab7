#include<stdio.h>
int main(){
	int i,arr[6],temp;
	for(i=0;i<6;i++){
		scanf("%d",&arr[i]);
	}
for(i=5;i>=0;i--){
	if(i==5){
		temp=arr[i];
	}
	else{
		arr[i+1]=arr[i];
	}
}
arr[0]=temp;
for(i=0;i<6;i++){
	printf("%d",arr[i]);
}
}