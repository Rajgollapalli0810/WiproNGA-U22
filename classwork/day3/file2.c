#include <stdio.h>

int main(){
    int num,i;
    printf("Enter the number to print multiplication table:");
    scanf("%d",&num);

    printf("multiplication table of %d:\n",num);

    for(i=1;i<=10;i++){
        printf("%d x %d=%d\n",num,i,num*i);
    }
     return 0;
}