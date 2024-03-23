/*write program to print multiplication of table using goto statement*/

#include<stdio.h>
int main(){
    int n,count;
    printf("Enter the number:");
    scanf("%d",&n);
    count=1;

    start:
        if(count<=10){
            printf("%d*%d=%d\n",n,count,n*count);
            count++;
            goto start;
        }
        return 0;

}
