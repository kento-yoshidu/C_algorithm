// https://atcoder.jp/contests/abc445/tasks/abc445_a

#include <stdio.h>
#include <string.h>

char* fn(char* s) {
    size_t len = strlen(s);

    if (s[0] == s[len - 1]) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn("luminol"));
    //=> Yes

    printf("%s\n", fn("rule"));
    //=> No
}
