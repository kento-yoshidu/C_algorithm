// https://atcoder.jp/contests/abc448/tasks/abc448_a

#include <stdio.h>

void fn(int n, int x, int a[], int ans[]) {
    int cur = x;

    for (int i = 0; i < n; i++) {
        if (a[i] <= cur) {
            cur = a[i];
            ans[i] = 1;
        } else {
            ans[i] = 0;
        }
    }
}

int main() {
    int n1 = 5;
    int x1 = 10;
    int a1[] = {6, 4, 7, 1, 3};
    int ans1[n1];

    fn(n1, x1, a1, ans1);

    for (int i = 0; i < 5; i++) {
        printf("%d ", ans1[i]);
        //=> 1 1 0 1 0
    }

    printf("\n");
}
