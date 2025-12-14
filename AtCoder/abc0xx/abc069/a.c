// https://atcoder.jp/contests/abc069/tasks/abc069_a

#include <stdio.h>

int func(int n, int m) {
    return (n - 1) * (m - 1);
}

int main() {
    printf("%d\n", func(3, 4));
    //=> 6

    printf("%d\n", func(2, 2));
    //=> 1
}
