// https://atcoder.jp/contests/abc052/tasks/abc052_a

#include <stdio.h>
#include "../../../util/util.h"

int func(int a, int b, int c, int d) {
    return MAX(a*b, c*d);
}

int main() {
    printf("%d\n", func(3, 5, 2, 7));
    //=> 15

    printf("%d\n", func(100, 600, 200, 300));
    //=> 60000
}
