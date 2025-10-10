// https://atcoder.jp/contests/abc032/tasks/abc032_a

#include <stdio.h>

int func(int a, int b, int n) {
    while(true) {
        if (n % a == 0 && n % b == 0) {
            return n;
        }

        n++;
    }
}

int main() {
    printf("%d\n", func(2, 3, 8));
    //=> 12

    printf("%d\n", func(2, 2, 2));
    //=> 2

    printf("%d\n", func(12, 8, 25));
    //=> 48
}
