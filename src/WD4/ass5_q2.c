#include <stdio.h>

float max_of_num(float num1, float num2);

int main(){
    float max = max_of_num(5.900000, 0.000000);

    printf("Max is %f\n", max);

    return 0;
}

float max_of_num(float num1, float num2){
    return (num1 > num2) ? num1 : num2;
}