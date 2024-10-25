#include<stdio.h>
int main(){
int i,temp,count=0;
char name[100];
gets(name);
puts(name);
for(i=0;name[i]!='\0';i++){
	count++;
}
for(i=0;i<count;i++){
if(name[i]!=name[count-1]){
printf("It is not a pallindrome");
break;
}
else{
	temp=1;
}
count--;
}
if(temp==1){
	printf("It is a palindrome");
}
}