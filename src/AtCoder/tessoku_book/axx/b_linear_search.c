// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_b

#include <stdio.h>

char* run(int n, int x, int *a)
{
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return "Yes";
        }
    }

    return "No";
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("%s\n", run(5, 40, arr));
    //=> "Yes"

    int arr2[6] = {30, 10, 40, 10, 50, 90};
    printf("%s\n", run(6, 28, arr2));
    //=> No
}
