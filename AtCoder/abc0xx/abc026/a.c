// https://atcoder.jp/contests/abc026/tasks/abc026_a

#include <stdio.h>

int func(int a)
{
    return (a / 2) * (a / 2);
}

int main()
{
    printf("%d\n", func(10));
    //=> 25

    printf("%d\n", func(60));
    //=> 900
}
