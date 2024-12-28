#include<stdio.h>
int main(){
	int i,j,imp,l;
	char a[20];
	scanf("%[^\n]s",a);
	for(i=0;a[i]!=' ';i++){
		for(i=0,j=i-1;i<j;i++,j--){
			imp=a[i];
			a[i]=a[j];
			a[j]=imp;
		}
			printf("%s%s",a+i,a+j);
	}
    return 0;
	}