// https://atcoder.jp/contests/abc421/tasks/abc421_a

#include <stdio.h>

char* fn(int n, char* s[], int x, char* y) {
    if (s[x-1] == y) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    char* s1[3] = {"sato", "suzuki", "takahashi"};
    printf("%s\n", fn(3, s1, 3, "takahashi"));
    //=> Yes

    char* s2[3] = {"sato", "suzuki", "takahashi"};
    printf("%s\n", fn(3, s2, 1, "aoki"));
    //=> No

    char* s3[2] = {"smith", "smith"};
    printf("%s\n", fn(1, s3, 1, "smith"));
    //=> Yes
}
