// https://atcoder.jp/contests/abc045/tasks/abc045_a

#include <stdio.h>

int func(int a, int b, int h) {
    return (a + b) * h / 2;
}

int main() {
    printf("%d\n", func(3, 4, 2));
    //=> 7

    printf("%d\n", func(4, 4, 4));
    //=> 16
}
