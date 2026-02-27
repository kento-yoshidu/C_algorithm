// https://atcoder.jp/contests/abc446/tasks/abc446_a

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* fn(char* s) {
    size_t len = strlen(s);
    char* ans = (char*) malloc(len + 3);

    ans[0] = 'O';
    ans[1] = 'f';

    for (size_t i = 0; i < len; i++) {
        ans[i + 2] = tolower((unsigned char) s[i]);
    }

    ans[len + 2] = '\0';

    return ans;
}

int main() {
    printf("%s\n", fn("Glen"));
    //=> Ofglen

    printf("%s\n", fn("I"));
    //=> Ofi

    printf("%s\n", fn("Fred"));
    //=> Offred
}
