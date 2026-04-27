// https://atcoder.jp/contests/abc455/tasks/abc455_a

#include <stdio.h>

char* fn(int a, int b, int c) {
    if (a != b && b == c) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(4, 5, 5));
    //=> Yes

    printf("%s\n", fn(1, 3, 7));
    //=> No

    printf("%s\n", fn(6, 6, 6));
    //=> No
}
