// https://atcoder.jp/contests/abc123/tasks/abc123_a

#include <stdio.h>

char* func(int a, int b, int c, int d, int e, int k)
{
    if (e - a <= k) {
        return "Yay!";
    } else {
        return ":(";
    }
}

int main()
{
    printf("%s\n", func(1, 2, 4, 8, 9, 15));
    //=> Yay!

    printf("%s\n", func(15, 18, 26, 35, 36, 18));
    //=> :(
}
