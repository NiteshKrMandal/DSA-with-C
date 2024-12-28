#include<stdio.h>
int main(){
	int i,j;
	char a[]={"ASHWANISAH"};
	for(int i=9;i>=0;i--){
		for(int j=0;j<=0;j++){
			a[j]=a[i];
		}
		printf("%s\n",a+j);
}
return 0;
}