// https://atcoder.jp/contests/abc080/tasks/abc080_a

#include <stdio.h>
#include "../../../util/util.h"

int func(int n, int a, int b) {
    return MIN(b, n * a);
}

int main() {
    printf("%d\n", func(7, 17, 120));
    //=> 119

    printf("%d\n", func(5, 20, 100));
    //=> 100

    printf("%d\n", func(6, 18, 100));
    //=> 100
}
