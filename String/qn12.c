#include<stdio.h>
int fact(){
 	int n1=0,n2=1,n3,i,number;   
 	int n,a;
 	printf("factorial of : ");
 	scanf("%d",&n); 
 	printf("Enter the number of elements:");    
 	scanf("%d",&number);    
 	printf("%d\t%d\t",n1,n2);   
 	for(i=2;i<number;++i)
{    
  	n3=n1+n2;    
  //	printf("%d\t",n3);    
  	n1=n2;    
  	n2=n3;  
	for (a=1;a<=n;a++)
	{
		if (a%2!=0)
		{
		printf("%d/%d!+",n3,a);
		}
	}
}
}
	int main()
{
	fact();	

}
