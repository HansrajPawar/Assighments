/*A C Program to  check whether a given number is divisible by 3 & 2 or not*/

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter an integer number :- ");
    scanf("%d",&n);
    
    if(n%3==0&&n%2==0){
        printf("%d is divisible by 3 & 2 \n",n);
    }
    else{
        printf("%d is not divisible by 3 & 2\n",n);
    }
    printf("Thank You");

    return 0;
}

