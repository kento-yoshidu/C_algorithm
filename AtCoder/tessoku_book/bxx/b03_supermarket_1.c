// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cb

#include <stdio.h>

char* run(int n, int* arr)
{
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 1000) {
                    return "Yes";
                }
            }
        }
    }

    return "No";
}

int main()
{
    int arr[5] = {100, 250, 350, 400, 600};
    printf("%s\n", run(5, arr));
    //=> Yes

    int arr2[10] = {50, 150, 250, 350, 450, 550, 650, 750, 850, 950};
    printf("%s\n", run(10, arr2));
    //=> No
}
