// https://atcoder.jp/contests/abc072/tasks/abc072_a

#include <stdio.h>
#include "../../../util/util.h"

int func(int x, int t) {
    return MAX(0, x - t);
}

int main() {
    printf("%d\n", func(100, 17));
    //=> 83

    printf("%d\n", func(48, 58));
    //=> 0

    printf("%d\n", func(1000000000, 1000000000));
    //=> 0
}
