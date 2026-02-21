// https://atcoder.jp/contests/abc436/tasks/abc436_a

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fn(int n, char* s) {
    int len = strlen(s);
    char* new_str = (char*)malloc(n + 1);

    int padding = n - len;

    memset(new_str, 'o', padding);

    strcpy(new_str + padding, s);

    return new_str;
}

int main() {
    printf("%s\n", fn(5, "abc"));
    //=> ooabc

    printf("%s\n", fn(2, "o"));
    //=> oo

    printf("%s\n", fn(12, "vgxgpuam"));
    //=> oooovgxgpuam
}
