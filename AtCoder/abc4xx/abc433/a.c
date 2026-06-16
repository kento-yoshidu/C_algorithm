// https://atcoder.jp/contests/abc433/tasks/abc433_a

#include <stdio.h>

char* rec(int x, int y, int z) {
    if (y*z > x) {
        return "No";
    } else if (y*z == x) {
        return "Yes";
    } else {
        return rec(x + 1, y + 1, z);
    }
}

char* fn(int x, int y, int z) {
    return rec(x, y, z);
}

int main() {
    printf("%s\n", fn(44, 20, 2));
    //=> Yes

    printf("%s\n", fn(28, 10, 3));
    //=> No

    printf("%s\n", fn(50, 5, 10));
    //=> Yes

    printf("%s\n", fn(1, 100, 2));
    //=> No
}
