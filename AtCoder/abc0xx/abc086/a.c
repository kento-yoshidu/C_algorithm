// https://atcoder.jp/contests/abc086/tasks/abc086_a

#include <stdio.h>

char* fn(int a, int b) {
    if (a * b % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    printf("%s\n", fn(3, 4));
    //=> Even

    printf("%s\n", fn(1, 21));
    //=> Odd
}
