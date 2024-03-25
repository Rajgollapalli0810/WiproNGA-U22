/*write a c program to check whether a given number how many ways can be 
expressed as sum of two prime numbers*/

#include <stdio.h>
int isPrime(int n){
    int i;
    if(n<=1) return 0;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
        return 0;

    }
    return 1;
}

void findPrimePairs(int n){
    int count=0;
    int i;
    for(i=2;i<=n/2;i++){
        if(isPrime(i) && isPrime(n-i)){
        printf("%d = %d + %d\n",n,i,n-i);
        count++;
    }
}
printf("The number of ways =%d\n",count);
}
int main(){
    int num;
    printf(" enter a positive integer:");
    scanf("%d",&num);
    findPrimePairs(num);
    return 0;
}