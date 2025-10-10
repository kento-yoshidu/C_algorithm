// https://atcoder.jp/contests/abc027/tasks/abc027_a

#include <stdio.h>

int func(int l1, int l2, int l3)
{
    return l1 ^ l2 ^ l3;
}

int main()
{
    printf("%d\n", func(1, 1, 2));
    //=> 2

    printf("%d\n", func(4, 3, 4));
    //=> 3

    printf("%d\n", func(5, 5, 5));
    //=> 5
}
