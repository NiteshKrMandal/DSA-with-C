#include<stdio.h>  
void fac(){    
	int i,fact=1,no;    
	printf("Enter a number: ");    
	scanf("%d",&no);    
    for(i=1;i<=no;i++)
	{    
      fact=fact*i;    
  	}    
  	printf("Factorial of %d is: %d",no,fact);      
}  
int main(){
	fac();
} 