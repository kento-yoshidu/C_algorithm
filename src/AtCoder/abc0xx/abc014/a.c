// https://atcoder.jp/contests/abc014/tasks/abc014_1

#include <stdio.h>

int func(int a, int b)
{
    if (a % b == 0) {
        return 0;
    } else {
        return ((a / b + 1) * b ) - a;
    }
}

int main()
{
    printf("%d\n", func(7, 3));
    //=> 2

    printf("%d\n", func(5, 5));
    //=> 0

    printf("%d\n", func(1, 100));
    //=> 99

    printf("%d\n", func(25, 12));
    //=> 11
}
