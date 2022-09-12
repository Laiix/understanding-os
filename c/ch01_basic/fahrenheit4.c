#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

/* 对fahr = 0, 20, ... , 300
打印华氏摄氏度与摄氏温度对照表*/
void main() {
    float fahr, celsius;

    fahr = LOWER;
    while(fahr<=UPPER) {
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
} 