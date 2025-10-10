// https://atcoder.jp/contests/abc004/tasks/abc004_1

#include <stdio.h>

int func(int n)
{
    return n * 2;
}

int main()
{
    printf("%d\n", func(1000));
    //=> 2000

    printf("%d\n", func(1000000));
    //=> 2000000

    printf("%d\n", func(0));
    //=> 0

    return 0;
}
