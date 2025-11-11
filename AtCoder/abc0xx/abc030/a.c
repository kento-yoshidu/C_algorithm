// https://atcoder.jp/contests/abc030/tasks/abc030_a

#include <stdio.h>

char* func(int a, int b, int c, int d)
{
    float taka = (float) b / (float) a;
    float aoki = (float) d / (float) c;

    if (aoki > taka) {
        return "AOKI";
    } else if (taka > aoki) {
        return "TAKAHASHI";
    } else {
        return "DRAW";
    }
}

int main()
{
    printf("%s\n", func(5, 2, 6, 3));
    //=> AOKI

    printf("%s\n", func(100, 80, 100, 73));
    //=> TAKAHASHI

    printf("%s\n", func(66, 30, 55, 25));
    //=> DRAW
}
