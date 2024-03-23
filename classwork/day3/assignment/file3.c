/*write a c program to print alphabetd triangle*/

#include <stdio.h>
int main(){
    int i,j,k,colomn,rows;
    char ch;

    printf("Enter the number of rows:");
    scanf("%d",&rows);

    colomn =rows -1;

    for(i=1;i <= rows;i++){
        for(k=1;k <=colomn;k++){
            printf("\n");
        }
    }
    ch ='A';
    for(j=1;j<=i;j++){
        printf("%c\n",ch++);
    }
    ch--;
    for(j=1;j<i;j++){
        printf("%c",--ch);
    }
    printf("\n");
    colomn--;
    
    return 0;
}

    
