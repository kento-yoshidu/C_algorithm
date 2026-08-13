// https://atcoder.jp/contests/abc109/tasks/abc109_a

#include <stdio.h>

char* fn(int a, int b) {
    if (a * b % 2 == 0) {
        return "No";
    } else {
        return "Yes";
    }
}

int main() {
    printf("%s\n", fn(3, 1));
    //=> Yes

    printf("%s\n", fn(1, 2));
    //=> No

    printf("%s\n", fn(2, 2));
    //=> No
}
