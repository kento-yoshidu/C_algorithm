// https://atcoder.jp/contests/abc042/tasks/abc042_a

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

char* func(int a, int b, int c) {
    int vec[3] = {a, b, c};
    qsort(vec, 3, sizeof(int), cmp);

    if (vec[0] == 5 && vec[1] == 5 && vec[2] == 7) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    printf("%s\n", func(5, 5, 7));
    //=> YES

    printf("%s\n", func(7, 7, 5));
    //=> NO
}
