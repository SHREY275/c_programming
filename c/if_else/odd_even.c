# include <stdio.h>
int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    if (x % 2 == 0){
        printf("The value is even");
    }
    else {
        printf("The value is odd");
    }
    return 0;
}