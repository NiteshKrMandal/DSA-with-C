#include<stdio.h>
int main(){
	int i;
	char a[20]="ASHWANI SAH";
	//scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' ')
		{
		//	printf("_");
		}
		else
		{
			printf("%s",a);
		}
	}
    return 0;
}