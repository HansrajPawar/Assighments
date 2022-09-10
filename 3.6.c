/*A C Program to check whether a given year is a leap year or not.*/

#include <stdio.h>

int main()
{
    long year;
    printf("Please enter year :- ");
    scanf("%ld",&year);
    
    if(year%4==0){
        printf("%ld is leap year ",year);
    }
    else{
        printf("%ld is not leap year ",year);
    }
    return 0;
}

