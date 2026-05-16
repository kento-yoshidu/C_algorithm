// https://atcoder.jp/contests/abc110/tasks/abc110_a

#include <stdio.h>

int fn(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a * 10 + b + c;
    } else if (b >= a && b >= c) {
        return b * 10 + a + c;
    } else {
        return c * 10 + a + b;
    }

}

int main() {
    printf("%d\n", fn(1, 5, 2));
    //=> 53

    printf("%d\n", fn(9, 9, 9));
    //=> 108

    printf("%d\n", fn(6, 6, 7));
    //=> 82
}
