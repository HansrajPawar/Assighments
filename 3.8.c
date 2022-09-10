/**A C a program which takes the cost price and selling price of a product from the 
user & calculate and print profit or loss percentage.**/

#include <stdio.h>

int main()
{
    float cp,sp,cal;
    
    printf("Please enter cost price & selling price respectively :-  ");
    scanf("%f %f",&cp,&sp);
    
    if(sp>cp){
       cal=sp-cp;
       printf("Profit = %.4f",cal);
    }
    else if(sp<cp){
        cal=cp-sp;
        printf("Loss = %f",cal);
    }
    else{
        printf("there is not Profit or Loss , both are same");
    }

    return 0;
}


