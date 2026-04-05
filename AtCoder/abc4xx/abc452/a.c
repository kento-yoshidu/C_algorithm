// https://atcoder.jp/contests/abc452/tasks/abc452_a

#include <stdio.h>

char* fn(int m, int d) {
    if (m == 1 && d == 7 ||
        m == 3 && d == 3 ||
        m == 5 && d == 5 ||
        m == 7 && d == 7 ||
        m == 9 && d == 9) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(3, 3));
    //=> Yes

    printf("%s\n", fn(1, 1));
    //=> No

    printf("%s\n", fn(4, 4));
    //=> No

    printf("%s\n", fn(11, 7));
    //=> No
}
