#include <stdio.h>
int main(){
    float radius, Area;
    printf("Enter radius of a circle = ");
    scanf("%f", &radius);
    Area = 3.14 * radius * radius;
    printf("Area of Circle= %.2f",Area);
    return 0;
}
