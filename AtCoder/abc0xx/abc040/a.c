// https://atcoder.jp/contests/abc040/tasks/abc040_a

#include <stdio.h>
#include "../../../util/util.h"

int func(int n, int x) {
    return MIN(n - x, x - 1);
}

int main() {
    printf("%d\n", func(5, 2));
    //=> 1

    printf("%d\n", func(6, 4));
    //=> 2

    printf("%d\n", func(90, 30));
    //=> 29
}
