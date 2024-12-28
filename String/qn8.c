#include<stdio.h>
int main(){
	int i,count=0;
	char a[20];
	scanf("%[^\n]s",a);
	//printf("%s",a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' ')
		{
			printf("%s",(a+i));
			count++;
		}
	}
	printf("%d",count);
    return 0;
}