/**Question numner 11**/

#include <stdio.h>

int main()
{
    char ch;;
    
    printf("Please enter  any alphabet :-  ");
    scanf("%c",&ch);
    //printf("%c",ch);
    if(ch>=97&&ch<=122){
        printf("Alphabet %c is in lowercase ",ch);
    }else if (ch>=65&&ch<=90){
        printf("Alphabet %c is in uppercase",ch);
    }else{
        printf("You entered wrong character");
    }

    return 0;
}

