/*write a c program to find the greteast of the three numbers using Nestedif statement*/

#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the three numbers\n:");
    scanf("%d %d %d ",&x,&y,&z);
    if(x>y){
        if(x>z)
        printf("%d is the larges\n",x);
        else
        printf("%d is the largest\n",y);
    }
    else if(y>z){
        printf("%d is the largest\n",y);
        
    }else
    printf("%d is the largest\n:");

return 0;
}