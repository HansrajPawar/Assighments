/**A c to calculate the length of String using printf function **/

#include <stdio.h>
int main()
{
    int sum=0,n=0;
    char str[50];
    printf("Please enter a String upto 49 character :- \n");
    gets(str);
    
    //to calculate length of string 
    while(str[n]!='\0'){
        sum++;n++;
    }
    printf("length of the string \"%s\" is %d ",str,sum);
    
    return 0;
}

