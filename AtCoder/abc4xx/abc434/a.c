// https://atcoder.jp/contests/abc434/tasks/abc434_a

#include <stdio.h>

int fn(int w, int b) {
    return w * 1000 / b + 1;
}

int main() {
    printf("%d\n", fn(80, 5));
    //=> 16001

    printf("%d\n", fn(70, 6));
    //=> 11667

    printf("%d\n", fn(100, 100));
    //=> 1001
}
