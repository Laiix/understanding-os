#include <stdio.h>

/* 对fahr = 0, 20, ... , 300
打印华氏摄氏度与摄氏温度对照表*/
void main() {
    int fahr;

    for(fahr=0; fahr<=300; fahr = fahr+20) {
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
} 