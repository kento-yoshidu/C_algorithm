// https://atcoder.jp/contests/abc308/tasks/abc308_a

#include <stdio.h>

char* run(int *n)
{
    char* result;

    for (int i = 0; i < 8; i++) {
        if (n[i] < 100 || 675 < n[i] || n[i] % 25 != 0) {
            return "No";
        }
    }

    for (int i = 0; i < 7; i++) {
        if (n[i] > n[i+1]) {
            return "No";
        }
    }

    return "Yes";
}

int main() {
    int arr1[8] = {125, 175, 250, 300, 400, 525, 600, 650};
    printf("%s\n", run(arr1));
    // Yes

    int arr2[8] = {100, 250, 300, 400, 325, 575, 625, 675};
    printf("%s\n", run(arr2));
    // No

    int arr3[8] = {0, 23, 24, 145, 301, 413, 631, 632};
    printf("%s\n", run(arr3));
    // No

    return 0;
}
