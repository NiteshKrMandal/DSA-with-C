#include <stdio.h>
int main(){
    int i,count=0,j;
    char a[14]="I congrats You";

for(i=0;a[i]!='\0';i++){
    if(a[i]==' '){
        for(j=i+1;a[j]!=' ';j++){
       count=count+1;
       }
        break;
        }
    else{
        continue;
    }
    
}

printf("%d",count);
}
