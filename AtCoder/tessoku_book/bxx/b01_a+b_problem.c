// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_bz

#include <stdio.h>

int run(int a, int b)
{
    return a + b;
}

int main()
{
    printf("%d\n", run(1, 2));
    //=> 3

    printf("%d\n", run(77, 23));
    //=> 100

    printf("%d\n", run(100, 100));
    //=> 200
}
