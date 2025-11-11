// https://atcoder.jp/contests/abc012/tasks/abc012_1

#include <stdio.h>
#include <stdlib.h>

int* func(int a, int b)
{
    int* arr = (int*)malloc(2 * sizeof(int));

    arr[0] = b;
    arr[1] = a;

    return arr;
}

int main()
{
    int* res = func(1, 2);
    printf("%d %d\n", res[0], res[1]);
    //=> 2 1

    free(res);

    int* res2 = func(5, 5);
    printf("%d %d\n", res2[0], res2[1]);
    //=> 5 5

    free(res2);
}
