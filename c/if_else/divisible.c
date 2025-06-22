# include <stdio.h>
int main(){
    int a;
    printf("Enter the value : ");
    scanf("%d", &a);
    if (a % 5 == 0 || a % 3 == 0){
        printf("The value is divisible by 5 or 3");
    }
    else{
        printf("The value is not divisible by 5 or 3");
    }
    return 0;
}