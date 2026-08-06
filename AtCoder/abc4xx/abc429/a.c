// https://atcoder.jp/contests/abc429/tasks/abc429_a

#include <stdio.h>
#include <stdlib.h>

char **fn(int n, int m) {
    char **res = malloc(sizeof(char*) * n);

    for (int i = 0; i < n; i++) {
        if (i <= m - 1) {
            res[i] = "OK";
        } else {
            res[i] = "Too Many Requests";
        }
    }

    return res;
}

int main() {
    int n = 5;
    int m = 3;
    char **res = fn(n, m);

    for (int i = 0; i < n; i++) {
        printf("%s\n", res[i]);
    }

    int n2 = 3;
    int m2 = 5;
    char** res2 = fn(n2, m2);

    for (int i = 0; i < n2; i++) {
        printf("%s\n", res2[i]);
    }
}
