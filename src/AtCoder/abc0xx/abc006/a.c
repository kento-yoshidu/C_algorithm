// https://atcoder.jp/contests/abc006/tasks/abc006_1

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool check(int n)
{
    char buffer[20];
    sprintf(buffer, "%d", n);
    return strchr(buffer, '3') != NULL;
}

const char* func(int n)
{
    if (n % 3 == 0 || check(n)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main()
{
    printf("%s\n", func(2));
    //=> NO

    printf("%s\n", func(9));
    //=> YES

    printf("%s\n", func(3));
    //=> YES

    printf("%s\n", func(13));
    //=> YES
}
