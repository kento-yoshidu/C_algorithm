// https://atcoder.jp/contests/abc061/tasks/abc061_a

#include <stdio.h>

char* func(int a, int b, int c) {
    if (a <= c && c <= b) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", func(1, 3, 2));
    //=> Yes

    printf("%s\n", func(6, 5, 4));
    //=> No

    printf("%s\n", func(2, 2, 2));
    //=> Yes
}
