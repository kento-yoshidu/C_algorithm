// https://atcoder.jp/contests/abc016/tasks/abc016_1

#include <stdio.h>
#include <string.h>

char* func(int m, int d)
{
    if (m % d == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main()
{
    printf("%s\n", func(1, 1));
    //=> YES

    printf("%s\n", func(2, 29));
    //=> NO

    printf("%s\n", func(12, 6));
    //=> YES
}
