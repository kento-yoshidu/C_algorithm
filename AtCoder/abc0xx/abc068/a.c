// https://atcoder.jp/contests/abc068/tasks/abc068_a

#include <stdio.h>

char* func(int n) {
    static char buf[8];
    sprintf(buf, "ABC%d", n);
    return buf;
}

int main() {
    printf("%s\n", func(100));
    //=> ABC100

    printf("%s\n", func(425));
    //=> ABC425

    printf("%s\n", func(999));
    //=> ABC999
}
