// https://atcoder.jp/contests/abc007/tasks/abc007_1

#include <stdio.h>

int func(int n)
{
    return n - 1;
}

int main()
{
    printf("%d\n", func(4));
    //=> 3

    printf("%d\n", func(100));
    //=> 99

    printf("%d\n", func(1));
    //=> 0
}
