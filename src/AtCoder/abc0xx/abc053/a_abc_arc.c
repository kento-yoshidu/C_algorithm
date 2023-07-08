// https://atcoder.jp/contests/abc053/tasks/abc053_a

#include <stdio.h>

char* run(int n)
{
    if (n < 1200) {
        return "ABC";
    } else {
        return "ARC";
    }
}

int main()
{
    printf("%s\n", run(1000));
    //=> ABC

    printf("%s\n", run(2000));
    //=> ARC

    return 0;
}
