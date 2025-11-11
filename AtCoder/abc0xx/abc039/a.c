// https://atcoder.jp/contests/abc039/tasks/abc039_a

#include <stdio.h>

int func(int a, int b, int c) {
    return (a * b + b * c + a * c) * 2;
}

int main() {
    printf("%d\n", func(2, 3, 4));
    //=> 52

    printf("%d\n", func(3, 4, 2));
    //=> 52

    printf("%d\n", func(100, 100, 100));
    //=> 60000

    printf("%d\n", func(1, 1, 1));
    //=> 6
}
