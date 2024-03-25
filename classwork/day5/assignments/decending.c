/*write a c program to sort given elements in decending order using bubble sort*/


#include <stdio.h>
void bubbleSort(int arr[],int size){
    for(int i=0;i<size -1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}

int main(){
    int size;
    printf("enter the size of the list:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the list:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    bubbleSort(arr,size);

    printf("Sorted list in decending order:");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n\n");

    return 0;

}
