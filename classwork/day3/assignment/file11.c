/*isha is playing with numbers and trying to write program to check if
 the sum of distinct digits of two integers are equal*/

#include <stdio.h>
int main(){
    int num1,num2,sum1=0,sum2=0;
    
    printf("Enter the first number:");
    scanf("'%d",&num1);
    printf("Enter   the second number:");
    scanf("'%d",&num2);

    while(num1){
        sum1 += num1%10;
        num1/=10;
    }
    while(num2){
        sum2+=num2 % 10;
        num2/=10;
    }
    if(sum1 == sum2){
        printf("YES\n:");
    }else{
        printf("NO");
    }
    return 0;
}