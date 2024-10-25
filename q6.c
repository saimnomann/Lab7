#include<stdio.h>
int main(){
	int i,j=0,arr[100],num,x=0,temp;
	printf("Please enter number of elements in the array");
	scanf("%d",&num);
for(i=0;i<num;i++){
	scanf("%d",&arr[i]);
}
i=0;
while(1){
	if(arr[i]==arr[x+1]){
		temp=arr[i];
		break;
	}
	else {
		x++;
	}
	if(x>=num){
		i++;
		x=0;
	}
	if(x==num){
		break;
	}
}
	printf("The element %d occurs twice",temp);
}