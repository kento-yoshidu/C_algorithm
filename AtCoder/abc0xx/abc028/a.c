// https://atcoder.jp/contests/abc028/tasks/abc028_a

#include <stdio.h>

char* func(int n)
{
    if (n == 100) {
        return "Perfect";
    } else if (n >= 90) {
        return "Great";
    } else if (n >= 60) {
        return "Good";
    } else {
        return "Bad";
    }
}

int main()
{
    printf("%s\n", func(80));
    //=> Good

    printf("%s\n", func(100));
    //=> Perfect

    printf("%s\n", func(59));
    //=> Bad

    printf("%s\n", func(95));
    //=> Great
}
