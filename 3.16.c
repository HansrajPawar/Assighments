/**Question numner 17**/

#include <stdio.h>

int main()
{
    int n;;
    
    printf("Please enter month number :- ");
    scanf("%d",&n);
    
    switch (n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Month days are 31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Month days are 30");
            break;
        case 2:
            printf("It's Feb ,might be 28 or 29 days");
            break;
        default :
            printf("You entered wrong month member");
    }
    return 0;
}

