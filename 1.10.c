/**to take date as an input in bD/MM/YYYY format and convert the date format and display **/
#include <stdio.h>
int main()
{
    int date,month,year;
    char fm,fm1;
    
    printf("Please enter a date in DD/MM/YYYY format :- \n");
    correct:
    scanf("%d %c %d %c %d",&date,&fm,&month,&fm1,&year);
    if(date>32||month>13||fm!='/'||fm1!='/'){ 
        printf("Please enter currect date or in correct format\n");
        goto correct;
    }else{
        printf("Day - %d , Month - %d , Year - %d",date,month,year);
        
    }
    
    return 0;
}

