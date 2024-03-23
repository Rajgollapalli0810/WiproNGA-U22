
/*write a c program to reverse the elements in a given array*/
#include <stdio.h>

int main(){
    int arr[100];
    int n,i,temp;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i]=temp;
    }
       printf("the array after reversing is:\n");
        for(i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
        return 0;   
}