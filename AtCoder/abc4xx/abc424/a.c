// https://atcoder.jp/contests/abc424/tasks/abc424_a

#include <stdio.h>

char* func(int a, int b, int c)
{
    if (a == b || b == c || a == c) {
        return "Yes";
    } else {
        return "No";
    }
}

int main()
{
    printf("%s\n", func(4, 2, 4));
    //=> Yes

    printf("%s\n", func(3, 4, 5));
    //=> No

    printf("%s\n", func(10, 10, 10));
}
