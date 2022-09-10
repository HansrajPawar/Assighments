/*A C Program to check either a given number is an even number or an odd number. */

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter an integer number :- ");
    scanf("%d",&n);
    
    if(n%2==0){
        printf("%d is even \n",n);
    }
    else{
        printf("%d is odd \n",n);
    }
    printf("Thank You");

    return 0;
}

