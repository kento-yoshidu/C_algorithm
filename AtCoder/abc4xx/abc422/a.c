// https://atcoder.jp/contests/abc422/tasks/abc422_a

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* fn(char* s) {
    char* ans = malloc(4);

    char a = s[0];
    char b = s[2];

    if (b == '8') {
        ans[0] = a + 1;
        ans[2] = '1';
    } else {
        ans[0] = a;
        ans[2] = b + 1;
    }

    ans[1] = '-';
    ans[3] = '\0';

    return ans;
}

int main() {
    printf("%s\n", fn("4-2"));
    //=> 4-3

    printf("%s\n", fn("1-8"));
    //=> 2-1

    printf("%s\n", fn("3-3"));
    //=> 3-4
}
