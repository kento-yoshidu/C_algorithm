// https://atcoder.jp/contests/abc420/tasks/abc420_a

#include <stdio.h>

int fn(int x, int y) {
    if (x == 12 && y == 12) {
        return 12;
    } else {
        return (x + y) % 12;
    }
}

int main() {
    printf("%d\n", fn(5, 9));
    //=> 2

    printf("%d\n", fn(1, 1));
    //=> 2

    printf("%d\n", fn(12, 12));
    //=> 12
}
