// https://atcoder.jp/contests/abc001/tasks/abc001_1

#include <stdio.h>

int func(int a, int b)
{
    return a - b;
}

int main() {
    printf("%d\n", func(15, 10));
    //=> 5

    printf("%d\n", func(0, 0));
    //=> 0

    printf("%d\n", func(5, 20));
    // -15

    return 0;
}
