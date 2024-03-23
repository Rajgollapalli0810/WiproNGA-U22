/*from given array of positive integer,your task
 is to find the leaders in the array,an element is leader 
if it is greater than all elements to its right side*/

#include<stdio.h>
void findLeaders(int arr[],int size){
    int maxElement=arr[size-1];
    printf("Leaders in the array are :%d",maxElement);
    for(int i=size-2;i>=0;i--){
        if(arr[i]>maxElement){
            maxElement=arr[i];
            printf("%d",maxElement);
        }
        }
    }
    int main(){
        int arr[]={2,6,3,8,4};
        int size=sizeof(arr)/sizeof(arr[0]);
        findLeaders(arr,size);
        return 0;
    }
    