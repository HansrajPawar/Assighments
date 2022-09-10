/**Question numner 16**/

#include <stdio.h>

int main()
{
    char ch;;
    
    printf("Please enter  any character :-  ");
    scanf("%c",&ch);
    
    if(ch>=97&&ch<=122){
        printf("Character %c is a lowercase alphabet",ch);
    }else if (ch>=65&&ch<=90){
        printf("Character %c is a uppercase alphabet",ch);
    }else if(ch>=48&&ch<=57){
        printf("Character %c is a digit",ch);
    }else{
        printf("Character %c is a special symbol",ch);
    }
    return 0;
}

