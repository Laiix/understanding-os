#include <stdio.h>

/* 用于将输入复制到输出的程序*/
void main() {
    int c;

    c = getchar();
    while(c!=EOF) {
        putchar(c);
        c = getchar();
    }
} 