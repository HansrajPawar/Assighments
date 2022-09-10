#include <stdio.h>
int main()
{
    int r;
    printf("Please enter a radius of the circle:- ");
    scanf("%d",&r);
    printf("Area of circle is %d having the radius %.4f ",r,3.1415*r*r);
    
    return 0;
}

