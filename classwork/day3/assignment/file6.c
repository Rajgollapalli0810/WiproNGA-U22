/* Write a c program to read sum and product of digits in a given number*/

#include <stdio.h>
int main(){
    int n,r,t,sum=0,product=1;
    printf("enter the number\n:");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        r=t%10;
        sum=sum+r;
        product=product*r;
        t=t/10;
    }
    printf("The sum of the digits= %d\n",sum);
    printf("The product of thr digits=%d\n",product);
    return 0;
}
