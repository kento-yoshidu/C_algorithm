// https://atcoder.jp/contests/abc444/tasks/abc444_a

#include <stdio.h>

char* fn(int n) {
    int a = n / 100;
    int b = n % 100 / 10;
    int c = n % 10;

    if (a == b && b == c) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(444));
    //=> Yes

    printf("%s\n", fn(160));
    //=> No

    printf("%s\n", fn(999));
    //=> Yes
}
