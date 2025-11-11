// https://atcoder.jp/contests/abc043/tasks/abc043_a

#include <stdio.h>

int calc(int n, int sum) {
    if (n == 1) {
        return sum + n;
    } else {
        calc(n-1, sum + n);
    }
}

int func(int n) {
    return calc(n, 0);
}

int main() {
    printf("%i\n", func(3));
    //=> 6

    printf("%i\n", func(10));
    //=> 55

    printf("%i\n", func(1));
    //=> 1
}
