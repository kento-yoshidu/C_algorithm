// https://atcoder.jp/contests/abc111/tasks/abc111_a

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* fn(char* n) {
    char* ans = malloc(4);

    for (int i = 0; i < 3; i++) {
        if (n[i] == '1') {
            ans[i] = '9';
        } else {
            ans[i] = '1';
        }
    }

    ans[3] = '\0';

    return ans;
}

int fn2(int n) {
    return 1110 - n;
}

int main() {
    printf("%s\n", fn("119"));
    printf("%d\n", fn2(119));
    //=> 991

    printf("%s\n", fn("999"));
    printf("%d\n", fn2(999));
    //=> 111
}
