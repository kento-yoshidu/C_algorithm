// https://atcoder.jp/contests/abc059/tasks/abc059_a

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* func(char* a, char* b, char* c) {
    char* ans = malloc(4);

    ans[0] = toupper((unsigned char)a[0]);
    ans[1] = toupper((unsigned char)b[0]);
    ans[2] = toupper((unsigned char)c[0]);
    ans[3] = '\0';

    return ans;
}

int main() {
    printf("%s\n", func("atcoder", "beginner", "contest"));
    //=> ABC

    printf("%s\n", func("resident", "register", "number"));
    //=> RRN

    printf("%s\n", func("k", "nearest", "neighbor"));
    //=> KNN

    printf("%s\n", func("async", "layered", "coding"));
    //=> ALC
}
