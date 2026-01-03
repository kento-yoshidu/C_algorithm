// https://atcoder.jp/contests/abc075/tasks/abc075_a

#include <stdio.h>

int func(int a, int b, int c) {
    return a ^ b ^ c;
}

int main() {
    printf("%d\n", func(5, 7, 5));
    //=> 7

    printf("%d\n", func(1, 1, 7));
    //=> 7

    printf("%d\n", func(-100, 100, 100));
    //=> -100
}
