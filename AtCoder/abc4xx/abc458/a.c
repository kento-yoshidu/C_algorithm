// https://atcoder.jp/contests/abc458/tasks/abc458_a

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* fn(char* s, int n) {
    int len = strlen(s);
    int ans_len = len - 2 * n;

    char* ans = malloc(ans_len + 1);

    strncpy(ans, s + n, ans_len);
    ans[ans_len] = '\0';

    return ans;
}

int main() {
    printf("%s\n", fn("chemotherapy", 3));
    //=> mother

    printf("%s\n", fn("thermometer", 4));
    //=> mom

    printf("%s\n", fn("burger", 1));
    //=> urge
}
