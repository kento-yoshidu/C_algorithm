// https://atcoder.jp/contests/abc013/tasks/abc013_1

#include <stdio.h>

int func(char x)
{
    return (int)(x - 'A' + 1);
}

int main()
{
    printf("%d\n", func('A'));
    //=> 1

    printf("%d\n", func('B'));
    //=> 2

    printf("%d\n", func('C'));
    //=> 3

    printf("%d\n", func('D'));
    //=> 4
}
