// https://atcoder.jp/contests/abc428/tasks/abc428_a

#include <stdio.h>
#include "../../../util/util.h"

int fn(int s, int a, int b, int x) {
    int rem = x % (a + b);
    int sum = x / (a + b) * a * s;

    return sum + MIN(a, rem) * s;
}

int main() {
    printf("%d\n", fn(7, 3, 2, 11));
    //=> 49

    printf("%d\n", fn(6, 3, 2, 9));
    //=> 36

    printf("%d\n", fn(1, 1, 666, 428));
    //=> 1
}
