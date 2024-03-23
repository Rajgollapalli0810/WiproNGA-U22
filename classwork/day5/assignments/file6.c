
/*Write a c program to print the sum of even and odd position values in a array*/

#include <stdio.h>
int main(){
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int evenSum=0;
    int oddSum=0;

    for (int i=0;i<10;i++){
        if(numbers[i]%2==0){
            evenSum+=numbers[i];
        }else{
            oddSum+=numbers[i];
        }
    }
    printf("sum of values at even positions:%d\n",evenSum);
     printf("sum of values at odd positions:%d\n",oddSum);
     return 0;
}