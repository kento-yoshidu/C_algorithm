// https://atcoder.jp/contests/abc430/tasks/abc430_a

#include <stdio.h>

char* fn(int a, int b, int c, int d) {
    if (a <= c && d < b) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(10, 20, 30, 40));
    //=> No

    printf("%s\n", fn(10, 20, 30, 4));
    //=> Yes

    printf("%s\n", fn(100, 100, 1, 1));
    //=> No
}
