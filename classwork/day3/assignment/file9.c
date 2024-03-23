/* write a c program to check if the product of digits of a 
number at even and odd place are equal*/

#include <stdio.h>
int main(){
    int num,digit,evenProduct =1,oddProduct=1,position=1;


    printf("Enter the number:");
    scanf("%d",&num);

    while(num!=0){
        digit = num%10;

        if(position %2==0){
            evenProduct*=digit;
        }else{
            oddProduct*=digit;
        }
        num/10;
        position++;
    }
    if(evenProduct==oddProduct){
        printf("The product of digits at even and odd placcce is equal:\n");

    }else{
        printf("The product of digit at even and odd places is not equal.\n");
    }
    return 0;
}
