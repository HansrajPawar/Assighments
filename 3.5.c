/*A C Program to print greater between two numbers. Print one number of both are the same*/

#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Please enter two integer number :- ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        printf("%d is greater than %d",n1,n2);
    }
    else if(n1=n2){
        printf("both are equal");
    }
    else{
        printf("%d is greater than %d",n2,n1);
    }
    return 0;
}

