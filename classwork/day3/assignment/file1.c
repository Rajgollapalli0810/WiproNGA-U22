/*statement: Write the logic to for incrementing squared Number star pattern*/

#include<stdio.h>
 
void print_incrementing_squared_number_star_pattern(int N){
int num=1;

    for (int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            printf("%d",num++);
            if(j<N-1){
                printf("*");
            }
        }
        printf("\n");
    }
}
int main(){
    int N;
    printf("Enter the value of N:");
    scanf("%d",&N);

    if(N < 2 || N > 10){
        printf("Invalid input. N should be between 2 and 10.\n");
        return 1;
    }
    print_incrementing_squared_number_star_pattern6m(N);

    return 0;

}

