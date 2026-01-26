// https://atcoder.jp/contests/abc440/tasks/abc440_a

#include <stdio.h>

int func(int x, int y) {
    return x * (1 << y);
}

int main() {
    printf("%d\n", func(110, 2));
    //=> 440

    printf("%d\n", func(233, 3));
    //=> 1864

    printf("%d\n", func(432, 1));
    //=> 864
}
