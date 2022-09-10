/**A C program to print the first 10 odd natural numbers in reverse order **/

#include <stdio.h>

int main()
{
    int i,n=1,odd[15];
    for(i=0;i<15;i++){
        //printf("%d  ",n);
        odd[i]=n;
        n=n+2;
    }
    for(i=14;i>=0;i--){
        printf("%d  ",odd[i]);
    }

    return 0;
}

