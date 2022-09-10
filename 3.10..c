/**Question numner 11**/

#include <stdio.h>

int main()
{
    float s1,s2,s3,s4,s5,per;
    
    printf("Please enter  marks of 5 subjects respectively :-  ");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    
    per=(s1+s2+s3+s4+s5)/5.0;
    
    if(per>=33){
        printf("candidate passed the examination");
    }else{
        printf("candidate failed the examination");
    }

    return 0;
}


