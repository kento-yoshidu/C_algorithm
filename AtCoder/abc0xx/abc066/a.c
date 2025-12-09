// https://atcoder.jp/contests/abc066/tasks/abc066_a

#include <stdio.h>

int func(int a, int b, int c) {
    int arr[3] = {a, b, c};
    int sorted[3];

    for (int i = 0; i < 3; i++) {
        sorted[i] = arr[i];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i+1; j < 3; j++) {
            if (sorted[i] > sorted[j]) {
                int tmp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = tmp;
            }
        }
    }

    return sorted[0] + sorted[1];
}

int main() {
    printf("%d\n", func(700, 600, 780));
    //=> 1300

    printf("%d\n", func(10000, 10000, 10000));
    //=> 20000
}
