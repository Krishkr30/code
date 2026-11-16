#include <stdio.h>
int main(){
    float base, height, Area;
    printf("Enter Base of a Triangle = ");
    scanf("%f", &base);
    printf("Enter height of a Triangle = ");
      scanf("%f", &height);
    Area = 0.5 * base * height;
    printf("Area of Triangle = %.2f",Area);
    return 0;
}
