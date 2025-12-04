// https://atcoder.jp/contests/abc065/tasks/abc065_a

#include <stdio.h>

char* func(int x, int a, int b) {
    if (a >= b) {
        return "delicious";
    }

    int expire = b - a;

    if (x >= expire) {
        return "safe";
    } else {
        return "dangerous";
    }
}

int main() {
    printf("%s\n", func(4, 3, 6));
    //=> safe

    printf("%s\n", func(6, 5, 1));
    //=> delicious

    printf("%s\n", func(3, 7, 12));
    //=> dangerous
}
