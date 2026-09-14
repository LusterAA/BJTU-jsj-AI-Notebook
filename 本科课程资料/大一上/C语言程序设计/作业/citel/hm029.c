#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 使用getchar()依次读取三个字符（无空格间隔）
    char c1 = getchar();
    char c2 = getchar();
    char c3 = getchar();

    // 使用putchar()输出三个字符，中间用空格分隔
    putchar(c1);
    putchar(' ');  // 输出空格
    putchar(c2);
    putchar(' ');  // 输出空格
    putchar(c3);

    return 0;
}