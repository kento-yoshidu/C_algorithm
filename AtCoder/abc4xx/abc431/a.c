// https://atcoder.jp/contests/abc431/tasks/abc431_a

#include <stdio.h>
#include "../../../util/util.h"

int fn(int h, int b) {
    return MAX(0, h - b);
}

int main() {
    printf("%d\n", fn(43, 1));
    //=> 42

    printf("%d\n", fn(4, 31));
    //=> 0

    printf("%d\n", fn(1, 1));
    //=> 0
}
