// https://atcoder.jp/contests/abc048/tasks/abc048_a

#include <stdio.h>
#include <string.h>

char* func(char* a, char* b, char* c) {
    static char buf[10];

    buf[0] = 'A';
    buf[1] = b[0];
    buf[2] = 'C';
    buf[3] = '\0';

    return buf;
}

int main() {
    printf("%s\n", func("AtCoder", "Beginner", "Contest"));
    //=> ABC

    printf("%s\n", func("AtCoder", "Snuke", "Contest"));
    //=> ASC

    printf("%s\n", func("AtCoder", "X", "Contest"));
    //=> AXC
}
