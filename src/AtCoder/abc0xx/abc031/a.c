// https://atcoder.jp/contests/abc031/tasks/abc031_a

#include <stdio.h>

int func(int a, int d)
{
    if (a < d) {
        return (a + 1) * d;
    } else {
        return (d + 1) * a;
    }
}

int main()
{
    printf("%d\n", func(31, 87));
    //=> 2784

    printf("%d\n", func(101, 65));
    //=> 6666

    printf("%d\n", func(3, 3));
    //=> 12
}
