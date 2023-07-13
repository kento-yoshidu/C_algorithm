// https://atcoder.jp/contests/abc100/tasks/abc100_a

#include <stdio.h>

char* run(int a, int b)
{
    if (a <= 8 && b <= 8) {
        return "Yay!";
    } else {
        return ":(";
    }
}

int main() {
    printf("%s\n", run(5, 4));
    //=> Yay!

    printf("%s\n", run(8, 8));
    //=> Yay!

    printf("%s\n", run(11, 4));
    //=> :(

    return 0;
}