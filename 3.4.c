/*A C Program to check whether a given number is a three-digit number or not*/

#include <stdio.h>

int main()
{
    int n,count=0,temp,q;
    printf("Please enter an integer number :- ");
    scanf("%d",&n);
    temp=n;
    for(;n>0;){
        q=n/10;
        n=q;
        count++;
        
    }
    if(count==3){
        printf("yes ! %d is three digit number ",temp);
    }else{
        printf("NO ! %d is not three digit number ",temp);
    }
    return 0;
}

