// https://atcoder.jp/contests/abc076/tasks/abc076_a

#include <stdio.h>

int func(int r, int g) {
    return g + (g - r);
}

int main() {
    printf("%d\n", func(2002, 2017));
    //=> 2032

    printf("%d\n", func(4500, 0));
    //=> -4500
}
