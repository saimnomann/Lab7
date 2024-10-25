#include<stdio.h>
int main(){
	int i,freq[100]={0};
 int arr[10];
 for(i=0;i<10;i++){
 	printf("Element %d:",i+1);
 	scanf("%d",&arr[i]);
 	freq[arr[i]]++;
 }
 for(i=0;i<100;i++){
 	if(freq[i]>0){
 		printf("%d occurs %d times\n",i,freq[i]);
	 }
	 }
 }
	