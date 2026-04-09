// https://atcoder.jp/contests/abc085/tasks/abc085_a

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* fn(char* s) {
    size_t len = strlen(s);
    char* ans = (char*)malloc(len + 1);

    memcpy(ans, "2018", 4);
    memcpy(ans + 4, s + 4, len - 4);

    ans[len] = '\0';
    return ans;
}

int main() {
    printf("%s\n", fn("2017/01/07"));
    //=> 2018/01/07

    printf("%s\n", fn("2017/01/31"));
    //=> 2018/01/31
}
