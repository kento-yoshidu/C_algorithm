// https://atcoder.jp/contests/abc063/tasks/abc063_a

#include <stdio.h>

char* func(int a, int b) {
    static char buf[2];

    int sum = a + b;

    if (sum >= 10) {
        return "error";
    }

    buf[0] = '0' + sum;
    buf[1] = '\0';

    return buf;
}

int main() {
    printf("%s\n", func(6, 3));
    //=> 9

    printf("%s\n", func(6, 4));
    //=> error
}
