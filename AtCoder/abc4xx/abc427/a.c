// https://atcoder.jp/contests/abc427/tasks/abc427_a

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fn(char* s) {
    size_t len = strlen(s);
    int mid = len / 2;

    char* ans = malloc(len);

    int k = 0;

    for (int i = 0; i < mid; i++) {
        ans[k++] = s[i];
    }

    for (int i = mid + 1; i < len; i++) {
        ans[k++] = s[i];
    }

    ans[k] = '\0';

    return ans;
}

int main() {
    printf("%s\n", fn("ABCDE"));
    //=> ABDE

    printf("%s\n", fn("OOO"));
    //=> OO

    printf("%s\n", fn("ATCODER"));
    //=> ATCDER
}
