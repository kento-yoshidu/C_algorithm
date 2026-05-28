// https://atcoder.jp/contests/abc093/tasks/abc093_a

#include <stdio.h>

int cmp_char(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

char* fn(char* s) {
    int count[3] = {0};

    for (int i = 0; i < 3; i++) {
        count[s[i] - 'a']++;
    }

    if (count[0] == 1 && count[1] == 1 && count[2] == 1) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn("bac"));
    //=> Yes

    printf("%s\n", fn("bab"));
    //=> No

    printf("%s\n", fn("abc"));
    //=> Yes

    printf("%s\n", fn("aaa"));
    //=> No
}
