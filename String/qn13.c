#include<stdio.h>
	void A(int no,char t)
	{
		for(int i=no;i>=1;i--)
		{
			for( int j=i;j>=1;j--){
			printf("%c",'*');
		}
		printf("\n");
	}
	}
	void B(int no,char t)
	{
		for(int i=no;i>=1;i--)
		{
			for( int j=4-i;j>=1;j--){
			printf("%c",'=');
		}
		printf("\n");
	}
	}
	void C(int no,char t)
	{
		for(int i=no;i>=1;i--)
		{
			for( int j=i;j>=1;j--){
			printf("%c",'#');
		}
		printf("\n");
	}
	}
	int main(){
		A(4,'*');
		printf("ABC\n");
		C(3,'#');
		printf("DEF\n");
		B(3,'=');
		printf("PQR\n");
		A(2,'*');
        return 0;
	}