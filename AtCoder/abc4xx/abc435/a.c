// https://atcoder.jp/contests/abc435/tasks/abc435_a

#include <stdio.h>

int rec(int i, int sum) {
    if (i == 1) {
        return sum + 1;
    } else {
        rec(i - 1, sum + i);
    }
}

int fn(int n) {
    return rec(n, 0);
}

int main() {
    printf("%d\n", fn(5));
    //=> 15

    printf("%d\n", fn(1));
    //=> 1

    printf("%d\n", fn(29));
    //=> 435
}
