/*write a c program for sum of even and odd values in the array*/

#include <stdio.h>

int main(){
    int size,i,arr[100];
    int evenSum=0,oddSum=0;

    printf("\nEnter the size of an array:");
    scanf("%d",&size);
    printf("\nEnter the elements\n:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            evenSum = evenSum+arr[i];
        }else{
            oddSum=oddSum+arr[i];
        }
    }
    printf("\nThe sum of Even numbers in the array=%d",evenSum);
    printf("\nThe sum of odd numbers in the array=%d",evenSum);
    return 0;

}
