// https://atcoder.jp/contests/abc425/tasks/abc425_a

#include <stdio.h>
#include <math.h>

int fn(int n) {
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            ans -= pow((double) i, 3);
        } else {
            ans += pow((double) i, 3);
        }
    }

    return ans;
}

int main() {
    printf("%d\n", fn(3));
    //=> -20

    printf("%d\n", fn(9));
    //=> -425

    printf("%d\n", fn(10));
    //=> 575
}
