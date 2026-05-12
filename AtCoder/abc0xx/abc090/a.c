// https://atcoder.jp/contests/abc090/tasks/abc090_a

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fn(char* a, char* b, char* c) {
    char* ans = (char*) malloc(4);

    ans[0] = a[0];
    ans[1] = b[1];
    ans[2] = c[2];
    ans[3] = '\0';

    return ans;
}

int main() {
    printf("%s\n", fn("ant", "obe", "rec"));
    //=> abc

    printf("%s\n", fn("edu", "cat", "ion"));
    //=> ean
}
