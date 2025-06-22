# include <stdio.h>
int main(){
    float a, b, c;
    printf("Enter the angle : ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == b && b == c){
        printf("Triangle is equivalent");
    }
    else if (a == b || b == c || c ==a){
        printf("It is isoscalene");
    }
    else{
        printf("It is scalene");
    }
    return 0;
}