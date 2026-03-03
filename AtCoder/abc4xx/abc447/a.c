// https://atcoder.jp/contests/abc447/tasks/abc447_a

#include <stdio.h>

char* fn(int n, int m) {
    if ((n + 1) / 2 >= m) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(6, 3));
    //=> Yes

    printf("%s\n", fn(4, 3));
    //=> No

    printf("%s\n", fn(5, 3));
    //=> Yes

    printf("%s\n", fn(44, 7));
    //=> Yes
}
