/*write a c program to find the Nth number made of prime digits*/

#include <stdio.h>

int i;
int isPrime(int num){
    if(num <1)
    return 0;

    for(i=2;i*i <=num;i++){
        if(num%i==0)
        return 0;
    }
    return 1;
}
int findNthPrimedigitnumber(int n){
    int count=0;
    int num=2;

    while(count<n){
        if (isPrime(num)){
            count++;
        }
        num++;
    }
    return num -1;
}

int main(){
    int n,t,Nthnumber4;
    printf("enter the number of test cases:");
    scanf("%d",&t);

    while(t--){
        
        printf("Enter the value of N:");
        scanf("%d",&n);

        Nthnumber=findNthPrimedigitnumber(n);

        printf("the %d number made of prime digits is:%d\n",n,Nthnumber);

    }
    return 0;
}