#include <stdio.h>

/* 对fahr = 0, 20, ... , 300
打印华氏摄氏度与摄氏温度对照表*/
void main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr<=upper) {
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
} 