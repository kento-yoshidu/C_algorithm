// https://atcoder.jp/contests/abc074/tasks/abc074_a

#include <stdio.h>

int func(int n, int a) {
    return n * n - a;
}

int main() {
    printf("%d\n", func(3, 4));
    //=> 5

    printf("%d\n", func(19, 100));
    //=> 261

    printf("%d\n", func(10, 0));
    //=> 100
}
