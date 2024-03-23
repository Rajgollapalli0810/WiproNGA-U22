/*wwrite the logic to print number star right angle triangle*/


#include<stdio.h>
int main(){
    int N;
    printf("Enter the number of rows:");
    scanf("%d",&N);

    int i,j,num=1;
for(i=1;i<=N;i++){
    for(j=1;j<=i;j++){
        if(j==i)
        printf("%d*",num++);
        else
        printf("%d*",num++);
    }
    printf("\n");
}
return 0;

}
