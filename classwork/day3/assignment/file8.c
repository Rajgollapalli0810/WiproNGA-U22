/*write a c program to count the how many ways to devide a give number*/

#include <stdio.h>
void printpartitions(int a,int b, int c,int d){
    printf("%d + %d + %d + %d\n",a,b,c,d);
}
int countways(int n){
    int ways = 0;
    for(int i =1;i<n/4;i++){
        for(int j=i;j<=n/3;j++){
            for(int k =j;k<=n/2;k++){
                int l=n -(i + j + k);
            }
        }
    }
    return ways;
}

int main(){
    int T;
    printf("Enter the number of vases:");
    scanf("%d",&T);

    while(T--){
        int n;
        printf("Enter a positive integer:");
        scanf("%d",&n);
        printf("Number of ways to divide %d into 4 parts:%d\n",n,countways(n));
    }
    return 0;
}