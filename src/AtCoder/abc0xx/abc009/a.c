// https://atcoder.jp/contests/abc009/tasks/abc009_1

#include <stdio.h>

int func(int n)
{
    return (n + 1) / 2;
}

int main()
{
    printf("%d\n", func(2));
    //=> 1

    printf("%d\n", func(5));
    //=> 3

    printf("%d\n", func(1));
    //=> 1
}
