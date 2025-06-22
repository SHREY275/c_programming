# include <stdio.h>
int main(){
    int x;
    printf("Enter the value : ");
    scanf("%d", &x);
    if (x > 0){
        printf("The value is +ve");
    }
    else{
        printf("The value is -ve");
    }
    return 0;
}