/*Given an array A of N numbers.the task is to find the 
position where equilibrium first occurs in the array is
 a position such that the sum of elements before it is equal 
 to the sum of elements after it.*/

#include<stdio.h>
int Equilibrium(int arr[],int n){
    int i,j;
    int leftSum,rightSum;
    for(i=0;i<n;++i){
    leftSum=0;
    for(j=0;j<i;j++)
    leftSum+=arr[j];
    rightSum=0;
    for(j=i+1;j<n;j++)
    rightSum+=arr[j];
    if(leftSum==rightSum)
    return i;
    }
    return -1;
}
int main()
{
  int arr[]={-7,1,5,2,-4,3,0};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",Equilibrium(arr,arr_size));
    getchar();
    return 0;
}
       
