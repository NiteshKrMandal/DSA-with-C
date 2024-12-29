#include <stdio.h>
int main()
{
char a[100];
int i;
int space=0;
    printf("Enter a string\n");
    scanf("%[^\n]s",a);
     for(i=0;i<=a[i];i++)
    {
      if(a[i]==' ')
     {
        space++;
     }
    
    }
printf("Total space :%d ",space);

    return 0;
}