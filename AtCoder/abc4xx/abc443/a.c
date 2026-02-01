// https://atcoder.jp/contests/abc443/tasks/abc443_a

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fn(char* s) {
    size_t len = strlen(s);
    char* ans = (char*)malloc(len + 1);

    strcpy(ans, s);
    strcat(ans, "s");

    return ans;
}

int main() {
    printf("%s\n", fn("http"));
    //=> https

    printf("%s\n", fn("append"));
    //=> appends

    printf("%s\n", fn("beginner"));
    //=> beginners
}
