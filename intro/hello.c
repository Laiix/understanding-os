/* $begin hello */

/*

gcc -E hello.c -o hello.i #预编译
gcc -S hello.i            #编译 gcc -S hello.i -o hello.s
gcc -c hello.s            #汇编 gcc -c hello.s -o hello.o
gcc hello.o               #链接 gcc hello.o -o hello

链接可分为动态链接和静态链接：
  动态链接使用动态链接库进行链接，生成的程序在执行的时候需要加载所需的动态
库才能运行。动态链接生成的程序小巧，但是必须依赖动态库，否则无法执行。
Linux 下的动态链接库实际是共享目标文件（shared object），一般是.so 文件，
作用类似于 Windows 下的.dll 文件。
  静态链接使用静态库进行链接，生成的程序包含程序运行所需要的全部库，可以直
接运行，不过体积较大。

gcc 默认是动态链接，加上-static 参数则采用静态链接，如：
gcc hello.o -static -o hello_static  #需要安装静态库 yum install glibc-static

或者直接:
gcc hello.c               # gcc hello.c -o hello

*/

#include <stdio.h>

int main() 
{
    printf("hello, world\n");
    return 0;
}
/* $end hello */

