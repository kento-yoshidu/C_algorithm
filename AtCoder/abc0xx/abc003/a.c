// https://atcoder.jp/contests/abc003/tasks/abc003_1

#include <stdio.h>

int func(int n)
{
    int tmp = 0;

    for (int i = 1; i <= n; i++) {
        tmp = tmp + i*10000;
    }

    return tmp / n;
}

int main()
{
    printf("%d\n", func(6));
    //=> 35000

    printf("%d\n", func(91));
    //=> 460000

    return 0;
}
