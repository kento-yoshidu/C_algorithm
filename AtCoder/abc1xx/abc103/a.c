// https://atcoder.jp/contests/abc103/tasks/abc103_a

#include <stdio.h>
#include "../../../util/util.h"

int fn(int a, int b, int c) {
    int min = MIN(a, MIN(b, c));
    int max = MAX(a, MAX(b, c));

    return max - min;
}

int main() {
    printf("%d\n", fn(1, 6, 3));
    //=> 5

    printf("%d\n", fn(11, 5, 5));
    //=> 6

    printf("%d\n", fn(100, 100, 100));
    //=> 0
}
