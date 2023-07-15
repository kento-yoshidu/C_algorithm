// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_a

#include <stdio.h>

int run(int n)
{
    return n * n;
}

int main()
{
    printf("%d\n", run(2));
    //=> 4

    printf("%d\n", run(8));
    //=> 64

    printf("%d\n", run(100));
    //=> 10000

    return 0;
}
