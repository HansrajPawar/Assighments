//Assignment 3

/*A C Program to  check whether a given number is positive or non-positive.*/

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter an integer number :- ");scanf("%d",&n);
    
    if(n>0){
        printf("%d is Positive number \n",n);
    }
    else if(n>0){
        printf("%d is Negative number \n",n);
    }
    else{
        printf("%d is Zero",n);
    }
    printf("Thank You");

    return 0;
}



