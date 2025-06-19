# include <stdio.h>
int main(){
    float s1 = 32;
    float s2 = 36;
    float s3 = 28;
    float s4 = 38;
    float marks = s1 + s2 + s3 + s4;
    int outoff = 4 * 40;
    float percentage = marks / outoff * 100;
    printf("sam percentage : %f", percentage);
    return 0;
}