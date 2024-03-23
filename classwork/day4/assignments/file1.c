/*write a c program to find the greatest number from the given list of elements*/

#include <stdio.h>

int main(){
    int i,n;
    double arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter number%d:",i+1);
        scanf("%lf",&arr[i]);
    }
    //storing the largest number to arr[0]
    for(i=1;i<n;i++){
        if(arr[0]<arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("largest element = %.2lf",arr[0]);
    return 0;
}

