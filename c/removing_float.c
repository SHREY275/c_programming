# include <stdio.h>
int main(){
    float x;
    printf("Enter your float number : ");
    scanf("%f", &x);
    int y = x;
    printf("\nthis is the integer value : %d", y);
    float z = x - y;
    printf("\nHere is the float number : %f", z);
    return 0;
}