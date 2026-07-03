// https://atcoder.jp/contests/abc418/tasks/abc418_a

#include <stdio.h>

char* fn(int n, char* s) {
    if (n < 3) {
        return "No";
    }

    if (s[n - 3] == 't' && s[n - 2] == 'e' && s[n - 1] == 'a') {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(8, "greentea"));
    //=> Yes

    printf("%s\n", fn(6, "coffee"));
    //=> No

    printf("%s\n", fn(3, "tea"));
    //=> Yes

    printf("%s\n", fn(1, "t"));
    //=> No
}
