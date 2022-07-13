#include <stdio.h>
//write a function to convert celsius to fahrenheit.
  float convertTemp(float celsius);
int main(){
    float far = convertTemp(32);
    printf("far : %f " , far);
    return 0;
}

float convertTemp(float celsius){
    float far = celsius * (9/5) + 32;
    return far;
}