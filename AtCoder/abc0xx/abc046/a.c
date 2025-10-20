// https://atcoder.jp/contests/abc046/tasks/abc046_a

#include <stdio.h>

int func(int a, int b, int c) {
    int ans;

    if (a == b && b == c) {
        ans = 1;
    } else if (a == b || b == c || a == c) {
        ans = 2;
    } else {
        ans = 3;
    }

    return ans;
}

int main() {
    printf("%d\n", func(3, 1, 4));
    //=> 3

    printf("%d\n", func(3, 3, 33));
    //=> 2
}
