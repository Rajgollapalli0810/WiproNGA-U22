/* write a c program to print the alphabet trinagle*/

#include <stdio.h>
int main(){
    printf("Alphabet triangle \n\n");
    int i,j;
    for(i=1;i<=6;i++){
        for(j=i;j>=1;j++){
            printf("%c",'A'+j-1);
        }
    }
    printf("\n");
    return 0;
}
