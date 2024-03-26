/* Write a c program that sorts array of elements  using pointers*/

#include <stdio.h>

void sortArrayDescending(int *arr,int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if((*arr+i)<*(arr+j)){
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
}

int main(){
    int i;;
    int arr[] ={5,2,8,1,9,3,7,6,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    

    printf("\tBefore sorting array\t:");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    sortArrayDescending(arr,size);

    printf("\n after sorting the array descending order\n:");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}