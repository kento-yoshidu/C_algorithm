// https://atcoder.jp/contests/abc020/tasks/abc020_a

#include <stdio.h>

char* func(int q)
{
    if (q == 1) {
        return "ABC";
    } else {
        return "chokudai";
    }
}

int main()
{
    printf("%s\n", func(1));
    //=> ABC

    printf("%s\n", func(2));
    //=> chokudai
}
