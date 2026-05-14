// https://atcoder.jp/contests/abc091/tasks/abc091_a

#include <stdio.h>

char* fn(int a, int b, int c) {
    if (a + b >= c) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(50, 100, 120));
    //=> Yes

    printf("%s\n", fn(500, 100, 1000));
    //=> No

    printf("%s\n", fn(19, 123, 143));
    //=> No

    printf("%s\n", fn(19, 123, 142));
    //=> Yes
}
