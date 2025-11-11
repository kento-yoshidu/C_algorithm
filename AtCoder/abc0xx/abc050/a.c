// https://atcoder.jp/contests/abc050/tasks/abc050_a

#include <stdio.h>

int func(int a, char op, int b) {
    if (op == '+') {
        return a + b;
    } else {
        return a - b;
    }
}

int main() {
    printf("%d\n", func(1, '+', 2));
    //=> 3

    printf("%d\n", func(5, '-', 7));
    //=> -2
}
