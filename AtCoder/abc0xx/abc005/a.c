// https://atcoder.jp/contests/abc005/tasks/abc005_1

#include <stdio.h>

int func(int x, int y)
{
    return y / x;
}

int main()
{
    printf("%d\n", func(4, 8));
    //=> 2

    printf("%d\n", func(4, 7));
    //=> 1

    printf("%d\n", func(4, 3));
    //=> 0
}
