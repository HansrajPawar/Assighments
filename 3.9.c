/**A C a program which takes the cost price and selling price of a product from the 
user & calculate and print profit or loss percentage.**/

#include <stdio.h>

int main()
{
    float cp,sp,cal,per_cal;
    
    printf("Please enter cost price & selling price respectively :-  ");
    scanf("%f %f",&cp,&sp);
    
    if(sp>cp){
       cal=sp-cp;
       per_cal=cal/cp*100;
       printf("Profit = %.4f \nPercentage Profit = %.2f",cal,per_cal);
    }
    else if(sp<cp){
        cal=cp-sp;
        per_cal=cal/cp*100;
        printf("Loss = %f \nPercentage loss = %.2f",cal,per_cal);
    }
    else{
        printf("there is not Profit or Loss , both are same");
    }

    return 0;
}

