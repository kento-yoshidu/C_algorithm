// https://atcoder.jp/contests/abc092/tasks/abc092_a

#include <stdio.h>
#include "../../../util/util.h"

int fn(int a, int b, int c, int d) {
    return MIN(a, b) + MIN(c, d);
}

int main() {
    printf("%d\n", fn(600, 300, 220, 420));
    //=> 520

    printf("%d\n", fn(555, 555, 400, 200));
    //=> 755

    printf("%d\n", fn(549, 817, 715, 603));
    //=> 1152
}
