// https://atcoder.jp/contests/abc460/tasks/abc460_a

#include <stdio.h>

int rec(int n, int m, int count) {
    if (m == 0) {
        return count;
    } else {
        rec(n, n % m, count+1);
    }
}

int fn(int n, int m) {
    return rec(n, m, 0);
}

int main() {
    printf("%d\n", fn(8, 5));
    //=> 3

    printf("%d\n", fn(14, 6));
    //=> 2

    printf("%d\n", fn(460, 33));
    //=>5
}
