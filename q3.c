#include<stdio.h>
int main(){
char name[100];
int i,count=0;
gets(name);
puts(name);
for(i=0;name[i]!='\0';i++){
	count++;
}
	printf("The length of the string is %d\n",count);
for(i=count;i>=0;i--) //abdc
printf("%c",name[i]);
	
}
