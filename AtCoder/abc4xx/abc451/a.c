// https://atcoder.jp/contests/abc451/tasks/abc451_a

#include <stdio.h>
#include <string.h>

char* fn(char* s) {
    if (strlen(s) % 5 == 0) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn("legal"));
    //=> Yes

    printf("%s\n", fn("atcoder"));
    //=> No

    printf("%s\n", fn("illegal"));
    //=> No
}
