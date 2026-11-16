#include <stdio.h>
int main(){
    float length, breadth, Area;
    printf("Enter Length of a Rectangle = ");
    scanf("%f", &length);
    printf("Enter breadth of a Rectangle = ");
      scanf("%f", &breadth);
    Area = length * breadth;
    printf("Area of Rectangle = %.2f",Area);
    return 0;
}
