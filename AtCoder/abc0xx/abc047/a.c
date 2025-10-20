// https://atcoder.jp/contests/abc047/tasks/abc047_a

#include <stdio.h>

char* func(int a, int b, int c) {
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

    if (sorted[0] + sorted[1] == sorted[2]) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", func(10, 30, 20));
    //=> Yes

    printf("%s\n", func(30, 30, 100));
    //=> No

    printf("%s\n", func(56, 25, 31));
    //=> Yes
}
