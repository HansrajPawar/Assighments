/**to take time in HH:MM format and display in the given format **/
#include <stdio.h>
int main()
{
    int hr,m;
    char fm;
    
    printf("Please enter a time in HH:MM format :- \n");
    scanf("%d %c %d",&hr,&fm,&m);
    if(hr>25||m>61||fm!=':'){ 
        printf("You have entered something wrong \n");
    }else{
        printf("%d Hour and %d Minute",hr,m);
    }
    
    return 0;
}

