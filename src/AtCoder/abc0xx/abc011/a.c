// https://atcoder.jp/contests/abc011/tasks/abc011_1

#include <stdio.h>

int func(int n)
{
    return (n + 1) % 12;
}

int main()
{
    printf("%d\n", func(1));
    //=> 2

    printf("%d\n", func(12));
    //=> 1
}
