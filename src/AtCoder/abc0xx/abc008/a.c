// https://atcoder.jp/contests/abc008/tasks/abc008_1

#include <stdio.h>

int func(int s, int t)
{
    return t - s + 1;
}

int main()
{
    printf("%d\n", func(4, 7));
    //=> 4

    printf("%d\n", func(1, 1));
    //=> 1
}
