
/** A C Program to take date as an input in below given format and convert the date format and display **/

#include <stdio.h>
int main()
{
    int date,month,year; 
    
    printf("Please enter a date,month & year :- \n");
    correct:
    scanf("%d %d %d",&date,&month,&year);
    
    if(date>31&&month>12){ 
        printf("\nPlease enter currect date");
        goto correct;
    }else{
        printf("Day - %d , Month - %d , Year - %d",date,month,year);
        
    }
    
    return 0;
}

