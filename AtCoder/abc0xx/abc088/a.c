// https://atcoder.jp/contests/abc088/tasks/abc088_a

#include <stdio.h>

char* fn(int n, int a) {
    int rest = n % 500;

    if (rest <= a) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(2018, 218));
    //=> Yes

    printf("%s\n", fn(2763, 0));
    //=> No

    printf("%s\n", fn(37, 514));
    //=> Yes
}
