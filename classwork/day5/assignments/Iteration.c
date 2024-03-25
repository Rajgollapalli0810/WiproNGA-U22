#include <stdio.h>

int main(){
    
    int i=0;
    char choice='y';

    while(choice=='y'){
        printf("Iteration %d\n",i);
        printf("Do you want to continue?(y/n):");
        scanf("%c",&choice);
        i++;

    }
    return 0;
}