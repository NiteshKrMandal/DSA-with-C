#include<stdio.h>
int main()
{
    int i,j,k,count;
    char a[20];
    count=0;
    printf("Enter characters\n");
    scanf("%[^\n]s",a);
    
    for(i=0;a[i]!='\0';i++)
    {
    
        if(a[i]!=' ')
    
    count++;
    }
    printf("\n");
    
    printf("Total space is:%d",count);
    return 0;
}