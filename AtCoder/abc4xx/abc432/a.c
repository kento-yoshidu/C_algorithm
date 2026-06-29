// https://atcoder.jp/contests/abc432/tasks/abc432_a

#include <stdio.h>

int fn(int a, int b, int c) {
    int arr[3] = {a, b, c};
    int sorted[3];

    for (int i = 0; i < 3; i++) {
        sorted[i] = arr[i];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (sorted[i] < sorted[j]) {
                int tmp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = tmp;
            }
        }
    }

    return sorted[0] * 100 + sorted[1] * 10 + sorted[2];
}

int main() {
    printf("%d\n", fn(3, 2, 4));
    //=> 432

    printf("%d\n", fn(7, 7, 7));
    //=> 777

    printf("%d\n", fn(9, 1, 9));
    //=> 991
}
