// https://atcoder.jp/contests/abc457/tasks/abc457_a

#include <stdio.h>

int fn(int n, int *a, int x) {
    return a[x - 1];
}

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    printf("%d\n", fn(5, arr1, 3));
    //=> 3

    int arr2[10] = {6, 6, 9, 6, 10, 5, 7, 2, 8, 2};
    printf("%d\n", fn(10, arr2, 4));
    //=> 6

    int arr3[10] = {4, 4, 4, 3, 4, 2, 1, 1, 2, 1};
    printf("%d\n", fn(10, arr3, 10));
    //=> 1
}
