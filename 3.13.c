/*A C Program to  check whether a given number is divisible by 7 or divisible by 3 or not*/

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter an integer number :- ");
    scanf("%d",&n);
    
    if(n%7==0){
        if(n%3==0){
            printf("%d is divisible by 7 & 3 \n",n);   
        }
        else{
            printf("%d is divisible by 7 \n",n);
        }
    }
    else if(n%3==0){
        if(n%7==0){
            printf("%d is divisible by 7 & 3 \n",n);   
        }
        else{
            printf("%d is divisible by 3 \n",n);
        }
    }
    else{
        printf("%d is not divisible by either 3 or 7\n",n);
    }
    printf("Thank You");

    return 0;
}

