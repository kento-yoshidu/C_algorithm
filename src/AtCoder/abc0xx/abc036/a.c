// https://atcoder.jp/contests/abc036/tasks/abc036_a

#include <stdio.h>

int func(int a, int b) {
    return (a + b - 1) / a;
}

int main() {
    printf("%d\n", func(12, 36));
    //=> 3

    printf("%d\n", func(12, 100));
    //=> 9
}
