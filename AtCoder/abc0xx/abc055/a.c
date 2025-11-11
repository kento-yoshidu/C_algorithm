// https://atcoder.jp/contests/abc055/tasks/abc055_a

#include <stdio.h>

int func(int n) {
    return n * 800 - (n / 15) * 200;
}

int main() {
    printf("%d\n", func(20));
    //=> 15800

    printf("%d\n", func(60));
    //=> 47200
}
