// https://atcoder.jp/contests/abc018/tasks/abc018_1

#include <stdio.h>

typedef struct {
    int values[3];
} Ans;

Ans func(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    int sorted[3];
    Ans result;

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

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i] == sorted[j]) {
                result.values[i] = j + 1;
                break;
            }
        }
    }

    return result;
}

int main()
{
    Ans res = func(12, 18, 11);
    printf("%d %d %d\n", res.values[0], res.values[1], res.values[2]);
    //=> 2 1 3

    Ans res2 = func(10, 20, 30);
    printf("%d %d %d\n", res2.values[0], res2.values[1], res2.values[2]);
    //=> 3 2 1
}
