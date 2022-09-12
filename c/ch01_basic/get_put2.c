#include <stdio.h>

/* 用于将输入复制到输出的程序*/
void main() {
    int c;
    while((c = getchar())!=EOF) {
        putchar(c);
    }
    printf("input EOF");
} 