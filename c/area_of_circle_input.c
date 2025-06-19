#include <stdio.h>

int main() {
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);

    float pie = 3.14;
    float area = pie * r * r;

    printf("The area of circle is: %f\n", area);
    return 0;
}
