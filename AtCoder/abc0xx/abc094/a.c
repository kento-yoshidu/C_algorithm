// https://atcoder.jp/contests/abc094/tasks/abc094_a

#include <stdio.h>

char* fn(int a, int b, int x) {
    if (x < a) {
        return "NO";
    } else if (a + b < x) {
        return "NO";
    } else {
        return "YES";
    }
}

int main() {
    printf("%s\n", fn(3, 5, 4));
    //=> YES

    printf("%s\n", fn(2, 2, 6));
    //=> NO

    printf("%s\n", fn(5, 3, 2));
    //=> NO
}
