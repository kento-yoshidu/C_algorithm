// https://atcoder.jp/contests/abc002/tasks/abc002_1

#include <stdio.h>

int func(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    printf("%d\n", func(10, 11));
    //=> 11

    printf("%d\n", func(100000000, 10000000));
    //=> 100000000
}
