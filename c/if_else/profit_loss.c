# include <stdio.h>
int main(){
    float cp, sp;
    printf("Enter the cost price : ");
    scanf("%f", &cp);

    printf("Enter the selling price : ");
    scanf("%f", &sp);

    float x = sp - cp;
    if (sp>cp){
        printf("The seller has made profit of\n");
        printf("%f", x);
    }
    else {
        printf("The seller has made loss of\n");
        printf("%f", x);
    }
    return 0;
}