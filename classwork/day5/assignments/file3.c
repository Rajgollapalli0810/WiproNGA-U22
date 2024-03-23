/*write a cprogran to store values from 1to 100 in a array*/

#include <stdio.h>

int main(){
    int arr[100];
    int i;

    for(i=0;i<100;i++){
        arr[i]=i+1;
    }
    printf("Array from 1 to 100:\n");
    for(i=0;i<100;i++){
    printf("%d\n",arr[i]);
     }
    return 0;

}