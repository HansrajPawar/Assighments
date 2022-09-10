/**A C to find the greatest among three given numbers**/

#include <stdio.h>

int main()
{
    int n1,n2,n3;
    
    printf("Please enter a 3 integer numbers :- ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if(n1>n2){
        if(n1>n3){
            printf("%d is greatest among three",n1);
        }
        else{
            printf("%d is greatest among three",n2);
        }
    }
    else{
        if(n2>n3){
            printf("%d is greatest among three",n2);
        }
        else{
            printf("%d is greatest among three",n3);
        }
    }

    return 0;
}

