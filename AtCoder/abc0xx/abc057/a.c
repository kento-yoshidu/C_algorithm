// https://atcoder.jp/contests/abc057/tasks/abc057_a

#include <stdio.h>

int func(int a, int b) {
    return (a + b) % 24;
}

int main() {
    printf("%d\n", func(9, 12));
    //=> 21

    printf("%d\n", func(19, 0));
    //=> 19

    printf("%d\n", func(23, 2));
    //=> 1
}
