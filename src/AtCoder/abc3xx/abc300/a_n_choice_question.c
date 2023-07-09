// https://atcoder.jp/contests/abc300/tasks/abc300_a

#include <stdio.h>

int run(int n, int a, int b, int *c)
{
    int i;

    for (i = 0; i < n; i++) {
        if (a + b == c[i]) {
            break;
        }
    }

    return i + 1;
}

int main()
{
    int arr1[3] = {200, 300, 400};
    printf("%d\n", run(3, 125, 175, arr1));
    //=> 2

    int arr2[1] = {2};
    printf("%d\n", run(1, 1, 1, arr2));
    //=> 1

    int arr3[5] = {135, 246, 357, 468, 579};
    printf("%d\n", run(5, 123, 456, arr3));
    //=> 5

    return 0;
}
