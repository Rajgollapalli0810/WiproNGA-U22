/*write a c program to rotate array of elements fot every kth element*/

#include <stdio.h>

void reverse(int arr[],int start,int end){
    while(start < end){
        int temp = arr[start];
        arr[start++]=arr[end];
        arr[end--] = temp;
    }
}

void rttKth(int arr[],int n,int k){
    int i;
    for(i=0;i<n;i+=k){
        int start =i,end =i+k-1;
        if(end >=n) end = n-1;
        reverse(arr,start,end);
    }

}

int main(){
    int i,n,k;
    printf("number of elements in the list:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("k= ");
    scanf("%d",&k);
    rttKth(arr,n,k);

    printf("output:");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    printf("\n\t");

    return 0;


}