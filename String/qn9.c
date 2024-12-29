#include<stdio.h>
int main(){
	int i;
	char a[20]="nitesh \0H";
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='\0')
		break;
	}
	printf("%d",i);
}