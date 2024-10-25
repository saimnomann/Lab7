#include<stdio.h>
int main(){
	char name[100];
	int i,count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
	gets(name);
	puts(name);
	for(i=0;name[i]!='\0';i++){
		if(name[i]=='A'||name[i]=='a'){
		count_a++;
		}
	else if(name[i]=='E'||name[i]=='e'){
		count_e++;
		}
	else if(name[i]=='I'||name[i]=='i'){
		count_i++;
		}
	else if(name[i]=='O'||name[i]=='o'){
		count_o++;
		}
	else if(name[i]=='U'||name[i]=='u'){
		count_u++;
	}
	}
printf("a=%d\ne=%d\ni=%d\no=%d\nu=%d",count_a,count_e,count_i,count_o,count_u);
}