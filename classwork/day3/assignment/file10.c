/*write a  program to check whether product of digits at even places is divisible
 sum of digit at odd place of anumber*/

#include <stdio.h>

int main(){
    int n,p =1,s= 0,d,i=1;
     {
    printf("Enter the number:");
    scanf("%d",&n);
     }

    while(n){
        d=n%10;
        i%2 == 0?p*=d:(s +=d);
        n/=10;
        i++;
    }
    if(p%s==0)
        { 
        printf("Yes,divisible\n:");
        }
        else{
               printf("No,not divisible:");
            }
            return 0;
}
