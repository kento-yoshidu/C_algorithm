// https://atcoder.jp/contests/abc461/tasks/abc461_a

#include <stdio.h>

char* fn(int a, int d) {
    if (a <= d) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(4, 5));
    //=> Yes

    printf("%s\n", fn(5, 5));
    //=> Yes

    printf("%s\n", fn(6, 5));
    //=> No
}
