# include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three values : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a>c){
        printf("a is the greatest value");
    }
    else if (b > a && b > c){
        printf("b is the greatest value");
    }
    else if (c > a && c > b){
        printf("c is the greatest value");
    }
    else {
        printf("Valid values");
    }
    return 0;
}