// https://atcoder.jp/contests/abc019/tasks/abc019_1

#include <stdio.h>

int func(int a, int b, int c)
{
    if ((a >= b && a <= c) || (a <= b && a >= c)) return a;
    if ((b >= a && b <= c) || (b <= a && b >= c)) return b;
    return c;
}

int main()
{
    printf("%d\n", func(2, 3, 4));
    //=> 3

    printf("%d\n", func(5, 100, 5));
    //=> 5

    printf("%d\n", func(3, 3, 3));
    //=> 3

    printf("%d\n", func(3, 3, 4));
    //=> 3
}
