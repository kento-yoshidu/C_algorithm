// https://atcoder.jp/contests/abc071/tasks/abc071_a

#include <stdio.h>
#include "../../../util/util.h"


char func(int x, int a, int b) {
    int i = ABS(x - a);
    int j = ABS(x - b);

    if (i < j) {
        return 'A';
    } else {
        return 'B';
    }
}

int main() {
    printf("%c\n", func(5, 2, 7));
    //=> B

    printf("%c\n", func(1, 999, 1000));
    //=> A
}
