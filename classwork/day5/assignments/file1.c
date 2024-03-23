
/* Write a c progaram for factorial of N number using the recursive function*/


#include <stdio.h>

int factorial(int n)
{
    if(n==0){
        return 1;

    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The factorial of %d is %d\n",num,factorial(num));
    return 0;
}